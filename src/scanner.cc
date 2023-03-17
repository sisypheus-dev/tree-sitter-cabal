#include <tree_sitter/parser.h>
#include <algorithm>
#include <cstdint>
#include <vector>
#include <iostream>

using namespace std;

namespace {
enum token_t {
    COMMENT,
    INDENT,
    DEDENT,
    INDENTED,
};

class scanner {
public:
    scanner() {
        deserialize(NULL, 0);
    }

    unsigned serialize(char *buffer) {
        size_t i = 0;
        for_each(indent_lvls.cbegin(), indent_lvls.cend(), [buffer, &i](uint8_t const n) { buffer[i++] = n; });
        return indent_lvls.size();
    }

    void deserialize(char const *buffer, unsigned length) {
        indent_lvls.clear();
        indent_lvls.push_back(0);

        for(size_t i = 0; i < length; i++) {
            indent_lvls.push_back(buffer[i]);
        }
    }

    bool scan(TSLexer *lexer, bool const *valid_symbols) {
        if(valid_symbols[DEDENT] && lexer->eof(lexer)) {
            lexer->result_symbol = DEDENT;
            return true;
        } else if(lexer->lookahead != '\n') {
            return false;
        }

        lexer->advance(lexer, true);
        uint8_t indent = 0;
        while(true) {
            if(lexer->lookahead == ' ') {
                indent++;
                lexer->advance(lexer, true);
            } else if(lexer->lookahead == '\n') {
                indent = 0;
                lexer->advance(lexer, true);
            } else {
                break;
            }
        }

        auto cur_indent_lvl = indent_lvls.back();
        if(valid_symbols[INDENT] && indent > cur_indent_lvl) {
            indent_lvls.push_back(indent);
            lexer->result_symbol = INDENT;
            return true;
        } else if(valid_symbols[DEDENT] && indent < cur_indent_lvl) {
            while(indent < indent_lvls.back()) {
                indent_lvls.pop_back();
            }
            if(indent != indent_lvls.back()) {
                indent_lvls.push_back(indent);
            }
            lexer->result_symbol = DEDENT;
            return true;
        } else if(valid_symbols[INDENTED] && indent > 0) {
            lexer->result_symbol = INDENTED;
            return true;
        } else {
            return false;
        }
    }

private:
    vector<uint8_t> indent_lvls;
};

extern "C" {

    void *tree_sitter_cabal_external_scanner_create() {
        return new scanner();
    }

    bool tree_sitter_cabal_external_scanner_scan(void *payload, TSLexer *lexer, bool const *valid_symbols) {
        scanner *s = static_cast<scanner *>(payload);
        return s->scan(lexer, valid_symbols);
    }

    unsigned tree_sitter_cabal_external_scanner_serialize(void *payload, char *buffer) {
        scanner *s = static_cast<scanner *>(payload);
        return s->serialize(buffer);
    }

    void tree_sitter_cabal_external_scanner_deserialize(void *payload, char const *buffer, unsigned length) {
        scanner *s = static_cast<scanner *>(payload);
        s->deserialize(buffer, length);
    }

    void tree_sitter_cabal_external_scanner_destroy(void *payload) {
        scanner *s = static_cast<scanner *>(payload);
        delete s;
    }
}
}

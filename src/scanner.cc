#include <tree_sitter/parser.h>
#include <algorithm>
#include <cstdint>
#include <vector>

using namespace std;

namespace {
enum token_t {
    COMMENT,
};

class scanner {
public:
    scanner() {
        deserialize(NULL, 0);
    }

    unsigned serialize(char *buffer) {
        size_t i = 0;
        for_each(indent_length.cbegin(), indent_length.cend(), [buffer, &i](uint8_t const n) { buffer[i++] = n; });
        return indent_length.size();
    }

    void deserialize(char const *buffer, unsigned length) {
        indent_length.clear();
        indent_length.push_back(0);

        for(size_t i = 0; i < length; i++) {
            indent_length.push_back(buffer[i]);
        }
    }

    bool scan(TSLexer *lexer, bool const *valid_symbols) { return false; }

private:
    vector<uint8_t> indent_length;
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

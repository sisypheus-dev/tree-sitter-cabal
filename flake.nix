{
  inputs = { nixpkgs.url = "github:nixos/nixpkgs?ref=release-22.05"; };

  outputs = { self, nixpkgs }:
    with nixpkgs.legacyPackages.x86_64-linux; {
      devShell.x86_64-linux = mkShell { buildInputs = [ nodejs ]; };
    };
}

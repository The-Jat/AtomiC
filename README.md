# AtomiC

A self made c compiler, currently in initial stages.

## Features

- **Lexical Analysis (`--lex`)**: Tokenizes the input source code to identify keywords, identifiers, literals, and symbols.
- **Parsing (`--parse`)**: Builds a basic abstract syntax tree (AST) from the tokenized input.
- **Code Generation (`--codegen`)**: Outputs intermediate or pseudo-code representing the compiled structure of the input program.

## Requirements

- **Compiler**: GCC or any C compiler supporting ANSI C.
- **Platform**: Works on Linux, macOS, and Windows (with appropriate tools like MinGW or WSL).

## Installation

1. Clone the repository:
   ```bash
   git clone https://github.com/The-Jat/AtomiC.git
   cd AtomiC
   ```
2. Build the executable
   ```bash
   make
   ```

## Usage
Run the compiler with the following syntax:
```bash
./atomic <path_to_c_file> [--lex | --parse | --codegen]
```
## Example
   ```bash
  ./atomic test.c --lex
  ```

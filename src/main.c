#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// Function to print an error message and exit the program
void handleError(char* errorMessage) {
    printf("Error: %s\n", errorMessage);
    exit(1);
}

int main(int argc, char** argv) {
    // Check if sufficient arguments are provided
    if (argc < 2) {
        handleError("Insufficient arguments. Usage: ./atomic <source_file.c> [--lex, --parse, --codegen]");
    }

    // Extract the source file path and stage option from arguments
    char* sourceFilePath = argv[1];
    char* processingStage = (argc > 2) ? argv[2] : NULL;

    // Flags to determine the stage of processing
    bool isLexing = false;
    bool isParsing = false;
    bool isCodeGen = false;

    // Determine the processing stage based on the provided flag
    if (processingStage != NULL) {
        if (strcmp(processingStage, "--lex") == 0) {
            isLexing = true;
        } else if (strcmp(processingStage, "--parse") == 0) {
            isParsing = true;
        } else if (strcmp(processingStage, "--codegen") == 0) {
            isCodeGen = true;
        } else {
            printf("Invalid option: %s\n", processingStage);
            handleError("Unsupported stage option.");
        }
    }

    // Example output to verify correct stage selection
    if (isLexing) {
        printf("Lexical analysis selected for file: %s\n", sourceFilePath);
    } else if (isParsing) {
        printf("Parsing selected for file: %s\n", sourceFilePath);
    } else if (isCodeGen) {
        printf("Code generation selected for file: %s\n", sourceFilePath);
    } else {
        printf("No specific processing stage selected for file: %s\n", sourceFilePath);
    }

    // Add further processing logic for lexing, parsing, or code generation here

    return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 256

int main(int argc, char *argv[]) {
    FILE *inputFile = stdin;
    char *previousLine = NULL;
    char currentLine[MAX_LINE_LENGTH];
    int compareResult;

    if (argc > 2) {
        fprintf(stderr, "Usage: %s [file]\n", argv[0]);
        return 1;
    }

    if (argc == 2) {
        inputFile = fopen(argv[1], "r");
        if (inputFile == NULL) {
            perror("Error opening file");
            return 1;
        }
    }

    while (fgets(currentLine, sizeof(currentLine), inputFile) != NULL) {
        // Remove trailing newline character if present
        size_t len = strlen(currentLine);
        if (len > 0 && currentLine[len - 1] == '\n') {
            currentLine[len - 1] = '\0';
        }

        if (previousLine == NULL) {
            previousLine = strdup(currentLine);
            if (previousLine == NULL) {
                perror("Memory allocation failed");
                if (inputFile != stdin) fclose(inputFile);
                return 1;
            }
            printf("%s\n", previousLine);
        } else {
            compareResult = strcmp(previousLine, currentLine);
            if (compareResult != 0) {
                printf("%s\n", currentLine);
                free(previousLine);
                previousLine = strdup(currentLine);
                if (previousLine == NULL) {
                    perror("Memory allocation failed");
                    if (inputFile != stdin) fclose(inputFile);
                    return 1;
                }
            }
        }
    }

    if (previousLine != NULL) {
        free(previousLine);
    }

    if (inputFile != stdin) {
        fclose(inputFile);
    }

    return 0;
}

/*
o/p

gcc myuniq.c -o myuniq
cat hello.txt | ./myuniq
./myuniq < hello.txt
hello
how
are
you

*/

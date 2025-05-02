#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, world! Welcome to C programming.";
    char *token;

    // Get the first token
    token = strtok(str, " ,.!");

    // Walk through other tokens
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, " ,.!");
    }

    return 0;
}

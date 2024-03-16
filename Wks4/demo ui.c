#include <stdio.h>
#include <string.h>

#define MAX_INPUT_LENGTH 50

int main() {
    char input[MAX_INPUT_LENGTH + 1]; // +1 for null terminator
    int ch;
    int inputLength = 0;

    // Print instructions
    printf("Enter text and press Enter:\n");

    // Main loop
    while ((ch = getchar()) != '\n' && inputLength < MAX_INPUT_LENGTH) {
        if (ch == '\b') {
            // Handle backspace
            if (inputLength > 0) {
                input[--inputLength] = '\0';
                printf("\b \b");
                fflush(stdout);
            }
        } else {
            // Handle regular input
            input[inputLength++] = ch;
            putchar(ch);
            fflush(stdout);
        }
    }

    // Display input on screen
    printf("\nYou entered: %s\n", input);

    return 0;
}


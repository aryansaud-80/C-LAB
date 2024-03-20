// Write a c Programming to write a sentence to a file.

#include <stdio.h>

int main() {
    FILE *filePointer;
    char sentence[100];

    filePointer = fopen("sentence.txt", "w");

    if (filePointer == NULL) {
        printf("Unable to create file.\n");
        return 1;
    }

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    fprintf(filePointer, "%s", sentence);

    fclose(filePointer);

    printf("Sentence written to file successfully.\n");

    return 0;
}

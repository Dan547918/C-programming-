/*
Name: Duncan Mugambi Gitonga
Reg No:CT101/G/26547/25
Descriprion: Track of borrowed books in the library
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    char bookTitle[346];
    
    printf("Enter the title of the borrowed book: ");
    fgets(bookTitle, sizeof(bookTitle), stdin);

    // Remove the newline character from the input
    for (int i = 0; bookTitle[i] != '\0'; i++) {
        if (bookTitle[i] == '\n') {
            bookTitle[i] = '\0';
            break;
        }
    }

    FILE *filePointer;
 filePointer = fopen("borrowed_books.txt", "a");

    if (filePointer == NULL) {
        printf("Error: Could not open the file.\n");
        return 1;
    }

    fprintf(filePointer, "%s\n", bookTitle);
    fclose(filePointer);

    printf("Book title successfully stored in borrowed_books.txt.\n");

    return 0;
}
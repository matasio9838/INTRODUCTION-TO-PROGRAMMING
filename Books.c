#include <stdio.h>

int main() {
    FILE *file;
    char title[100];

    file = fopen("borrowed_books.txt", "a"); // "a" means append mode
    if (file == NULL) {
        printf("Error opening file!\n");
        return(1);
    }

    printf("Enter book title: ");
    fgets(title, sizeof(title), stdin); // read full line including spaces

    fprintf(file, "%s", title); // store book title in file
    fclose(file);

    printf("Book title successfully stored in borrowed_books.txt\n");

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct library {
    char book_name[100];
    char author_name[100];
    float cost;
    int no_of_pages;
};

int main() {
    struct library lib[100];
    int i, j, count;
    i = 0;
    j = 0;
    count = 0;

    while (j != 4) {
        printf("\n\n1. Add Book details\n");
        printf("2. Display the list of books and its details\n");
        printf("3. Display the total no. of books in the library\n");
        printf("4. Exit\n\n");
        printf("Enter the number: ");
        scanf("%d", &j);

        switch (j) {
            case 1:
                printf("\n---- Add Books details Below ---- \n");
                printf("Enter the book name (hit enter to finish): ");
                getchar(); // Clear the newline character from the input buffer
                fgets(lib[i].book_name, sizeof(lib[i].book_name), stdin);
                lib[i].book_name[strcspn(lib[i].book_name, "\n")] = '\0'; // Remove the trailing newline character

                printf("Enter the author name (hit enter to finish): ");
                fgets(lib[i].author_name, sizeof(lib[i].author_name), stdin);
                lib[i].author_name[strcspn(lib[i].author_name, "\n")] = '\0'; // Remove the trailing newline character

                printf("Enter the number of pages: ");
                scanf("%d", &lib[i].no_of_pages);
                printf("Enter the cost of the book: ");
                scanf("%f", &lib[i].cost);
                count++;
                i++;
                break;

            case 2:
                if (count == 0) {
                    printf("\nThere are no books stored!!\n\n");
                } else {
                    printf("\nYou can view the list of books\n");
                    printf("The list of books are:\n\n");
                    for (int k = 0; k < count; k++) {
                        printf("Book Name: %s\n", lib[k].book_name);
                        printf("Author Name: %s\n", lib[k].author_name);
                        printf("Number of pages: %d\n", lib[k].no_of_pages);
                        printf("Cost of the book: %.2f\n\n", lib[k].cost);
                    }
                }
                break;

            case 3:
                printf("\nTotal number of books in the library: %d\n\n", count);
                break;

            case 4:
                printf("\nExiting...\n");
                break;

            default:
                printf("\nInvalid number entered\n\n");
                break;
        }
    }

    return 0;
}

#include <stdio.h>
#include <string.h>

struct Book {
    char title[100];
    char author[100];
    int year;
};

int main() {
    struct Book library[100];
    int numBooks = 0;

    printf("Library Management System\n");

    while (1) {
        printf("\n1. Add Book\n");
        printf("2. Display All Books\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");

        int choice;
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (numBooks >= 100) {
                    printf("Library is full. Cannot add more books.\n");
                    break;
                }

                printf("\nEnter book title: ");
                scanf(" %[^\n]s", library[numBooks].title);

                printf("Enter book author: ");
                scanf(" %[^\n]s", library[numBooks].author);

                printf("Enter publication year: ");
                scanf("%d", &library[numBooks].year);

                numBooks++;
                break;

            case 2:
                if (numBooks == 0) {
                    printf("No books in the library.\n");
                } else {
                    printf("\nBooks in the library:\n");
                    for (int i = 0; i < numBooks; i++) {
                        printf("Book %d:\n", i + 1);
                        printf("Title: %s\n", library[i].title);
                        printf("Author: %s\n", library[i].author);
                        printf("Year: %d\n\n", library[i].year);
                    }
                }
                break;

            case 3:
                printf("Exiting Library Management System.\n");
                return 0;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}

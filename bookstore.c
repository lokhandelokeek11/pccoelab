#include <stdio.h>
#include <string.h>

struct Book {
    char title[50];  // Changed the size to 50, adjust as needed
    char author[50]; // Changed the size to 50, adjust as needed
    char genre[50];  // Changed the size to 50, adjust as needed
    char releasedate[11]; // Use a suitable data type or date structure
};

int main() {
    int n = 5;
    struct Book books[5];

    printf("Enter the details of %d books:\n", n);
    for (int i = 0; i < 5; i++) {
        printf("Enter the title of book:\n");
        scanf("%s", books[i].title);

        printf("Enter the name of author:\n");
        scanf("%s", books[i].author);

        printf("Enter the type of genre:\n");
        scanf("%s", books[i].genre);

        printf("Enter the release date of book:\n");
        scanf("%s", books[i].releasedate);
    }

    int choice;
    printf("Sort by:\n");
    printf("1. Title\n2. Author\n3. Genre\n4. Release Date\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            for (int i = 0; i < n; i++) {
                for (int j = i; j < n; j++) {
                    if (strcmp(books[i].title, books[j].title) > 0) {
                        struct Book temp = books[i];
                        books[i] = books[j];
                        books[j] = temp;
                    }
                }
            }
            break;

        case 2:
            for (int i = 0; i < n; i++) {
                for (int j = i; j < n; j++) {
                    if (strcmp(books[i].author, books[j].author) > 0) {
                        struct Book temp = books[i];
                        books[i] = books[j];
                        books[j] = temp;
                    }
                }
            }
            break;

        case 3:
            for (int i = 0; i < n; i++) {
                for (int j = i; j < n; j++) {
                    if (strcmp(books[i].genre, books[j].genre) > 0) {
                        struct Book temp = books[i];
                        books[i] = books[j];
                        books[j] = temp;
                    }
                }
            }
            break;

        case 4:
             for (int i = 0; i < n; i++) {
                for (int j = i; j < n; j++) {
                    if (strcmp(books[i].releasedate, books[j].releasedate) > 0) {
                        struct Book temp = books[i];
                        books[i] = books[j];
                        books[j] = temp;
                    }
                }
            }
            // You'll need to implement this part according to your data type.
            break;

        default:
            break;
    }

    printf("The sorted books are:\n");
    for (int i = 0; i < 5; i++) {
        printf("Title: %s\nAuthor: %s\nGenre: %s\nRelease Date: %s\n", books[i].title, books[i].author, books[i].genre, books[i].releasedate);
    }

    return 0;
}

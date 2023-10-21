#include <stdio.h>
#include <string.h>

struct student {
    char name[50];
    int rollno;
    char division[16];
    int phonenum;
    char email; // This should be a character array for email.
};

int main() {
    struct student s1[5];
	
    for (int i = 0; i < 5; i++) {
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", s1[i].name);
        printf("NAME: %s\n", s1[i].name);
    }

    return 0;
}


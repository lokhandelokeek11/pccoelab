#include <stdio.h>
#include <string.h>

struct Student {
    int roll_no;
    char name[50];
    float percentage;
};

int main() {
    int n, roll_to_find;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    for (int i = 0; i < n; i++) {
        printf("Enter Roll No: ");
        scanf("%d", &students[i].roll_no);
        printf("Enter Name: ");
        scanf("%s", students[i].name);
        printf("Enter Percentage: ");
        scanf("%f", &students[i].percentage);
    }

    // descending order of percentage using Insertion Sort
    for (int i = 1; i < n; i++) {
        struct Student key = students[i];
        int j = i - 1;
        while (j >= 0 && students[j].percentage < key.percentage) {
            students[j + 1] = students[j];
            j = j - 1;
        }
        students[j + 1] = key;
    }

    printf("\nStudent Information Sorted by Percentage in descending:\n");
    printf("Roll No\tName\tPercentage\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%s\t%.2f\n", students[i].roll_no, students[i].name, students[i].percentage);
    }

    printf("\nEnter Roll No to search for: ");
    scanf("%d", &roll_to_find);

    // Linear search for the specified roll number
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (students[i].roll_no == roll_to_find) {
            printf("\nStudent Found:\n");
            printf("Roll No: %d\nName: %s\nPercentage: %.2f\n", students[i].roll_no, students[i].name, students[i].percentage);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("\nStudent with Roll No %d not found.\n", roll_to_find);
    }

    return 0;
}

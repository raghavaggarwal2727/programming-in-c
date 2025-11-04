#include <stdio.h>

// Define the Student structure
struct Student {
    char name[50];
    int sapID;
    float marks;
};

int main() {
    struct Student students[5];  // Array to hold 5 students

    // Input details for each student
    for (int i = 0; i < 5; i++) {
        printf("Enter details for Student %d:\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]", students[i].name);  // Read string with spaces

        printf("SAP ID: ");
        scanf("%d", &students[i].sapID);

        printf("Marks: ");
        scanf("%f", &students[i].marks);

        printf("\n");
    }

    // Display details of all students
    printf("Details of all students:\n");
    for (int i = 0; i < 5; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("SAP ID: %d\n", students[i].sapID);
        printf("Marks: %.2f\n\n", students[i].marks);
    }

    return 0;
}
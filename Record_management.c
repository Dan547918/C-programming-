/*
Name: Duncan Mugambi Gitonga
Reg No:CT101/G/26547/25
Descriprion: students records management
*/

#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    char regNo[20];
    float totalMarks;
};

void addStudent();
void viewStudents();

int main() {
    int choice;

    while (1) {
        printf("\n Student Examination System \n");
        printf("1. Add New Student Record\n");
        printf("2. View All Student Records\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                viewStudents();
                break;
            case 3:
                printf("Exiting... \n");
                exit(0);
            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}

void addStudent() {
    struct Student s;
    FILE *fptr;

    fptr = fopen("results.dat", "ab"); // append in binary mode
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("Enter student name: ");
    scanf("%s", s.name);

    printf("Enter registration number: ");
    scanf("%s", s.regNo);

    printf("Enter total marks: ");
    scanf("%f", &s.totalMarks);

    fwrite(&s, sizeof(struct Student), 1, fptr);

    fclose(fptr);
    printf("✅ Record saved successfully!\n");
}

void viewStudents() {
    struct Student s;
    FILE *fptr;

    fptr = fopen("results.dat", "rb"); // open binary file for reading
    if (fptr == NULL) {
        printf("No records found! Please add a student first.\n");
        return;
    }

    printf("\n Student Examination Results \n");

    while (fread(&s, sizeof(struct Student), 1, fptr)) {
        printf("Name: %s\n", s.name);
        printf("Reg No: %s\n", s.regNo);
        printf("Total Marks: %.2f\n", s.totalMarks);
        printf("\n");
    }

    fclose(fptr);
}
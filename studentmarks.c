#include <stdio.h>

struct Student 
{
    char stu_name[50];
    int stu_roll_no;
    int marks[3];
    int total;
};

int main() 
{
    int num_students;
    printf("Enter the number of students: ");
    scanf("%d", &num_students);

    struct Student students[num_students];

    for (int i = 0; i < num_students; i++) 
    {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].stu_name);
        printf("Roll Number: ");
        scanf("%d", &students[i].stu_roll_no);
        printf("Enter marks for 3 subjects:\n");
        for (int j = 0; j < 3; j++) 
        {
            printf("Subject %d: ", j + 1);
            scanf("%d", &students[i].marks[j]);
        }
        students[i].total = 0;
        for (int j = 0; j < 3; j++) 
        {
            students[i].total += students[i].marks[j];
        }
    }
    printf("\nStudent Details and Total Marks:\n");
    for (int i = 0; i < num_students; i++) 
    {
        printf("Student %d\n", i + 1);
        printf("Name: %s\n", students[i].stu_name);
        printf("Roll Number: %d\n", students[i].stu_roll_no);
        printf("Total Marks: %d\n", students[i].total);
        printf("\n");
    }
    return 0;
}
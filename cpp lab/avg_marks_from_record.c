#include <stdio.h>
#include <string.h>

struct student
{
    char name[50];
    int roll;
    float marks[3];
} st[60];

int main()
{
    int i, n, rollno;
    float sum = 0, avg;

    printf("Enter the number of students\n");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", st[i].name);

        printf("Enter the roll number of student %d: ", i + 1);
        scanf("%d", &st[i].roll);

        printf("Enter the 3 test marks of student %d: ", i + 1);
        scanf("%f %f %f", &st[i].marks[0], &st[i].marks[1], &st[i].marks[2]);
    }

    for (i = 0; i < n; i++)
        sum += st[i].marks[0] + st[i].marks[1] + st[i].marks[2];

    avg = sum / (n * 3);  // Corrected average calculation

    printf("\nAverage marks of %d students = %.2f\n", n, avg);

    printf("\nEnter the roll number to search: ");
    scanf("%d", &rollno);

    for (i = 0; i < n; i++)
    {
        if (st[i].roll == rollno)
        {
            printf("\nRecord Found:\n");
            printf("Name: %s\n", st[i].name);
            printf("Test Marks: %.2f, %.2f, %.2f\n", st[i].marks[0], st[i].marks[1], st[i].marks[2]);
            return 0;
        }
    }

    printf("\nRecord not found for roll number %d\n", rollno);
    return 0;
}

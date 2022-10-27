/*
1.	Explain a non-primitive data type used to store n elements. 
Develop a C program to read N employee ids, and search for a given employee using employee id. 
Print appropriate message.
*/
#include <stdio.h>

struct Employee
{
    int id;
    char Name[10];
    int salary;
};

int main()
{

    int n;
    printf("Enter no of employees = ");
    scanf("%d", &n);

    // creating an array of struct emp data type of size n
    struct Employee emp[n];

    int i, j;

    for (i = 0; i < n; i++)
    {
        printf("\nEnter details for emp -> %d \n",i);

        printf("Enter Employee id = ");
        scanf("%d", &emp[i].id);

        printf("Enter Employee Name = ");
        scanf("%s", &emp[i].Name);

        printf("Enter Employee salary = ");
        scanf("%d", &emp[i].salary);
    }

    // searching and printing details of an employee from it's id
    int req_id;
    printf("\n Enter Employee id you want details of = ");
    scanf("%d", &req_id);
    for (i = 0; i < n; i++)
    {
        if (req_id == emp[i].id)
        {
            printf("Employee id = %d \n",emp[i].id);
            printf("Employee name = %s \n",emp[i].Name);
            printf("Employee salary = %d \n",emp[i].salary);
        }
    }

    return 0;
}

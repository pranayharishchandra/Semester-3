#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct DOJ
{
    int date;
    int month;
    int year;
};

struct Salary
{
    int Basic;
    int DA;
    int HRA;
};

struct Employee // a nested structure
{
    // eNum, eName, DOJ (Date, Month, Year) and Salary (Basic, DA, HRA)
    int eNum;
    char eName[20];

    // struct DOJ -- >is a data type
    // struct DOJ doj_var; --> doj_var is a variable of -- data type -- sturct DOJ

    struct DOJ doj_var;       // creating a variable doj_var
    struct Salary salary_var; // creating a variable salary_var
};

// void input(struct Employee *arr, int n)
void input(struct Employee arr[], int n) // both the methods are fine
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\nSl no. -> %d\n", i + 1);
        printf("Enter eNum = ");
        scanf("%d", &arr[i].eNum);

        printf("Enter eName = ");
        scanf("%s", &arr[i].eName); // don't accidentally write %d

        printf("Enter DOJ -- date month year = ");
        scanf("%d %d %d", &arr[i].doj_var.date, &arr[i].doj_var.month, &arr[i].doj_var.year);
        // storing date in a variable "date"
        // that variable "date" is a variable of a  -- variable "doj" -- of data type -- struct DOJ
        // that vairable "doj" is a variable of a -- variable <some variable when created> -- of data type -- struct Employee

        printf("Enter Salary -- Basic DA HRA = ");
        scanf("%d %d %d", &arr[i].salary_var.Basic, &arr[i].salary_var.DA, &arr[i].salary_var.HRA);
    }
}

void print(struct Employee arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {

        printf("\n");

        printf("eName = %d\n", arr[i].eNum);
        printf("eName = %s\n", arr[i].eName);
        printf("DOJ = %d-%d-%d\n", arr[i].doj_var.date, arr[i].doj_var.month, arr[i].doj_var.year);
        printf("Salary -- Baisc = %d, DA = %d, HRA = %d\n", arr[i].salary_var.Basic, arr[i].salary_var.DA, arr[i].salary_var.HRA);
    }
}

int main()
{
    int n;
    printf("\nEnter no of employee = ");
    scanf("%d", &n);

    // creating an array of data type Employee
    struct Employee arr[n];

    input(arr, n);

    print(arr, n);
}

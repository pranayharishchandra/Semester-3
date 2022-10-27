/*
2.	Storing data in the form of rows and columns needs two dimensional array.
Develop a C program to read two matrices A and B, add two matrices and display all the matrices in matrix form.
*/

#include <stdio.h>
// #define N 4

// This function adds A[][] and B[][], and stores
// the result in C[][]

// reciving pointer of A, B, res matrices
// since we are reciving pointer thus changes here in the fucntion
// in pointer recived from matrice res_mat
// recived by pointer variable C
// so the changes in C will be reflected in res_mat

void input(int *arr, int m, int n)
{
    int i, j;
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", ((arr + i * n) + j));
          //scanf("%d", *((arr + i * n) + j)); --> There is no * here while input 
          // since we have to it in the memory location
          // while adding and printing we are accessing data at that memory location
          // so we are using * there
}

void print(int *arr, int m, int n)
{
    int i, j;
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            printf("%d ", *((arr + i * n) + j)); /* here we are using * 
                                                 since we are accessing the data at the memory location */
}

void add(int *arr1, int *arr2, int *res, int m, int n)
{
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            *((res + i * n) + j) = *((arr1 + i * n) + j) + *((arr2 + i * n) + j);
        }
    }
}

int main()
{
    // int r1 = 4, c1 = 4, r2 = 4, c2 = 4;
    int r1, c1, r2, c2;
    printf("input r1,c1,r2,c2 = ");
    scanf("%d %d %d %d", &r1, &c1, &r2, &c2);

    int A[r1][c1];

    int B[r2][c2];

    if (r1 != r2 || c1 != c2)
    {
        printf("matrice addtion not possible");
        return 0;
    }

    // inputing the matrices A and B
    printf("input matrice 1\n");
    input((int *)A, r1, c1);
    printf("input matrice 2\n");
    input((int *)B, r1, c1);


    // printing the matrice  A and B
    printf("\nA = ");
    print((int *) A, r1, c1);
    printf("\nB = ");
    print((int *) B, r2, c2);

    // resultant matrice
    int res_mat[r1][c1];
    int i, j;
    add((int * )A,(int * ) B,(int * ) res_mat, r1, c1);

    printf("\nResult matrix is = ");
    print((int * )res_mat, r1, c1);

    return 0;
}

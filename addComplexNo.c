#include <stdio.h>
#include <stdlib.h>

struct Complex
{
    int real;
    int img;
};

void input(struct Complex *arr, int n)
{
    printf("Input complex no \n");

    int i;
    for (i = 0; i < n; i++)
    {
        printf("->");
        scanf("%d %d", &arr[i].real, &arr[i].img);
    }
}

struct Complex add(struct Complex * arr, int n){
    int i;
    struct Complex res;
    res.real = 0;
    res.img = 0;

    for (i = 0; i < n; i++){
        res.real += arr[i].real;
        res.img += arr[i].img;
    }

    return res;
}
int main()
{

    int n;
    printf("\nEnter no of complex no = ");
    scanf("%d", &n);

    // Creating an array containg n Complex no
    struct Complex arr[n];

    input(arr, n);

    struct Complex ans = add(arr, n);

    printf("restant complex no = %d + %di",ans.real,ans.img);


}

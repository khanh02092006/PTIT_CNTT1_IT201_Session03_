#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    do
    {
        printf(" nhap so phan tu co trong mang");
        scanf("%d", &n);
        if (n<0)
        {
            printf(" khong duoc nhap so am ");

        } else if (n==0)
        {
            printf(" so luong phan tu phai lon hon 0");
        }
    } while (n<=0);
    int *arr = (int*)malloc(n*sizeof(int));
    if (arr==NULL)
    {
        printf("chua duoc cap phat");

    }
    for (int i=0; i<n; i++)
    {
        printf(" nhap phan tu thu %d",i+1);
        scanf("%d", &arr[i]);
    }
    for (int i=0; i<n; i++)
    {
        printf(" phan tu thu %d :%d \n",i+1,arr[i]);
    }
    free(arr);
    return 0;
}

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
            printf(" phan tu khong duoc am ");
        }
        else if (n==0)
        {
            printf(" phan tu  trong mang khong duoc rong");
        }
    }while (n<=0);
    int *arr=(int *)malloc(n*sizeof(int));
    if (arr==NULL)
    {
        printf(" khong duoc rong");
        return 1;
    }
    for (int i=1; i<=n; i++)
    {
     printf(" nhap phan tu thu  %d", i+1);
        scanf("%d", &arr[i]);
    }
    int max=arr[0];
    for (int i=1; i<=n; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf(" phan tu lon nhat la%d",max);
    free(arr);
    return 0;
}

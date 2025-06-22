#include <stdio.h>
#include <stdlib.h>
int tinhtrungbinh(int arr[],int n)
{
    int tong=0,dem=0;
    for(int i=0;i<n;i++)
    {
        if (arr[i]%2==0)
        {
            tong+=arr[i];
            dem++;
        }
    }
    if (dem==0) return 0;
    return tong/dem ;
}
int main(void)
{
    int n;
   do
   {
       printf(" nhap so phan tu trong mang");
       scanf("%d", &n);
       if(n < 0)
       {
           printf(" so phan tư trong mang khong duoc am");
       } else if (n==0)
       {
           printf(" phan tu trong mang bang 0");
       }
   } while (n <=0);
    int *arr=(int *)malloc(n*sizeof(int));
    if(arr==NULL)
    {
        printf("chua duoc cap phat");
        return 1;
    }
    for (int i = 0; i < n; i++)
    {
        printf(" phan tu trong mang thu %d", i+1);
        scanf("%d", &arr[i]);
    }
 int tb=tinhtrungbinh(arr,n);
    if (tb==0)
    {
        printf(" khong co phan tu chan");
    } else
    {
        printf(" tong co phan tu chan là trung binh là %d",tb);
    }
free(arr);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
int cheochinh(int *arr,int n)
{
    int sum=0;
    for (int i=0;i<n;i++)
    {
       sum+=arr[i*n+i]  ;
    }
    return sum;
}
int cheophu(int *arr,int n)
{
    int tong=0;
    for (int i=0;i<n;i++)
    {
        tong+=arr[i*n+(n-1-i)];
    }
    return tong;
}
int main(void)
{
   int row;
    int col;
    do
    {
        printf(" nhap so hang tu 1-999:");
        scanf("%d",&row);
        if (row<1)
        {
            printf(" so hang khong duoc am");
        }
    }while(row<1 || row>999);
    do
    {
        printf(" nhap so cot tu 1-999 :");
        scanf("%d",&col);
        if (col<1)
        {
            printf(" so cot khong duoc am");
        } else if (row != col)
        {
            printf(" khong ton tai duong cheo chinh và duong cheo phu\n");
        }
    }while(col<1 || col>999 || row!=col);
    int *arr=(int *)malloc(row*col*sizeof(int));
    if (arr==NULL)
    {
        printf(" chua duoc cap phat");
        return 1;
    }
    for (int i=0;i<row;i++)
    {
        for (int j=0;j<col;j++)
        {
            printf("arr[%d][%d]=",i,j);
            scanf("%d",&arr[i*col+j]);
        }
    }
    int duongcheochinh=cheochinh(arr,row);
    int duongcheophu=cheophu(arr,row);
    printf("duongcheochinh=%d\n",duongcheochinh);
    printf("duongcheophu=%d\n",duongcheophu);
    free(arr);

    return 0;
}

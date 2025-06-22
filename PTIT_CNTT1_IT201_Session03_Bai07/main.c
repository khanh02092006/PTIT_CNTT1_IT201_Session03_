#include <stdio.h>
#include <stdlib.h>
int tinhtonghang( int *arr, int row , int col ,int k)
{
        int sum=0;
    for(int i=0;i<row;i++)
    {
        sum+=arr[k*col+i];
    }
    return sum;
}
int main(void)
{
   int row;
    int col;
    do
    {
        printf("nhap so hang từ 1-999");
        scanf("%d", &row);
    } while (row < 1 || row > 999);
    do
    {
        printf(" nhap so cot 1-999");
        scanf("%d", &col);
    } while (col < 1 || col > 999);
    int *arr = (int *)malloc(row * col * sizeof(int));
    if (arr == NULL)
    {
        printf(" chua cap phat bo nho");
        return 1;
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i * col + j]);
        }
    }
    int k;
    do
    {
        printf(" nhap hang k muốn tính tổng");
        scanf("%d", &k);
    } while (k < 1 || k > 999);

    return 0;
}

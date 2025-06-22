#include <stdio.h>
#include <stdlib.h>
int max(int *arr,int row,int col)
{
    int max = arr[0];
    for(int i=0;i<row * col;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    return max;
}
int min(int *arr,int row,int col)
{
    int min = arr[0];
    for(int i=0;i<row * col;i++)
    {
if (arr[i]<min)
{
    min = arr[i];
}
    }
    return min;
}
int main(void)

{
    int row;
    int col;
    do
    {
        printf(" nhap so hang (1-999)");
        scanf("%d", &row);
    } while ( row <=0 || row >=1000 );
do
{
    printf(" nhap so cot (1-999)");
    scanf("%d", &col);
} while (col <=0 || col >=1000 );
    int *arr = (int*)malloc(row*col*sizeof(int));
    if (arr == NULL)
    {
        printf("chua duoc cap phat\n");
        return 1;
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i*col+j]);
        }
    }
    int maxarrr=max(arr,row,col);
    int minarrr=min(arr,row,col);
    printf(" so lon nhat trong mang 2 chieu la %d\n ",maxarrr);
    printf(" so nho nhat trong mang 2 chieu la %d\n",minarrr);
    free(arr);
    return 0;
}

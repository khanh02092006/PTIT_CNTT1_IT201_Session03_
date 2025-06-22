#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    do
    {
        printf(" nhap so phan tu muon them vao trong mang từ 1-999");
        scanf("%d", &n);
    } while (n < 1 || n > 999);
    int *arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf("chua duoc cap phat");
        return 1;
    }
    for (int i = 0; i < n; i++)
    {
        printf(" phan tu thu  %d", i+1);
        scanf("%d", &arr[i]);
    }
    int m;
    do
    {
        printf(" nhap them m phan tu them vao");
        scanf("%d", &m);
    } while (m <=0 || (m+n) > 999);
    arr= (int*)realloc(arr, (n+m) * sizeof(int));
    if (arr == NULL)
    {
        printf("chua duoc cap phat");
        return 1;
    }
    printf(" nhap %d phan tu muon them ");
    for (int i = n; i < (n+m); i++)
    {
        printf(" nhap phan tu thu %d",i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < (n+m); i++)
    {
        printf("%d ",arr[i]);
    }
    free(arr);

    return 0;
}

#include <stdio.h>
int main()
{
    int i,j,k,rows,star;
    printf("Enter the no. of rows: \n");
    scanf("%d", &rows);
    star= i + i - 1;
    for (i=1; i<=rows; i++)
    {
        for (j=i;j<rows;j++)
        {
            printf(" ");
        }
        for (k=1;k<=rows;k=k+2)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

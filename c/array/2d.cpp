#include <stdio.h>
int main()
{
    int i,j,arr[3][5];
 
    for(i=0;i<3;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("Enter %d row %d column element : ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
 
    printf("\n2D Array Elements :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
 
    return 0;
}

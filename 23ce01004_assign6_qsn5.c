#include<stdio.h>
int main() {
    int a[10][10],m,n;
    
    printf("Enter dimensions of matrix: ");
    scanf("%d %d",&m,&n);

    for(int i=1;i<m+1;i++)
    {
        for(int j=1;j<n+1;j++)
        {
            printf("Enter element [%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("Original Matrix:\n");
    for(int i=1;i<m+1;i++)
    {
        for(int j=1;j<n+1;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    
    //Transposing//

    if(m!=n)
    {
        for(int i=1;i<m+1;i++)
        {
            for(int j=1;j<n+1;j++)
            {
                int temp=a[i][j];
                a[i][j]=a[j][i];
                a[j][i]=temp;
            }
        }

        printf("Transpose of the given matrix is:\n");
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<m+1;j++)
            {
                printf("%d\t",a[i][j]);
            }
            printf("\n");
        }
    }

    else
    {
        printf("Transpose of given matrix is:\n");
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<m+1;j++)
            {
                printf("%d\t",a[j][i]);
            }
            printf("\n");
        }
    }
    
    return 0;
}
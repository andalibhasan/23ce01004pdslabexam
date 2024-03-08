#include<stdio.h>
int main() {
    int arr1[10],arr2[10],n1,n2;
    
    printf("Enter size of first array:");
    scanf("%d",&n1);
    printf("Enter array elements:");
    for(int i=0;i<n1;i++)
        scanf("%d",&arr1[i]);
    
    printf("Enter size of second array:");
    scanf("%d",&n2);
    printf("Enter array elements:");
    for(int i=0;i<n2;i++)
        scanf("%d",&arr2[i]);

    int check=0;

    for(int i=0;i<n2;i++)
    {
        
        for(int j=0;j<n1;j++)
        {
            if(arr2[i]==arr1[j])
                check++;
        }
    }

    if(check==n2)
        printf("Second array is a subset of first array");
    else
        printf("Second array is not a subset of first array");

    return 0;
}
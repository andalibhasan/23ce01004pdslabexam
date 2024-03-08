#include<stdio.h>

int array(int arr[],int n) {
    
    int s=0,avg;
    for(int i=0;i<n;i++)
    {
        s+=arr[i];
    }
    avg=s/n;

    for(int i=0;i<n;i++)
    {
        if(arr[i]>avg)
            printf("%d\t",arr[i]);
    }
}

int main() {
    int n,arr[5];
    
    printf("Enter size of array: ");
    scanf("%d",&n);

    printf("Enter array elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    array(arr,n);
    return 0;
}
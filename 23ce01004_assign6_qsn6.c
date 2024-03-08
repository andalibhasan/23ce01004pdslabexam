#include<stdio.h>
int avg(int arr[7]) {
    float avg,s=0;
    for(int i=0;i<7;i++)
    {
        s+=arr[i];
    }
    avg=s/7;
    printf("Average temperature:%.2f\n",avg);
}

int main() {
    int n,temp[10][7];
    printf("Enter number of cities:");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("For city %d\n",i+1);
        for(int j=0;j<7;j++)
        {
            printf("For day %d:",j+1);
            scanf("%d",&temp[i][j]);
        }
    }

    for(int i=0;i<n;i++)
    {
        printf("For city %d\n",i+1);
        avg(temp[i]);
    }
    return 0;
}
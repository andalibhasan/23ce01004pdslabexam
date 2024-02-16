#include<stdio.h>
int main()

{
    int i=0;
    int a,b,c;

    printf("Enter number:");
    scanf("%d",&i);
   
    int n = i;
    int sum = 0;
    while(n!=0)
    {
        int rem = n%10;
        int mul =1;
        for(int k = 1;k<=rem;k++)
        {
            mul*=k;
        }
        sum+=mul;
        n = n/10;
    }

    if(sum==i)
    {
        printf("Strong number");
    }
    else
    {
        printf("not");
    }

    return 0;

}
#include<stdio.h>
int prime(int n) 
    {
        int check=0;
        for(int j=2;j<n;j++)
        {
            if(n%j==0)
                check++;
        }
        if(check==0)
            printf("%d\t",n);
    }   
int main() {
    int l,u,n,prime(int n);
    
    printf("Enter lower limit: ");
    scanf("%d",&l);
    printf("Enter upper limit: ");
    scanf("%d",&u);

    for(int i=l+1;i<u;i++)
    {
        prime(i);
    }
    
    return 0;
}
#include<stdio.h>
int main() {
    int x;
    printf("Enter any number: ");
    scanf("%d",&x);

    int check=0;
    
    for(int i=1;i<=(x/2);i++)
    {
        int check=0;
        int n1=i;int n2=x-i;

        for(int j=2;j<n1;j++)
        {
            if((n1%j)==0)
            {
                check++;
                break;
            }

        }
        for(int k=2;k<n2;k++)
        {
            if((n2%k)==0)
            {
                check++;
                break;
            }

        }
        
        if(check==0 && n1!=1 && n2!=1)
            printf("%d\t%d\n",n1,n2);
        
    }

    return 0;
}
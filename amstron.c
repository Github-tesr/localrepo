#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int d;
    int sum=0;
    int temp=n;
    while(n>0)
    {
        d=n%10;
        sum=sum+d*d*d;
        n=n/10;
    }
    if(sum==temp)
    {
        printf("Amstrong");
    }
    else
    {
        printf("Not Amstrong");
        
    }
    
    
    return 0;
}
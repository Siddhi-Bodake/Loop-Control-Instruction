#include<stdio.h>
int main()
{
    int num,i,fact;
    printf("Enter the number;\n");
    scanf("%d",&num);
    fact=i=1;
    while(i<=num)
    {
        fact=fact*i;
        i++;
        
    }
    printf("Factorial value of %d=%d\n",num,fact);
    return 0;
}

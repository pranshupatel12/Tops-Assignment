#include <stdio.h>
void fact(int n1);
void fact(int n1)
{
    int ans = 1,i;
    for (i=1;i<=n1;i++)
    {
        ans = ans*i;
    }
    printf ("\n the factorial of n1 = %d",ans);
}
int main()
{
    int num1;
    printf ("\n enter the number = ");
    scanf ("%d",&num1);
    fact(num1);//calling
    return 0;
}

#include <stdio.h>
int main()
{
    int n;
    printf("enter no. of terms you want : \n");
    scanf("%d",&n);
    int a;
    printf("Enter the first term :");
    scanf("%d",&a);
    for (int i=1;i<=n;i++)
    {
        printf("%d \n",a);
        a=a+3;
    }
    return 0;
}
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,n,i,random_no;
    printf("Enter starting no. of the range: ");
    scanf("%d",&a);
    printf("Enter ending no. of the range: ");
    scanf("%d",&b);
    printf("Enter no. of values to be generated: ");
    scanf("%d",&n);
    srand(time(NULL));
    for(i=0;i<=n-1;i++)
    {
        random_no=a+rand()%(b-a+1);
        printf("%d\t",random_no);
    }
    return 0;
}

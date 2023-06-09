#include<stdio.h>
int fact(int n);
int main()
{
    printf("fact is : %d\n",fact(4));
    return 0;
}
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    int factNm1=fact(n-1);
    int factn=factNm1 * n;
    return factn;
}
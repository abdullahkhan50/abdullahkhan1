#include <stdio.h>

int fib(int n)
{

    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }

    int fibNm1 = fib(n - 1);
    int fibNm2 = fib(n - 2);
    int fibN = fibNm1 + fibNm2;
    return fibN;
}

int main()

{
    int a;
    printf("Enter the number which you want to know the fibonacci sequence : ");
    scanf("%d", &a);
    printf("The fibonacci sequence is : %d\n", fib(a));

    return 0;
}
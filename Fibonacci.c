#include <stdio.h>
// 0,1,1,2,3,5,8,13,21,34
int fibo(int);
int fibo(int n)
{
    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    return fibo(n - 1) + fibo(n - 2);
}
int main()
{
    int a;
    printf("Enter the position in the Fibonacci series: ");
    scanf("%d", &a);
    int c = fibo(a);
    printf("The value of fibonacci series at %d\n is %d", a, c);
    return 0;
}
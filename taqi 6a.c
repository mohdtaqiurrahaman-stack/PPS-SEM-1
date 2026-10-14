#include <stdio.h>

long long sum(int n)
{
    if (n == 0)
        return 0;

    return n + sum(n - 1);
}

int main()
{
    int n;
    long long result;
    printf("Enter a number: ");
    scanf("%d", &n);
    result = sum(n);
    printf("Sum of the first %d natural numbers is %lld\n", n, result);
    return 0;
}

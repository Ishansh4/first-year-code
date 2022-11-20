#include <stdio.h>
int josephus(int n, int k)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return (josephus(n - 1, k) + k - 1) % n + 1;
    }
}

int main()
{
    int n, k,s;
    printf("Enter the number of persons: ");
    scanf("%d", &n);
    printf("Enter the position of person to be killed: ");
    scanf("%d", &k);
    s = josephus(n, k);
    printf("the safe postion will be %d",s);

    return 0;
}
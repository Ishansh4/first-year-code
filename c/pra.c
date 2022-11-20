#include <stdio.h>
void display(int *ptr)
{

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                for (int l = 0; l < 4; l++)
                {
                    printf("%d \t", *ptr);
                    ptr++;
                }
                printf("\n");
            }
            printf("\n");
            printf("\n");
        }
    }
}

void sum(int *ptr)
{
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                for (int l = 0; l < 4; l++)
                {
                    sum += *ptr;
                    ptr++;
                }
            }
        }
    }

    printf("Sum of Array: %d\n", sum);
}

void average(int *ptr)
{
    int sum = 0;
    int count = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                for (int l = 0; l < 4; l++)
                {
                    sum += *ptr;
                    count++;
                    ptr++;
                }
            }
        }
    }

    printf("Average of Array: %d\n", sum / count);
}

int main()
{
    int a[3][2][4][4];
    int b = 1;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                for (int l = 0; l < 4; l++)
                {
                    a[i][j][k][l] = b;
                    b++;
                }
            }
        }
    }

    display(a);
    sum(a);
    average(a);
}

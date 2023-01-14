#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand (time (NULL));
    int N;
    int temp;
    int a = 5 + rand()% 4;
    do
    {
        printf("Enter N\n");
        scanf("%d", &N);
    }
    while(N < 2);
    int A[N];
    int B[N];
    printf("a = %d\n", a);
    for (int i = 0; i < N; i++)
    {
        A[i] = (rand()% (a + a + 1)) - a;
        B[i] = A[i];
    }
    printf("\n");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 1; j < N; j++)
        {
            if (B[j] < B[j-1])
            {
                temp = B[j-1];
                B[j-1] = B[j];
                B[j] = temp;
            }
        }
    }
    printf("\n");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", B[i]);
    }
    printf("\n");
    return 0;
}

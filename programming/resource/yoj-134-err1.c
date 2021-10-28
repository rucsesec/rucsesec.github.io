#include <stdio.h>
int main()
{
    int N, A[11], B[11], C[11], cc[5], dd[5], i, sws, sum1 = 0, sum2 = 0;
    scanf("%d", &N);
    for (i = 1; i <= N; i++)
    {
        scanf("%d %d %d", &A[i], &B[i], &C[i]);
    }
    for (sws = 1000; sws <= 9999; sws++)
    {
        for (i = 1; i <= N; i++)
        {
            int q, b, s, g;
            q = sws / 1000 % 10;
            b = sws / 100 % 10;
            s = sws / 10 % 10;
            g = sws % 10; //此四位数的各个位数
            int qq, bb, ss, gg;
            qq = A[i] / 1000 % 10;
            bb = A[i] / 100 % 10;
            ss = A[i] / 10 % 10;
            gg = A[i] % 10; //每一行四位数的各个位数
            cc[1] = (q - qq) && 1;
            cc[2] = (b - bb) && 1;
            cc[3] = (s - ss) && 1;
            cc[4] = (g - gg) && 1;
            dd[1] = (q - qq == 0) || (q - bb == 0) || (q - ss == 0) || (q - gg == 0);
            dd[2] = (b - qq == 0) || (b - bb == 0) || (b - ss == 0) || (b - gg == 0);
            dd[3] = (s - qq == 0) || (s - bb == 0) || (s - ss == 0) || (s - gg == 0);
            dd[4] = (g - qq == 0) || (g - bb == 0) || (g - ss == 0) || (g - gg == 0);
            if (cc[1] + cc[2] + cc[3] + cc[4] == C[i] && dd[1] + dd[2] + dd[3] + dd[4] == B[i])
                sum2 += 1; //此四位数符合该次猜测条件
        }
        if (sum2 == N)
            sum1 += 1;
    }
    if (sum1 == 1)
        printf("%d", sws);
    else
        printf("Not sure");
}
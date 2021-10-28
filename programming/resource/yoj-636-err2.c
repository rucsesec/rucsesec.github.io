#include <stdio.h>
int main()
{
    int n, i = 0, flag = 0; //flag用来判断是否出局
    scanf("%d", &n);
    int s = 0;
    int sum = 0;
    int x[256][6]; //存放每轮的点数
    for (i = 0; i < n && flag == 0; i++)
    {
        for (int j = 0; j < 6 && flag == 0; j++)
            scanf("%d", &x[i][j]);
        int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0; //分别为每一轮中出现1，2，3，4，5，6点数的次数
        for (int j = 0; j < 6 && flag == 0; j++)      //统计各点数次数
        {
            if (x[i][j] == 1)
                a += 1;
            if (x[i][j] == 2)
                b += 1;
            if (x[i][j] == 3)
                c += 1;
            if (x[i][j] == 4)
                d += 1;
            if (x[i][j] == 5)
                e += 1;
            if (x[i][j] == 6)
                f += 1;
        }
        //计算分数
        if (d == 4 && b == 2)
            s += 2048;
        else if (d == 6)
            s += 1024;
        else if (a == 6)
            s += 512;
        else if (b == 6)
            s += 256;
        else if (d == 5)
            s += 128;
        else if (b == 5)
            s += 64;
        else if (d == 4)
            s += 32;
        else if (a == 1 && b == 1 && c == 1 && d == 1 && e == 1 && f == 1)
            s += 16;
        else if (d == 3)
            s += 8;
        else if (b == 4)
            s += 4;
        else if (d == 2)
            s += 2;
        else if (d == 1)
            s += 1;
        else
            flag = 1;
    }
    printf("%x\n", s);

    return 0;
}

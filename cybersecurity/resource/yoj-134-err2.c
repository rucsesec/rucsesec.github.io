#include <stdio.h>
int main()
{
    int n, number, where[11] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, amount[11] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, mynum, mywhere[11], myamount[11];
    int rwhere = 0, ramount = 0, flag = 0, result = 0;
    int a[11][5], num[5];
    int i, j, t;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)                                  //i代表输入的第i个数
    {                                                         //第一个for用于赋值
        scanf("%d %d %d", &mynum, &mywhere[i], &myamount[i]); //mynum是我们自己输的数
        a[i][4] = mynum % 10;
        a[i][3] = (mynum / 10) % 10;
        a[i][2] = (mynum / 100) % 10;
        a[i][1] = (mynum / 1000) % 10;
        //第二个下标代表数字的位置
    }
    for (number = 1000; number <= 9999; number++)
    {
        rwhere = 0;
        ramount = 0;
        for (int k = 0; k < 11; k++)
        {
            where[k] = 0;
            amount[k] = 0;
        }
        num[4] = number % 10;
        num[3] = (number / 10) % 10;
        num[2] = (number / 100) % 10;
        num[1] = (number / 1000) % 10;
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= 4; j++)
            {
                if (a[i][j] == num[j])
                    where[i]++; //用于检验这个num有多少值位置相同
                for (t = 1; t <= 4; t++)
                {
                    if (a[i][j] == num[t])
                    {
                        amount[i]++; //用于检测相同的数
                        break;
                    }
                }
            }
            if (mywhere[i] == where[i])
                rwhere++;
            if (myamount[i] == amount[i])
                ramount++;
        }
        if (ramount + rwhere == 2 * n)
        {
            result = number;
            flag++;
        }
    }
    if (flag == 1)
        printf("%d\n", result);
    if (flag != 1)
        printf("Not sure");
}


#include <stdio.h>

// 渡された値をstatic変数に加算して合計を返す関数
int addValue(int value)
{
    // static変数は関数の呼び出しが終わっても値を保持する
    static int total = 0;

    total += value;
    return total;
}

int main(void)
{
    int input;
    int result = 0;

    scanf("%d", &input);

    if (input < 1 || input > 10)
    {
        printf("NG");
        return 0;
    }

    // 1から入力値までの整数を2倍して順番に加算する
    for (int number = 1; number <= input; number++)
    {
        result = addValue(number * 2);
    }

    printf("%d", result);

    return 0;
}

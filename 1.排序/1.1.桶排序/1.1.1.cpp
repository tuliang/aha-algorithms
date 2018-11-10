#include <stdio.h>

int main()
{
    int a[11], i, j, t;
    for(i = 0; i <= 10; i++)
        a[i] = 0; // 初始化为 0

    for(i = 1; i <= 5; i++) // 循环读入 5 个数
    {
        scanf("%d", &t); // 把每一个数读入到变量 t 中
        a[t]++; // 进行计数
    }

    for(i = 10; i >= 0; i--) // 依次判断
        for(j = 0; j < a[i]; j++) // 计数大于 0 就打印出来
            printf("%d ", i);
    
    getchar();

    return 0;
}
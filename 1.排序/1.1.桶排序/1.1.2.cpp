#include <stdio.h>

int main()
{ 
    int book[1001], i, j, t, n;
    for(i = 0; i <= 1000; i++)
        book[i] = 0; // 初始化为 0

    scanf("%d", &n); // 接下来有 n 个数输入
    for(i = 1; i <= n; i++) // 循环读入 n 个数
    {
        scanf("%d", &t); // 把每一个数读入到变量 t 中
        book[t]++; // 进行计数
    }

    for(i = 1000; i >= 0; i--) // 依次判断
        for(j = 0; j < book[i]; j++) // 计数大于 0 就打印出来
            printf("%d ", i);

    getchar();

    return 0;
}
#include <stdio.h>

int main()
{
    int a[100], i, j, t, n;
    scanf("%d", &n); // 输入一个数 n 表示接下来有 n 个数

    for(i=1;i<=n;i++)
      scanf("%d", &a[i]);

    // 冒泡排序核心部分
    for(i=1;i<=n-1;i++) // n 个数排序 只用进行 n-1 趟
    {
      for(j=1;j<=n-i;j++)
      {
        if(a[j]<a[j+1]) // 比较大小并交换
        {
          t = a[j];
          a[j] = a[j+1];
          a[j+1] = t;
        }
      }
    }

    for(i=1;i<=n;i++) // 输出结果
      printf("%d ", a[i]);

    getchar();

    return 0;
}
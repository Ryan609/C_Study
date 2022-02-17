#include <stdio.h>
//--------------------------------函数递归
// void print(int n)
// {
//     if (n > 9)
//     {
//         print(n/10);
//     }
//     printf("%d ", n%10);
    
// }

// int main() 
// {   
//     unsigned int num = 0;
//     scanf("%d", &num);
//     print(num);
//     return 0;
// }
//--------------------------------n的阶乘
// int fac(int n)
// {
//     if (n < 1)
//         return 1;
//     else
//         return n * fac(n - 1);
// }

// int main()
// {
//     int n = 0;
//     scanf("%d", &n);
//     int ret = fac(n);
//     printf("%d\n", ret);
//     return 0;
// }
//--------------------------------求第n个斐波那契数
// int fib(int n) //递归浪费时间，需要大量计算，递归不是好的办法
// {
//     if (n <= 2)
//         return 1;
//     else
//         return fib(n - 1)+ fib(n-2);
// }

int fib(int n) //递归浪费时间，需要大量计算，递归不是好的办法
{
    int a = 1;
    int b = 1;
    int c = 1;
    while (n > 2)
    {
        c = a + b;
        a = b;
        b = c;
        n--;
    }
    return c;
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    int ret = fib(n);
    printf("%d\n", ret);
    return 0;
}
//--------------------------------
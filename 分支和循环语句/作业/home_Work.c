//---------------------------------BC129

//---------------------------------BC101

//---------------------------------BC72

//---------------------------------BC56

//---------------------------------写代码将三个整数 按从大到小输出。
// #include <stdio.h>

// int main() 
// {
//     int a = 0;
//     int b = 0;
//     int c = 0;
//     scanf("%d %d %d", &a,&b,&c); //读取三个数字
//     if (a < b)
//     {
//         int temp = a;   //如果a < b,就将a存入临时变量中，，
//         a = b;          //因为b比a大，所以将b存入a的位置
//         b = temp;       //最后将原先a的值，存入b这样大的数就到了前面
//     }
//     if (a < c) 
//     {
//         int temp = a;
//         a = c;
//         c = temp;
//     }
//     if (b < c)
//     {
//         int temp = b;
//         b = c;
//         c = temp;
//     }
//     printf("%d %d %d", a,b,c);
    
//     return 0;
// }
//---------------------------------

//---------------------------------写一个代码打印1-100之间所有3的倍数的数字
// #include <stdio.h>

// int main() 
// {
//     //通过for循环从3开始，每次加三就是3的倍数
//     for (int i = 3; i < 100; i+=3) 
//     {
//         printf("%d ", i);
//     }
    
//     return 0;
// }
//---------------------------------

//---------------------------------给定两个数，求这两个数的最大公约数
// #include <stdio.h>

// int main()
// {
//     int a = 0;
//     int b = 0;
//     int c = 0;
//     scanf("%d %d", &a, &b);

//     //通过辗转相除法求得最大公约数/最大公倍数
//     // a % b 得到余数，直到余数为0结束循环.
//     while (c=a%b)   
//     {
//         a = b;
//         b = c;
//     }
//     printf("%d\n", b);

//     return 0;
// }
//---------------------------------

//---------------------------------打印1000年到2000年之间的闰年
//---------------------------------

//---------------------------------写一个代码：打印100~200之间的素数
//---------------------------------

//---------------------------------编写程序数一下 1到 100 的所有整数中出现多少个数字9
//---------------------------------

//---------------------------------计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
//---------------------------------

//---------------------------------求10 个整数中最大值
//---------------------------------

//---------------------------------在屏幕上输出9*9乘法口诀表
//---------------------------------1
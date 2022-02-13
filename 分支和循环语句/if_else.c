#include <stdio.h>

//---------------------------------判断奇偶数
// int main() {
//     int num = 0;
//     scanf("%d", &num);

//     if (num % 2 == 0)
//     {
//         printf("是偶数\n");
//     } else {
//         printf("是奇数\n");
//     }
//     return 0;
// }
//---------------------------------
//---------------------------------打印1-100奇数
// int main() {
//     //int i = 0;
//     for (int i = 0; i <= 100; i++)
//     {
//         if (i % 2 == 1)
//         {
//             printf("%d ", i);
//         }   
//     }
//     return 0;
// }
//---------------------------------
// int main() {
//     int ch = '\0';
//     while ((ch = getchar()) != EOF)
//     {
//         if (ch < '0' || ch > '9')
//             continue;
//         putchar(ch);
//     }
//     return 0;
// }
//---------------------------------
// int main() {
//     int i = 0;
//     int k = 0;
//     for ( i = 0, k = 0; k = 0; i++,k++)
//     {
//        k++;
//     }
//     return 0;
// }
//---------------------------------do while
// int main() {
//     int i = 1;
//     do
//     {
//         if (i == 5) {
//             continue;
//         }
           
        
//         printf("%d ", i);
//         i++;
        
//     } while (i <= 10);
    
//     return 0;
// }
//---------------------------------计算n的阶乘
// int main() {
//     int n = 0;
//     int re = 1;
//     int sum = 0;

//     scanf("%d", &n);
//     for ( int i = 1; i <= n; i++)
//     {
//         re = re * i;
//         sum = sum + re;
//     }
//     printf("%d\n", sum);
    
//     return 0;
// }
//---------------------------------
// int main() {
//     int n = 0;
//     int m = 0;
//     for (int i = 1; i <= 10 ; i++)
//     {
//         
//     } 
// }
//---------------------------------二分查找
// int main() {
//     int arr[] = {1,2,3,4,5,6,7,8,9,10};
//     int k = 9;

//     int length = sizeof(arr) / sizeof(arr[0]);
//     int left = 0;
//     int right = length - 1;
    

//     while (left <= right)
//     {
//         int mid = left + (right - left) / 2;
//         if (arr[mid] < k)
//         {
//             left = mid + 1;
//         } else if (arr[mid] > k)
//         {
//             right = mid - 1;
//         } else 
//         {
//             printf("下标是: %d\n", mid);
//             break;
//         } 
//     }
//     return 0;
// }
//---------------------------------多个字符从两端移动，向中间汇聚

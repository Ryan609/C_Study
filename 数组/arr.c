#include <stdio.h>
#include <string.h>
//-----------------------------------数组初始化 随机值
//int main()
//{
//  int arr[10];
//  for (int i = 0; i < 10; i++)
//  {
//      printf("%d\n", arr[i]);
//  }
//  return 0;
//}
//-----------------------------------
//int main()
//{
//  int arr1[] = {1,2,3,4}; //a b c \0
//  char arr2[] = { 'a', 'b', 'c' }; //a b c
//  
//  int sz = sizeof(arr1) / sizeof(arr1[0]);
//  
//  printf("%d\n", (int)strlen(arr2));
//  printf("%d\n", sz);
//  
//  return 0;
//}
//-----------------------------------求一个整数存储在内存中二进制中1的个数
//int main() {
//  int a = 0;
//  scanf("%d", &a);
//  int count = 0;
//  
//  for (int i = 0; i < 32; i++) {
//      if (((a >> i) & 1) == 1) {
//          count++;
//      }
//  }
//  printf("%d\n", count);
//  return 0;
//}
//-----------------------------------
int main() {
    int i = 0, a = 0, b = 2, c = 3, d = 4;
    i =  a++ && ++b && d++;
    
    printf("a = %d\n b = %d\n c = %d\n d = %d\n", a, b, c, d);
}
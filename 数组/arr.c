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
int main()
{
    int arr1[] = {1,2,3,4}; //a b c \0
    char arr2[] = { 'a', 'b', 'c' }; //a b c
    
    int sz = sizeof(arr1) / sizeof(arr1[0]);
    
    printf("%d\n", (int)strlen(arr2));
    printf("%d\n", sz);
    
    return 0;
}
//-----------------------------------

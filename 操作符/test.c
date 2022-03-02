#include <stdio.h>

//不创建临时变量，实现两个数的交换
//int main() {
//	int a = 3;
//	int b = 5;
//	printf("a=%d b=%d\n", a, b);
//	
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a=%d b=%d\n", a, b);
//	
//	return 0;
//}
//int main() {
//	int a = 0x11223344;
//	int* pa = &a;
//	*pa = 0;
//}

int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int main() {
		int a = 10;
	int b = 20;
	int c = 0;
	c = Add(a, b);
	printf("%d\n", c);

	return 0;
};
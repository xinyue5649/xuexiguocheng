#define _CRT_SECURE_NO_WARNINGS 1

//接受一个整形值（无符号），按照顺序打印它的每一位
//例如
//输入：1234，输出 1 2 3 4


//Stack overflow（栈
// 溢出）

//递归是实现

//#include <stdio.h>
//
//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);//1234
//	print(num);//接受一个整形值（无符号），按照顺序打印它的每一位
//
//	return 0;
//}
//print(1234)
//print(123) 4
//print(12) 3 4
//print(1) 2 3 4
//1 2 3 4

//%d 是打印有符号的整数（会有正负数）
//%u 是打印无符号的整数

//#include <stdio.h>
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);//1234
//	while (num)
//	{
//		printf("%d ", num % 10);
//		num = num / 10;
//	}
//	//1 2 3 4
//	//printf("%u\n", num);
//
//	return 0;
//}

//编写函数不允许创建临时变量，求字符串的长度

//求字符串长度
//模拟实现strlen

//#include <stdio.h>
//#include <string.h>
//int my_strlen(char str[])//参数部分写成数组的形式

//int my_strlen(char* str)//参数部分写成指针的形式
//{
//	int count = 0;//计数，临时变量
//	while (*str != 0)
//	{
//		count++;
//		str++;//找下一个字符
//	}
//	return count;
//}

//递归求解

//my_strlen("abc");
//1+my_strlen("bc");
//1+1+my_strlen("c");
//1+1+1+my_strlen("");
//1+1+1+0

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str+1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "miku";//[a b c \0]
//	//char*
//	int len = my_strlen(arr);
//
//	printf("%d\n", len);
//
//	return 0;
//}



//求n的阶乘（不考虑溢出）
//#include <stdio.h>
//
////递归实现
////int fac(int n)
////{
////	if (n <= 1)
////		return 1;
////	else
////		return n * fac(n - 1);
////}
//
////迭代的方式-非递归
//int fac(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fac(n);
//	printf("ret = %d\n", ret);
//	return 0;
//}

//
//求第n个斐波那契数
//斐波那契数列
//1 1 2 3 5 8 13 21 34 55 …
//
//#include <stdio.h>

//int count = 0;
//
//int Fib(int n)
//{
//	if (n == 3)
//		count++;
//
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}

//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//
//	while (n >= 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("ret = %d\n", ret);
//	//printf("count = %d", count);
//	return 0;
//}


//汉诺塔问题
/*
1: A -> C 1
2: A-> B  A->C  B->C 3
3: A->  A->B  C->B  A->C  B->A  B->C  A->C 7
64: 2^64 -1
*/
#include <stdio.h>

void move(char pos1, char pos2)
{
	printf("%c->%c ", pos1, pos2);
}

//N:代表盘子的个数
//pos1:起始位置
//pos2:中转位置
//pos3:目的位置

void Hanoi(int n,char pos1,char pos2,char pos3)
{
	if (n == 1)
	{
		move(pos1, pos3);
	}
	else
	{
		Hanoi(n - 1, pos1, pos3, pos2);
		move(pos1, pos3);
		Hanoi(n - 1, pos2, pos1, pos3);
	}
}

int main()
{
	Hanoi(4, 'A', 'B', 'C');
	return 0;
}
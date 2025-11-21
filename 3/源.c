#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
//int main()
//{
//	//int a = 7 / 2;
//	//int b = 7 % 2;//取模
//	//printf("%d\n", a);
//	//printf("%d\n", b);
//	// / 除号的两端都是整数的时候，执行的是整数除法，如果两端只要有一个浮点数就执行浮点数的除法
//	float a = 7 / 2.0;
//	int b = 7 % 2;//取模
//	//取模操作符的两个操作符只能是整数
//
//	printf("%.2f\n", a);
//	printf("%d\n", b);
//
//
//	return 0;
//}


//int main()
//{
//	int a = 0;//初始化
//	a = 20;//赋值
//
//	a = a + 3;//a=23
//	a += 3;
//
//	a -= 3;
//	a = a - 3;
//
//	return 0;
//}


//C语言中
//0表示假
//非0表示真
//
//
//int main()
//{
//	int flat = 2;
//	if (!flat)
//	{
//		printf("miku");
//	}
//
//	int a = -10;
//	int b = +a;
//	printf("%d\n", b);
//
//
//	sizeof是操作符，是单目操作符
//
//	int a = 10;
//	printf("%zu\n", sizeof(a));//4
//	printf("%zu\n", sizeof(int));//4
//	printf("%zu\n", sizeof a);//4
//
//	int arr[10] = { 0 };
//	printf("%zu\n",sizeof(arr));//40  计算的是整个数组的大小，单位是字节
//	printf("%zu\n",sizeof(arr[0]));//
//	printf("%zu\n", sizeof(arr) / sizeof(arr[0]));//10 - 数组的元素个数
//
//	int a = 10;
//	int b = a++;//后置++，先使用，后++
//	int b = a; a = a + 1;
//
//	int b = ++a;//前置++，先++，后使用
//	a = a + 1; int b = a;
//
//	int a = 10;
//	int b = a--;
//	b = a; a = a - 1;
//	int b = --a;
//	a = a - 1; b = a;
//	printf("%d\n", b);
//	printf("%d\n", a);
//
//	int a = (int)3.14;
//	int a = int(3.14);//错误的
//	printf("%d\n", a);
//
//	3.14 字面浮点数，编译器默认理解为double类型
//
//
//	return 0;
//}



//int main()
//{
//	int a = 10;
//	if (a == 3)
//	{
//		printf("miku");
//	}
//	return 0;
//}


//int main()
//{
//	&& 逻辑与 - 并且
//	|| 逻辑或 - 或者
//
//	int a = 0;
//	int b = 20;
//	if (a && b)
//	{
//		printf("miku\n");
//	}
//
//	int a = 0;
//	int b = 10;
//
//	if (a || b)
//	{
//		printf("miku\n");
//	}
//
//	return 0;
//}



//int main()
//{
//	int a = 100;
//	int b = 10;
//	int r = (a > b ? a : b);
//	//若a大于b则 r = a 否则 r = b
//	return 0;
//}


//逗号表达式就是逗号隔开的一串表达式
//逗号表达式的特点是：从左到右依次计算，整个表达式的结果最后一个表达式的结果
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	//         c=8       a=28     5
//	int d = (c = a - 2, a = b + c, c - 3);
//	printf("%d\n", d);
//
//	return 0;
//}




//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n = 3;
//	arr[n] = 20;//[]下标引用操作符 arr和3就是[]的操作数
//
//	return 0;
//}
//
//
////函数调用操作符()
//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int sum = add(2, 3);//( )函数调用操作符, add,2,3都是( )的操作数
//
//	return 0;
//}




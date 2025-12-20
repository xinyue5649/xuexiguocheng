#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//	int a = 10;//a是整型变量，占用4个字节的内存空间
//	int* pa = &a;
//	pa是一个指针变量，用来存放地址的
//
//	本质上指针就是地址
//	口语中说的指针，其实就是指针变量，指针变量就是一个变量，指针变量是用来存放地址的一个变量
//
//	return 0;
//}

//x86 - 32位的环境
//x64 - 64位的环境

//int main()
//{
//	char* pc = NULL;
//	short* ps = NULL;
//	int* pi = NULL;
//	double* pd = NULL;
//
//	//sizeof 返回的值是无符号整形 unsigned int
//	printf("%zu\n", sizeof(pc));
//	printf("%zu\n", sizeof(ps));
//	printf("%zu\n", sizeof(pi));
//	printf("%zu\n", sizeof(pd));
//	return 0;
//}

//指针类型的定义

//int main()
//{
//	int a = 0x11223344;
//	//int* pa = &a;
//	//*pa = 0;
//
//	char* pc = (char*)&a;//int*
//	*pc = 0;
//
//	//结论：
//	//指针类型决定了指针在被解引用的时候访问几个字节
//	//如果是int*的指针，解引用访问4个字节
//	//如果是char*的指针，解引用访问1个字节
//	//推广到其他类型
//
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = (char*)&a;
//
//	printf("pa = %p\n", pa);
//	printf("pa+1 = %p\n", pa + 1);
//
//	printf("pc = %p\n", pc);
//	printf("pc+1 = %p\n", pc + 1);
//
//	//结论二：
//	//指针的类型决定了指针+ - 1操作的时候，跳过了几个字节
//	//决定了指针的步长
//
//	//100 - 10进制
//	//0x64 - 16进制
//	//110 0100 - 2进制
//	//144 - 8进制
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int* pi = &a;//pi 解引用访问4个字节，pi+1也是跳过4个字节
//	float* pf = &a;//pf 解引用访问4个字节，pf+1也是跳过4个字节
//	//int* 和 float* 是不是就可以通用啊？
//	//不能
//	//*pi = 100;
//	*pf = 100.0;
//
//	return 0;
//}



//int main()
//{
//	int* p;
//	//p没有初始化，就意味着没有明确的指向
//	//一个局部变量不初始化的化，放的是随机值：0xcccccccc
//
//	*p = 10;//非法访问内存了，这里的p就是野指针
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//&arr[0]
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		*p = i;
//		p++;
//		//当指针指向的范围超出数组arr的范围时，p就是野指针
//	}
//	return 0;
//}

//int* test()
//{
//	int a = 10;
//	return &a;
//}
//
//int main()
//{
//	int* p = test();
//	return 0;
//}


//int main()
//{
//	//int b = 0;
//	//int a = 10;
//	//int* p = &a;
//	//*p = 20;
//	//NULL -> 0
//
//	//int* p2 = NULL;
//	//*p2 = 100;//err
//
//	int* p3 = NULL;
//	if (p3 != NULL)//也可以写成if(p3)
//	{
//		*p3 = 100;//ok
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//数组下标的写法
//	//for (i = 0; i < sz; i++)
//	//{
//	//	arr[i] = 1;
//	//}
//
//	//int* p = arr;
//	//for (i = 0; i < sz; i++)
//	//{
//	//	*p = 1;
//	//	*p++;
//	//}
//
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}


//int main()
//{
//	//int arr[10] = { 0 };
//	//printf("%d\n", &arr[9] - &arr[0]);
//
//	//int arr[10] = { 0 };
//	//char ch[5] = { 0 };
//	//printf("%d\n", &ch[0] - &arr[0]);//err
//
//	//指针 - 指针的绝对值是指针和指针之间元素的个数
//	//不是所有的指针都能相减
//	//指向同一块空间的2个指针才能相减
//
//	return 0;
//}

#include<string.h>

//版本一
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//版本二：递归的版本

//版本三：指针 - 指针
//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return (str - start);
//}
//
//int main()
//{
//	int len = my_strlen("miku");
//	printf("%d\n", len);
//	return 0;
//}


////数组：一组相同类型元素的集合
////指针变量；是一个变量，存放的是地址
//
//int main()
//{
//	int arr[10] = { 0 };
//	//arr 是首元素的地址
//	//&arr[0]
//	int* p = arr;
//	//通过指针来访问数组
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%p ----- %p\n", &arr[i], p + i);
//	}
//
//	//arr[i] -> *(arr+i)
//
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%d ", *(p + i));
//	//}
//
//	return 0;
//}

//void test(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}

//void test(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]); //arr[i] ->* (arr + i)
//	}
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr, 10);
//	return 0;
//}

//二级指针
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa是一个指针变量，一级指针变量
//	int** ppa = &pa;//ppa是一个二级指针变量
//	//int* * ppa
//	//     * 说明ppa是指针
//	//int* 是说明ppa指向的对象是int* 类型
//	**ppa = 20;
//
//	//*pa = 20;
//	printf("%d\n", a);
//
//	return 0;
//}
//二级指针变量是用来存放一级指针变量的地址的


//指针数组
//存放指针的数组就是指针数组
//int main()
//{
//	//int a = 10;
//	//int b = 20;
//	//int c = 30;
//
//	//int arr[10];
//
//	//int* pa = &a;
//	//int* pb = &b;
//	//int* pc = &c;
//
//	////parr就是存放指针的数组
//	////指针数组
//	//int* parr[10] = { &a, &b, &c };
//
//	//int i = 0;
//	//for (i = 0; i < 3; i++)
//	//{
//	//	printf("%d ", *(parr[i]));
//	//}
//
//	//int arr[3][4] = { 1,2,3,4,2,3,4,5,3,4,5,6 };
//	////1 2 3 4
//	////2 3 4 5
//	////3 4 5 6
//	//int i = 0;
//	//int j = 0;
//	//for (i = 0; i < 3; i++)
//	//{
//	//	for (j = 0; j < 4; j++)
//	//	{
//	//		printf("%d ", arr[i][j]);
//	//	}
//	//	printf("\n");
//	//}
//
//	//模拟二维数组
//	int arr1[4] = { 1,2,3,4 };
//	int arr2[4] = { 2,3,4,5 };
//	int arr3[4] = { 3,4,5,6 };
//
//	int* parr[3] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", parr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
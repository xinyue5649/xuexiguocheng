#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//
//int fib(int n)
//{
//	if (n <= 2)
//		return n;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//
//int main()
//{
//	int n = 0;
//	//输入
//	scanf("%d", &n);
//	//计算
//	int m = fib(n);
//	//输出
//	printf("%d\n", m);
//	return 0;
//}



//序列中删除指定数字
//第一行输入一个整数(0≤N≤50)。
//第二行输入N个整数，输入用空格分隔的N个整数。
//第三行输入想要进行删除的一个整数。
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[50];
//	//接受n个数字
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int del = 0;
//	//接受删除的数字
//	scanf("%d", &del);
//	int j = 0;//j作为下标锁定的位置就是用来存放不删除的数据的
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] != del)
//		{
//			arr[j++] = arr[i];
//		}
//	}
//	for (i = 0; i < j; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//输入n个成绩，换行输出n个成绩中最高分数和最低分数的差。
//输入描述 : 
//两行，第一行为n，表示n个成绩，不会大于10000。
//第二行为n个成绩(整数表示，范围0~100)，以空格隔开。
//输出描述 :
//一行，输出n个成绩中最高分数和最低分数的差。

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[50];
//	int i = 0;
//	int max = 0;
//	int min = min;
//	//输入
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (arr[i] > max)
//			max = arr[i];
//		if (arr[i] < min)
//			min = arr[i];
//	}
//	printf("%d", max - min);
//
//	return 0;
//}

//描述
//KiKi想完成字母大小写转换，有一个字符，判断它是否为大写字母，如果是，将它转换成小写字母; 反之则转换为大写字母。
//输入描述 :
//多组输入，每一行输入一个字母。
//输出描述 :
//针对每组输入，输出单独占一行，输出字母的对应形式。

//int main()
//{
//	char ch = 0;
//	//scanf读取成功的时候，返回的是读取的数据的个数
//	//scanf函数在读取失败的时候返回EOF
//	while (scanf("%c", &ch)==1)
//	{
//		if (ch >= 'a' && ch <= 'z')
//			printf("%c\n", ch - 32);
//		else
//			printf("%c\n", ch + 32);
//		getchar();//处理\n
//	}
//	return 0;
//}


#include <ctype.h>
int main()
{
	char ch = 0;
	while (scanf("%c", &ch) == 1)
	{
		if (islower(ch))//islower 判断小写字母的函数
			printf("%c\n", toupper(ch));//toupper 把ch转化为大写字母
		if (isupper(ch))//isupper 判断大写字母的函数
			printf("%c\n", tolower(ch));//tolower 把ch转化为小写字母
		getchar();//处理\n
	}
	return 0;
}
//isalpha(ch)判断ch是不是字母

//%c 的前面加空格
//跳过下一个字符之前的所有空白字符
//scanf(" %c", &ch);
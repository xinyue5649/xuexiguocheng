#define _CRT_SECURE_NO_WARNINGS 1

//1.字面常量
//2.const修饰的常变量
//3.define 定义的标识常量
//4.枚举常量

//#include <stdio.h>
//int main()
//{
//	//30;//字面常量
//	//3.14;//字面常量
//	//'w';//字符
//	//"abc";
//	//const int a = 10;//在C语言钟，const修饰的a，本质是变量，但是不能直接修改，有常量的属性
//	//a = 20;
//	//printf("%d\n", a);//20
//
//	const int n = 10;
//	int arr[10] = {0};
//
//	return 0;
//}

//#define MAX 100
//#define STR "miku"
//
//#include <stdio.h>
//int main()
//{
//	printf("%d\n", MAX);
//	int a = MAX;
//	printf("%d\n", a);
//	printf("%s\n", STR);
//	MAX = 200;//错误
//
//
//	return 0;
//}

//枚举常量
//#include <stdio.h>
//
//enum color
//{
//	//枚举常量
//	RED,
//	GREEN,
//	BLUE
//};
//
////性别
//enum sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//
//};
////括号中的 MALE FEMALE SECRET是枚举常量
//int main()
//{
//	//三原色
//	//Red Green Blue
//	int num = 10;
//	enum color c = RED;
//	//RED = 20;//错误
//	//MALE = 10;//错误
//
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	//100 - int
//	//#qWer$
//	//char 字符类型
//	//'a';
//	//char ch = 'w';
//	//字符串
//	//C语言中有没有字符串类型呢？- 没有
//	//"abcdef";
//	char arr1[] = "abcdef";//7
//	char arr2[] = { 'a','b','c','d','e','f','\0'};
//
//	printf("%zd\n", strlen(arr1));//6
//	printf("%zd\n", strlen(arr2));
//
//	//int len = strlen("abc");//求字符串长度的一个函数,string length  头文件string.h
//	//printf("%d\n", len);
//
//	//printf("%s\n", arr1);
//	//printf("%s\n", arr2);
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	printf("abc\n");
//
//	return 0;
//}
//
//int main()
//{
//	printf("abc\0def");
//
//	return 0;
//}
//
//转义字符
//三字母词（现在基本上用不上）
//??) - - > ]
//??( - - > [
//
//%d - 打印整型
//%c - 打印字符
//%s - 打印字符串
//%f - 打印float类型的数据
//%lf - 打印double类型的数据
//%zu - 打印sizeof的返回值
//
//int main()
//{
//	printf("%s\n", "are you ok\?\?)");
//	(are you ok]
//	printf("%c\n", '\'');
//	printf("abcdef\n");
//	printf("\"");
//
//	printf("%s\n", "abcdef");
//
//	printf("abc\\0def");
//
//	printf("c:\\text\\text.c");
//	printf("\a");
//	printf("abc\ndef");
//	printf("%c\n", '\130');
//	printf("%c\n",'\x60');
//
//	printf("%d\n", strlen("qwer t"));//6
//	
//	printf("%d\n", strlen("c:\test\628\test.c"));
//
//	return 0;
//}

//注释
//
/*C语言注释风格
int main()
{
	//int a = 10;
	
	int a = 10;
	int b = 20;
	
	


	//创建指针变量p，并赋值为NULL
	int* p = NULL;
	return 0;
}
*/

//int main()
//{
//	//int a = 10;
//	//C++的注释风格
//
//	return 0;
//}

//
//1.注释可以梳理思路
//2.对复杂的代码进行解释
//3.写代码的时候写注释，是帮助字节，帮助别人的
//

//int main()
//{
//	//接收收入
//
//	//处理数据
//
//	//输入
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//
//	int input = 0;
//	printf("打开b站\n");
//	printf("听术力口？（0/1）");
//	scanf("%d", &input);
//
//	if (input == 1)
//	{
//		printf("听\n");
//	}
//	else
//	{
//		printf("不听\n");
//	}
//
//	return 0;
//}


//20000行有效代码的积累

//int main()
//{
//
//	int line = 0;
//	printf("练习\n");
//
//	while (line < 20000)
//	{
//		printf("写代码;%d\n",line);
//		line++;
//	}
//	if (line = 20000)
//	{
//		printf("厉害\n");
//	}
//
//	return 0;
//}




//求2个任意整数和

//函数

//int Add(int x, int y)
//{
//	return (x + y);
//}
//
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	//输入
//	scanf("%d %d", &a,&b);
//	//求和
//
//	//int sum = a + b;
//	int sum = Add(a, b);
//	int t1 = 100;
//	int t2 = 300;
//
//	int ret=Add(t1, t2);
//
//	//打印
//	printf("sum=%d\n", sum);
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 11;
//	int c = 12;
//	//0~9
//	int d = 0;
//	int e = 1;
//	//....
//	
//	//数组
//	int arr[10] = { 10,11,12,13,14,15,16,17,18,19 };
//	char ch[5];
//	double d[30];
//
//	//0~9
//	printf("%d\n", arr[8]);
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i = i + 1;
//	}
//
//	return 0;
//}







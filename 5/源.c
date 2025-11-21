#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>

//int main()
//{
//	//单分支
//	int a = 10;
//	if (a == 3)
//		printf("miku\n");
//
//	int age = 18;
//
//	if (age >= 18)
//		printf("成年\n");
//
//	int age = 18;
//
//	//双分支
//	if (age < 18)
//	{
//		printf("未成年\n");
//		printf("不能喝酒\n");
//	}
//	else
//		printf("成年\n");
//
//	//多分支
//	int age = 10;
//	scanf("%d", &age);
//
//	if (age < 18)
//		printf("青少年\n");
//	else if (age >= 18 && age < 28)// && 表示并且
//		printf("青年\n");
//	else if (age >= 28 && age < 40)
//		printf("壮年\n");
//	else if (age >= 40 && age < 60)
//		printf("中年\n");
//	else if (age >= 60 && age < 100)
//		printf("老年\n");
//	else
//		printf("老寿星\n");
//
//
//	return 0;
//}

//1.变量的命名（有意义，规范）
//2.空格，空行，换行
//int main()
//{
//	char firstname[20] = { 0 };
//	char first_name[20] = { 0 };
//	char FirstName[20] = { 0 };
//
//	return 0;
//}


//int test()
//{ 
//	int a = 4;
//	if (a == 3)
//		return 1;
//	else
//		return 0;
//}
////函数的返回值只有一个，return 只返回第一个
//int main()
//{
//	int r = test();
//	printf("%d\n", r);
//
//	return 0;
//}
	
//int main()
//{
//	int num = 3;
//	//if (5 == num)//与 if(num == 5)相同
//	//	printf("miku\n");
//
//	return 0;
//}

//int main()
//{
//	//判断一个数是否为奇数
//	int num = 0;
//	scanf("%d", &num);
//	//判断
//
//	if (num % 2 == 1)
//		printf("奇数\n");
//	else
//		printf("不是奇数\n");
//
//	return 0;
//}

//输出1 - 100之间的奇数
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 2 == 1)
//			printf("%d", i);
//		i++;
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 1;
//	while(i <= 100)
//	{
//		printf("%d", i);
//		i += 2;
//	}
//
//	return 0;
//}



//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//
//	switch (day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期日\n");
//		break;
//	}
//
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break;
//	default:
//		printf("选择错误\n");
//		break;
//	}
//
//	return 0;
//}


//int main()
//{
//	while (1)
//	{
//		printf("miku\n");
//	}
//
//	return 0;
//}

//打印1`10数字

//int main()
//{
//	int a = 1;
//	while (a <= 10)
//	{
//		if (5 == a)
//		{
//			break;
//		}
//
//		printf("%d ", a);
//		a++;
//	}
//
//	return 0;
//}


//while 循环中的
//break 是用于永久的终止循环
//continue 跳过本次循环后面的代码，直接去判断部分，进行下一次的循环

//int main()
//{
//	int a = 1;
//	while (a <= 10)
//	{
//		a++;
//		if (5 == a)
//		{
//			continue;
//		}
//
//		printf("%d ", a);
//	}
//
//	return 0;
//}

//在 windows系统中，按下Ctrl+ z ,就会被档做 EOF 返回

//int main()
//{
//	//int ch = 0;
//	//while(getchar())
//	EOF;//end of file
//	int ch = getchar();
//	//打印ch
//	printf("&c\n", ch);//方法一
//	putchar(ch);//方法二
//
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//
//	举一个例子
//	假设密码是一个字符串
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);
//
//	int ch = 0;
//	while ((ch = getchar()) != '\n')
//	{
//		getchar();
//	}
//
//	printf("请确认密码:>");
//	int ret = getchar();
//	if ('Y' == ret)
//		printf("YES\n");
//	else
//		printf("NO\n");
//
//	return 0;
//}

//%s 字符串

//getchar()//输入一个字符，=字符//赋值阿斯克码值，接着值！=(不等于)EOF对应的-1              
                          


//#include <stdio.h>
//int main()
//{
//	char ch = '\0';
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch >'9')
//			continue;
//		putchar(ch);
//	}//只打印数字字符
//	return 0;
//}



//int main()
//{
//	int i = 1;//初始化
//
//	while (i <= 10)//判断
//	{
//		printf("%d", i);
//		i++;//调整
//	}
//
//	return 0;
//}


//打印1~10

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//		
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	0~9
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}


//int main()
//{
//	//for循环的判断部分省略意味着这判断会恒成立
//	for (;;)
//	{
//		printf("miku\n");
//	}
//
//	//使用多个变量控制循环
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("miku\n");
//	}
//
//	return 0;
//}



//打印1~10

//int mian()
//{
//	int i = 0;
//
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}

//写代码
//办法（编程思维）+写代码（按照语法形式去写）



//计算 n的阶乘
//1*2*3...*n
//

//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d", ret);
//
//
//	return 0;
//}

//计算1!+2!+3!+.....+10!

//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//		sum = sum + ret;
//	}
//	printf("%d", sum);
//
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 17;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	//在一个有序数组中查找一个数字
//	//二分查找
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		//int mid = (left + right) / 2;//可能会溢出
//		int mid = left + (right - left) / 2;
//
//		if (mid < k)
//		{
//			left = mid + 1;
//		}
//		else if (mid > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//
//	return 0;
//}



//编写代码，演示多个字符从两端移动，向中间汇聚

//Hatsune Miku
//############
//H##########u
//Ha########ku
//Hat######iku
//.....
//Hatsune Miku

//#include <string.h>
//#include <windows.h>
//#include <stdlib.h>
//
//int main()
//{
//	char arr1[] = "Hatsune Miku";
//	char arr2[] = "############";
//
//	int left = 0;
//	int right = strlen(arr2) - 1; //int right = sizeof(arr2) / sizeof(arr2[0]) - 2;
//
//	while (left <= right)
//	{
//		//清空屏幕
//		system("cls");//system是一个库函数，可以执行系统命令。
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		left++;
//		right--;
//	}
//
//	return 0;
//}

//编写代码实现，模拟用户登录情景，并且只能登录三次。(只允许输入三次密码，如果密码正确则
//提示登录成功，如果三次均输入错误，则退出程序。)

//比较2个字符串是否相等，不能使用==，而应该使用一个库函数：strcmp
//如果返回值是0，表示2个字符串相等

//#include <string.h>
//
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	//假设密码是:abcdef
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);
//		if (strcmp(password, "abcdef") == 0)
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次密码均输入失败，退出程序\n");
//	}
//
//	return 0;
//}





//猜数字游戏的实现

//
//1.电脑产生异格随机数（1~100）
//2.猜数字
//猜大了
//猜小了
//直到猜对了，结束

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
////不返回值所以用void
//void menu()
//{
//	printf("********************\n");
//	printf("******* 1.play *****\n");
//	printf("******* 2.exit *****\n");
//	printf("********************\n");
//}
//
////0~RAND_MAX(32767)
//void game()
//{
//	int guess = 0;
//	//1.生成随机数
//	//0~99 -->1~100
//	int ret = rand()%100+1;//rand 生成随机数的函数
//	//2.猜数字
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("猜对了\n");
//			break;
//		}
//	}
//}
//
////指针
////int *p = NULL;//NULL指针初始化相当于0
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//猜数字的整个逻辑
//			break;
//		case 2:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，重新选择!\n");
//		}
//	} while (input);
//
//	return 0;
//}


//不能跨函数跳转
//int main()
//{
//again:
//	printf("miku\n");
//	printf("azusa\n");
//	goto again;
//	return 0;
//}

//goto 语言真正适合的场景如下：
	
//for(...)
//	for (...)
//	{
//		for (...)
//		{
//			if (disaster)
//
//				goto error;
//		}
//	}
//	...
//error:
//	if (disaster)
		// 处理错误情况




//关机程序
//1.电脑运行起来后，1分钟内关机
//2.如果输入：miku，就取消关机
//
//#include <stdio.h>
//#include <string.h>
//#include <windows.h>
//
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，你的电脑将在60秒内关机，输入：miku，就取消关机\n");
//	scanf("%s", input);
//	if (strcmp(input, "miku") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//#include <windows.h>
//
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	printf("请注意，你的电脑将在60秒内关机，输入：miku，就取消关机\n");
//	scanf("%s", input);
//	while (1)
//	{
//		if (strcmp(input, "miku") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}







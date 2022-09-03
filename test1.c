#define _CRT_SECURE_NO_WARNINGS 1

//演示多个字符从两端移动，向中间汇聚

//#include <stdio.h>
//#include <string.h>
//#include <windows.h>
//#include <stdlib.h>
//int main()
//{
//	char arr1[] = "welcome to bit...";
//	char arr2[] = "#################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	printf("%s\n", arr2);
//	//while循环实现
//	while (left <= right)
//	{
//		Sleep(1000); //1s
//		system("cls");
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//	}
//	return 0;
//}

//模拟实现用户登录情景

//int main()
//{
//	char password[40] = "";
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("please input password: ");
//		scanf("%s", password);
//		if (strcmp(password, "1997") == 0)
//		{
//			printf("log in\n");
//			break;
//		}
//		else
//		{
//			printf("输入错误，请重新输入！！\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("exit\n");
//	}
//	return 0;
//}

//猜数字游戏

//猜数字游戏
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//void menu()
//{
//	printf("********************\n");
//	printf("****** 1.play ******\n");
//	printf("****** 2.exit ******\n");
//	printf("********************\n");
//}
//void game()
//{
//	int input = 0;	
//	srand((unsigned int)time(NULL));
//	int rand_num = rand() % 100 + 1;
//	while (1)
//	{
//		printf("请输入一个数字：");
//		scanf("%d", &input);
//		if (input < rand_num)
//		{
//			printf("猜小了\n");
//		}
//		else if (input > rand_num)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("恭喜你猜对了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择->：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入错误，请重新输入\n");
//			break;
//		}
//	} while(input);
//	return 0;
//}

//关机程序

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	char input[10] = { 0 };
//	system("shutdown -s -t 60");	
//	again:
//		printf("请输入我是猪，否则您的电脑将在1分钟之后关机\n请输入：");
//		scanf("%s", input);
//		if (0 == strcmp(input, "我是猪"))
//		{
//			system("shutdown -a");
//		}
//		else
//		{
//			goto again;
//		}
//	return 0;
//}

//输入三个整数从大到小输出

//#include <stdio.h>
//int main ()
//{
//	int a = 0;
//	int	b = 0;
//	int c = 0;
//	int tmp = 0;
//	//printf("请输入三个整数: ");
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

//给定两个数，求最大公约数

//#include <stdio.h>
//int main()
//{
//	int m = 0;
//	int n = 0;	
//	scanf("%d%d", &m, &n);
//	while (m % n)
//	{
//		int max = m % n;
//		m = n;
//		n = max;
//	}
//	printf("%d\n", n);
//	return 0;
//}
//最小公倍数：n*m/最大公约数

//打印1000-2000年之间的闰年

//#include <stdio.h>
//int main()
//{	
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year < 2001; year++)
//	{
//		if ((year % 4 == 0) && (year % 100 != 0))
//		{
//			printf("%d ", year);
//			count++;
//		}			
//		else if (year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}			
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}

//打印100-200之间的素数

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{	
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}			
//		}
//		if (j == i)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//}

//打印1-100之间9的个数

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i < 101; i++)
//	{
//		if ((i % 10) == 9)
//		{
//			count++;
//		}
//		if ((i / 10) == 9)
//		{
//			count++;
//		}
//	}
//	printf("count=%d\n", count);
//	return 0;
//}

//求10个整数中的最大值

//#include <stdio.h>
//int main()
//{
//	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int max = arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 1; i <= sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d\n", max);
//	return 0;
//}

//求前a+aa+aaa+aaaa+……前n项和

//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int n = 0;
//	int i = 0;
//	int sum = 0;
//	int k = 0;
//	scanf("%d%d", &a, &n);
//	for (i = 1; i <= n; i++)
//	{
//		k = k * 10 + a;
//		sum = sum + k;
//	}
//	printf("%d的前%d项和为：%d\n", a, n, sum);
//	return 0;
//}

//打印九九乘法口诀表

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-3d", j, i, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//写一个函数判断一个数是否为素数

//#include <stdio.h>
//int is_prime(int n)
//{
//	int i = 0;
//	for (i = 2; i < n; i++)
//	{
//		if ((n % i) == 0)
//		{
//			break;
//		}
//	}
//	if (i == n)
//	{
//		return 1;
//	}	
//}
//int main()
//{
//	int n = 0;
//	printf("please input number: ");
//	scanf("%d", &n);
//	if (is_prime(n) == 1)
//	{
//		printf("%d是素数\n", n);
//	}
//	else
//	{
//		printf("%d不是素数\n", n);
//	}
//	return 0;
//}

//写一个函数判断一年是否为闰年

//#include <stdio.h>
//int is_leap_year(int n)
//{
//	if ((n % 4 == 0) && (n % 100 != 0))
//	{
//		return 1;
//	}
//	else if (n % 400 == 0)
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("please input number: ");
//	scanf("%d", &n);
//	if (is_leap_year(n) == 1)
//	{
//		printf("%d是闰年\n", n);
//	}
//	else
//	{
//		printf("%d不是闰年\n", n);
//	}
//	return 0;
//}

//写一个函数，实现一个整形有序数组的二分查找

//#include <stdio.h>
//int binarry_search(int* arr, int i, int sz)
//{
//	int mid = 0;
//	int left = 0;
//	int right = sz-1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > i)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < i)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret=binarry_search(arr, i, sz);
//	if (ret == 1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是%d\n",ret);
//	}
//	return 0;
//}

//写一个函数，每调用一次这个函数，num的值增加1

//#include <stdio.h>
//int Add(int* p)
//{
//	return (*p)++;
//}
//int main()
//{
//	int num = 1;
//	int i = 0;
//	for (i = 1; i < 4; i++)
//	{
//		int ret = Add(&num);
//		printf("%d\n", ret);
//	}	
//	return 0;
//}

//输入123，顺序分开打印1 2 3 4(递归)

//#include <stdio.h>
//void print(int n)
//{
//    if (n > 9)
//    {
//        print(n/10);
//    }
//    printf("%d ", n%10);
//}
//int main() 
//{
//    int n = 1234;
//    print(n);
//    return 0;
//}

//1.不创建临时变量，求字符串的长度(递归)。

//#include <stdio.h>
//int Strlen(const char* str)
//{
//	if (*str != '\0')
//		return  1 + Strlen(str + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char str[] = "abcdef";
//	Strlen(str);
//	printf("%d\n", Strlen(str));
//	return 0;
//}

//2.创建临时变量，求字符串的长度。

//#include <stdio.h>
//int Strlen(const char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char str[] = "abcdef";
//	Strlen(str);
//	printf("%d\n", Strlen(str));
//	return 0;
//}

//用递归求一个数的阶乘(不考虑溢出)

//#include <stdio.h>
//int fac(n)
//{
//	if (n > 2)
//		return n * fac(n - 1);
//	else
//		return n;
//}
//int main()
//{
//	int n = 5;
//	fac(n);
//	printf("%d\n", fac(n));
//	return 0;
//}

//用递归求第n个斐波那契数

//#include <stdio.h>
//int fib(n)
//{
//	if (n > 2)
//	{
//		return fib(n-1) + fib(n - 2);
//	}
//	return 1;
//}
//int main()
//{
//	int n = 3;
//	fib(n);
//	printf("%d\n", fib(n));
//	return 0;
//}

//写一个递归函数，输入一个正整数，返回它的每位数之和

//#include <stdio.h>
//int Digitsum(int n)
//{
//	int sum = 0;
//	if (n > 9)
//	{
//		return Digitsum(n / 10)+ n % 10;
//	}
//	else
//	{
//		return n;
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Digitsum(n);
//	printf("%d\n", Digitsum(n));
//	return 0;
//}

//用递归求一个数的n次方

//#include <stdio.h>
//int Pow(int n, int k)
//{
//	if (k > 0)
//	{
//		return n * Pow(n, k-1);
//	}
//	else if (0 == k)
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	Pow(n, k);
//	printf("%d\n", Pow(n, k));
//	return 0;
//}

//冒泡排序

//#include <stdio.h>
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (1 == flag)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int i = 0;
//	int arr[] = {10,9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	for (i = 0; i < 10;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//指针和数组种类：

	//整形指针：
	//int a = 0;
	//int* p = &a;
	//字符指针：
	//char ch = "abcdefg";
	//const char* p = &ch;
	//const char* p = "abcdef";
	//char p = 's';
	//数组指针：
	//int arr[] = { 0 };
	//int (*str)[] = &arr;
	//函数指针：
	//int (*p)(int, int) = Add;
	
	//整形数组：
	//int arr[] = { 1,2,3 };
	//字符数组：
	//char arr1[] = { 'a','b','c' };
	//char arr2[] = "abcdef";
	//指针数组：
	//int* arr3[] = { &a,&b,&c };
	//函数指针数组：
	//int(*arr[3])(int, int) = { Add,Sub,Div };

//模拟实现strlen

//#include <string.h>
//#include <stdio.h>
//#include <assert.h>
//int my_strlen(const char* str)
//{
//	assert(str);
//	int count = 0;
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len=my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//模拟实现strcpy

//#include <string.h>
//#include <stdio.h>
//#include <assert.h>
//void my_strcpy(char* dst, const char* src)
//{
//	assert(dst && src);
//	while (*src)
//	{
//		*dst = *src;
//		src++;
//		dst++;
//	}
//	*dst = *src;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "aaa";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//字符串切割函数strtok的用法

//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char* arr1 = "this-is,an.apple";
//	char arr2[30] = { 0 };
//	strcpy(arr2, arr1);
//	char* str = strtok(arr2, "-,.");
//	while (str != NULL)
//	{
//		printf("%s\n", str);
//		str=strtok(NULL, "-,.");
//	}
//	return 0;
//}


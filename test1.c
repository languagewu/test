#define _CRT_SECURE_NO_WARNINGS 1

//��ʾ����ַ��������ƶ������м���

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
//	//whileѭ��ʵ��
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

//ģ��ʵ���û���¼�龰

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
//			printf("����������������룡��\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("exit\n");
//	}
//	return 0;
//}

//��������Ϸ

//��������Ϸ
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
//		printf("������һ�����֣�");
//		scanf("%d", &input);
//		if (input < rand_num)
//		{
//			printf("��С��\n");
//		}
//		else if (input > rand_num)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("��ϲ��¶���\n");
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
//		printf("��ѡ��->��");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("�����������������\n");
//			break;
//		}
//	} while(input);
//	return 0;
//}

//�ػ�����

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	char input[10] = { 0 };
//	system("shutdown -s -t 60");	
//	again:
//		printf("�������������������ĵ��Խ���1����֮��ػ�\n�����룺");
//		scanf("%s", input);
//		if (0 == strcmp(input, "������"))
//		{
//			system("shutdown -a");
//		}
//		else
//		{
//			goto again;
//		}
//	return 0;
//}

//�������������Ӵ�С���

//#include <stdio.h>
//int main ()
//{
//	int a = 0;
//	int	b = 0;
//	int c = 0;
//	int tmp = 0;
//	//printf("��������������: ");
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

//�����������������Լ��

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
//��С��������n*m/���Լ��

//��ӡ1000-2000��֮�������

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

//��ӡ100-200֮�������

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

//��ӡ1-100֮��9�ĸ���

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

//��10�������е����ֵ

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

//��ǰa+aa+aaa+aaaa+����ǰn���

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
//	printf("%d��ǰ%d���Ϊ��%d\n", a, n, sum);
//	return 0;
//}

//��ӡ�žų˷��ھ���

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

//дһ�������ж�һ�����Ƿ�Ϊ����

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
//		printf("%d������\n", n);
//	}
//	else
//	{
//		printf("%d��������\n", n);
//	}
//	return 0;
//}

//дһ�������ж�һ���Ƿ�Ϊ����

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
//		printf("%d������\n", n);
//	}
//	else
//	{
//		printf("%d��������\n", n);
//	}
//	return 0;
//}

//дһ��������ʵ��һ��������������Ķ��ֲ���

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
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±���%d\n",ret);
//	}
//	return 0;
//}

//дһ��������ÿ����һ�����������num��ֵ����1

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

//����123��˳��ֿ���ӡ1 2 3 4(�ݹ�)

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

//1.��������ʱ���������ַ����ĳ���(�ݹ�)��

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

//2.������ʱ���������ַ����ĳ��ȡ�

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

//�õݹ���һ�����Ľ׳�(���������)

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

//�õݹ����n��쳲�������

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

//дһ���ݹ麯��������һ������������������ÿλ��֮��

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

//�õݹ���һ������n�η�

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

//ð������

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

//ָ����������ࣺ

	//����ָ�룺
	//int a = 0;
	//int* p = &a;
	//�ַ�ָ�룺
	//char ch = "abcdefg";
	//const char* p = &ch;
	//const char* p = "abcdef";
	//char p = 's';
	//����ָ�룺
	//int arr[] = { 0 };
	//int (*str)[] = &arr;
	//����ָ�룺
	//int (*p)(int, int) = Add;
	
	//�������飺
	//int arr[] = { 1,2,3 };
	//�ַ����飺
	//char arr1[] = { 'a','b','c' };
	//char arr2[] = "abcdef";
	//ָ�����飺
	//int* arr3[] = { &a,&b,&c };
	//����ָ�����飺
	//int(*arr[3])(int, int) = { Add,Sub,Div };

//ģ��ʵ��strlen

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

//ģ��ʵ��strcpy

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

//�ַ����и��strtok���÷�

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


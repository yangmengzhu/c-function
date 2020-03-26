#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int is_leap_year(int y)
//{
//	if ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int year = 1000; 
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year) == 1)
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount=%d", count);
//	return 0;
//} 
//int binary_search(int arr[], int k)
//{
//	int left = 0;
//	int right = 
//	int mid = (left + right) / 2;
//	while ()
//	{
//		if (mid > k)
//		{
//			right = mid - 1;
//		}
//		if (mid < k)
//		{
//			right = ;
//			left = mid + 1;
//		}
//	}
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10}
//	int k = 0;
//	scanf("%d", &k);
//	int ret=binary_search(arr, k);//找不到返回-1，找到返回下标
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//	return 0;
//}
//#include <string.h>
//int main()
//{
//	char arr1[20] = { "#############" };
//	char arr2[] = { "bit" };
//	strcpy(arr1, arr2);//字符串拷贝
//	printf("%s\n", arr1);
//	return 0;
//}
//int main()
//{
//	char arr[] = { "hello world" };
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	return 0;
//}
//求两个数中的最大值
//int get_max(int x, int y)//需要返回整型（int）值
//{
//	return (x > y ? x : y);
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int  max=get_max(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}
//写一个函数，交换两个数的值
//void swap(int *pa, int *pb)//void不需要返回值
////传址调用
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	swap(&a, &b);
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}
//打印100-200之间的素数
//#include <math.h>
//#include <stdio.h>
//int is_prime(int n)//返回1/0，为整型，用int
//{
//	int i = 0;
//	for (i = 2; i <=sqrt(n); i++)
//	{
//		if (n%i == 0)
//			return 0;
//	}
//	return 1;
//}
//	int main()
//	{
//		int i = 0;
//		int count = 0;
//		for (i = 100; i <= 200; i++)
//		{
//			if (is_prime(i) == 1)
//			{
//				printf("%d\n", i);
//				count++;
//			}
//		}
//		printf("\ncount=%d\n", count);
//		return 0;
//	}
//
//#include <stdio.h>
//int is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || ( y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year) == 1)
//		{
//			printf("%d\n", year);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//函数实现乘法口诀表9*9
//void nine_mul_tab()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d\t", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//void main()
//{
//    nine_mul_tab();
//	return 0;
//}
//有序数组中找一个数，二分查找
                  //int *arr---本质上传过来的是整型指针的地址即4
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;//mid是一直在变化的，所以需要放在循环内
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	scanf("%d", &k);
//	//数组传参的时候，传过去一个数组名，本质上传过去的是这个数组的首元素的地址即arr[0]
//	//数组传参的时候会发生降级,变成首元素的地址
//	int ret = binary_search(arr, k, sz);
//	//找到返回下标，找不到返回-1
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是%d\n", ret);
//	}
//	return 0;
//}
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()//二分查找有序数组中的数字
//{//先给定一个有序数组
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	scanf("%d", &k);//如果找到返回下标，如果找不到返回-1；
//	int ret = binary_search(arr, k, sz);//需要有返回值，所以创建一个ret来接收它，返回的是整型(在哪里找，找谁)
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//	return 0;
//}
//递归实现打印整数的每一位 
//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);//把大于9的数先一位一位的剥离开123-》12-》1-》停止,之后再一层层的返回打印1%10->12%10->123%10
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}
////非递归求字符串长度
//int my_strlen(char* str)//str每次向后走一位，即str+1
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
//	char arr[] = "hello";
//	int len=my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
////递归求字符串长度
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	return 0;
//}
//int main()
//{
//	char arr[] = "hello";
//	int len = my_strlen(arr);
//	printf("len=%d\n", len);
//	return 0;
//}
////递归求第n个数的阶乘
//int Fac(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n*Fac(n - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("ret=%d\n", ret);
//	return 0;
//}
////非递归求n的阶乘
//int Fac(int n)
//{
//	int i = 1;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		 ret = ret*i;
//	}
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("ret=%d\n", ret);
//	return 0;
//}
//递归求斐波那契数
//int Fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else if (n > 2)
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("ret=%d\n", ret);
//	return 0;
//}
//非递归求斐波那契数
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("ret=%d\n", ret);
//#include <string.h>
//void reverse_string(char* str)
//{
//	if (*str != '\0')
//	{
//		reverse_string(str + 1);
//	}
//	printf("%c ", *str);
//}
//int main()
//{
//	char arr[] = "hello";
//		reverse_string(arr);
//	return 0;
//}
//int digit_sum(int n)
//{
//	if (n > 9)
//	{
//		return (n % 10) + digit_sum(n / 10);
//	}
//	return n;
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int ret = digit_sum(num);
//	printf("%d\n", ret);
//	return 0;
//}
//递归实现n的k次方
int pow(int n, int k)
{
	if (k == 0)
	{
		return 1;
	}
	else
	{
		return n*pow(n,k - 1);
	}
}
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d%d", &n, &k);
	int ret = pow(n, k);
	printf("%d\n", ret);
	return 0;
}
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
//	int ret=binary_search(arr, k);//�Ҳ�������-1���ҵ������±�
//	if (ret == -1)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}
//	return 0;
//}
//#include <string.h>
//int main()
//{
//	char arr1[20] = { "#############" };
//	char arr2[] = { "bit" };
//	strcpy(arr1, arr2);//�ַ�������
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
//���������е����ֵ
//int get_max(int x, int y)//��Ҫ�������ͣ�int��ֵ
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
//дһ��������������������ֵ
//void swap(int *pa, int *pb)//void����Ҫ����ֵ
////��ַ����
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
//��ӡ100-200֮�������
//#include <math.h>
//#include <stdio.h>
//int is_prime(int n)//����1/0��Ϊ���ͣ���int
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
//����ʵ�ֳ˷��ھ���9*9
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
//������������һ���������ֲ���
                  //int *arr---�����ϴ�������������ָ��ĵ�ַ��4
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;//mid��һֱ�ڱ仯�ģ�������Ҫ����ѭ����
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
//	//���鴫�ε�ʱ�򣬴���ȥһ���������������ϴ���ȥ��������������Ԫ�صĵ�ַ��arr[0]
//	//���鴫�ε�ʱ��ᷢ������,�����Ԫ�صĵ�ַ
//	int ret = binary_search(arr, k, sz);
//	//�ҵ������±꣬�Ҳ�������-1
//	if (ret == -1)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±���%d\n", ret);
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
//int main()//���ֲ������������е�����
//{//�ȸ���һ����������
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	scanf("%d", &k);//����ҵ������±꣬����Ҳ�������-1��
//	int ret = binary_search(arr, k, sz);//��Ҫ�з���ֵ�����Դ���һ��ret�������������ص�������(�������ң���˭)
//	if (ret == -1)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}
//	return 0;
//}
//�ݹ�ʵ�ִ�ӡ������ÿһλ 
//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);//�Ѵ���9������һλһλ�İ��뿪123-��12-��1-��ֹͣ,֮����һ���ķ��ش�ӡ1%10->12%10->123%10
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
////�ǵݹ����ַ�������
//int my_strlen(char* str)//strÿ�������һλ����str+1
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
////�ݹ����ַ�������
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
////�ݹ����n�����Ľ׳�
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
////�ǵݹ���n�Ľ׳�
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
//�ݹ���쳲�������
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
//�ǵݹ���쳲�������
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
//�ݹ�ʵ��n��k�η�
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
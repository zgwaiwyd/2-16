#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>0
//int main()
//{
//	char input[20] = { 0 };
//	//shutdown-s -t 60
//	//system()-ִ��ϵͳ�����
//	system("shutdown -s -t 60");
//agin:
//	printf("��ע�⣬��ĵ�����һ�����ڹػ��������룺��������ȡ���ػ�\n������>:");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)//�Ƚ������ַ���-strcmp()
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto agin;
//	}
//	return 0;
//
//}
#include<stdio.h>
//int main()
//{
//	printf("hehe\n";)
//		main();//�ݹ麯����ջ���
//	return 0;
//}
//void print(unsigned int n)//1234
//{
//	if (n > 9)
//	{
//		print(n/10);
//
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);//1234
//	//�ݹ�-�����Լ������Լ�
//	print(num);//printf�������Դ�ӡ�����������ֵ�ÿһλ
//	
//	return 0;
//
//}
//void test(int n)
//{
//	if (n < 10000)
//	{
//		test(n + 1);
//
//	}
//}
//int main()
//{
//	int a = 10;
//	test(1);
//	return 0;
//}
//#include <string.h>
//
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int my_stren(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "bit";
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}
//int main()
//{
//	char arr[] = "bit";
//	//ģ��ʵ��һ��strlen����
//	print("%d\n", my_strlen(arr));
//	return 0;
//}
//int main()
//{
//	char arr[] = "bit";
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//		//����
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		printf("%d\n", ret);
//		return 0;
//	}
//��һЩ���ܣ�����ʹ�õ����ķ�ʽʵ�֣�Ҳ����ʹ�õݹ�
//int count = 0;
////int Fib(int n)
//{
//	if (n == 3)
//		count++;
//	if (n <= 2)
//		return 1;
//	else
//		return 1;
//	else
//		return Fit(n - 1) + (n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d ", &n);
//	int ret = Fit(n);
//	printf("%d\n", ret);
//	printf("count=%d\n", count);
//	return 0;
//}
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
//	printf("%d\n", ret);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	//0-9 10
//	for (i = 0; i < 10; i++)
//	{
//
//	}
//	return 0;
//}
//#include<stdio.h>
//

int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
			count++;
		if (i / 10 == 9)
			count++;
	}
	printf("%d\n", count);
	return 0;
}
int main()
{
	int i = 0;
	double sum = 0.0;
	int flag = 1;
	for (i = 1; i <= 100; i++)
	{
		sum += flag * 1.0 / i;
		flag = -flag;
	}
	printf("%lf\n", sum);

	return 0;

}
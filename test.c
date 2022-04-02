#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//void test1(int* arr[])
//{
//	printf("%d\n", sizeof(arr));
//}
//void test2(char* ch[])
//{
//	printf("%d\n", sizeof(ch));
//}
//int main()
//{
//	/*short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));
//	printf("%d\n", s);*/
//	/*int a = 10;
//	printf("%d\n", a++);
//	printf("%d\n", a);*/
//	/*int a = 0;
//	printf("%d\n", sazeof (a));*/
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(ch));
//	test1(arr);
//	test2(ch);
//	return 0;
//}
//struct stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//int main()
//{
//	struct stu s1 = { "ÕÅÈý",20,"202111250423" };
//	struct stu* ps = &s1;
//	printf("%s\n", ps->name);
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	int b = 0;
//	b = a + --a;
//	printf("%d\n", b);
//	return 0;
//}
int main()
{
	/*int i = 10;
	i = i-- - --i * (i = -3) * i++ + ++i;
	printf("%d\n", i);
	return 0;*/
	int i = 1;
	int a = 0;
	a = (++i) + (++i) + (++i);
	printf("%d\n", a);
	return 0;
}




















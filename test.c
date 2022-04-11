#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
//int my_strlen(const char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//char* my_strcat(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest && src);
//	while (*dest != '\0')
//	{
//		dest++;
//	}
	//while (*dest++ = *src++)
	//{
	//	;
	//}
//	return ret;
//}
//int main()
//{
//	/*int a = my_strlen("abcdef");
//	printf("%d", a);*/
//	/*if (strlen("abc") - strlen("abcdef") > 0)
//	{
//		printf("hehe");
//	}
//	else
//	{
//		printf("haha");
//	}*/
//	strcpy
//	char arr1[30] = { "hello" };
//	char arr2[] = { "world" };
//	my_strcat(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}
//
//my_strcmp(const char* p1, const char* p2)
//{
//	assert(p1 && p2);
//
//}
//int main()
//{
//	char p1[] = "abcdrg";
//	char p2[] = "avc";
//	strncpy(p1, p2, 3);
//	printf("%s\n", p1);
//	return 0;
//}

//int main()
//{
//	unsigned int a = 1;
//	unsigned int b = 2;
//	unsigned int c = a - b;
//	printf("%d",c);
//	return 0;
//}

/*
function:
        KMP�ַ�ƥ���㷨
Param:
@s �ı�����
@sLen �ı����ݳ���
@p ��Ҫƥ����ַ���
@pLen ��Ҫƥ����ַ�������
@next[] ��������
*/
char* KmpSearch(char* s, int sLen, char* p, int pLen, int next[])
{
    int i = 0;
    int j = 0;
    while (i < sLen && j < pLen)
    {
        //�����j=-1�������ֻص���P���Ŀ�ͷ��һ���ַ�����Ϊnext[0]=-1�������ߵ�ǰ�ַ�ƥ��ɹ�����S[i]==P[j]��������i++��j++    
        if (j == -1 || s[i] == p[j])
        {
            i++;
            j++;
        }
        else
        {
            //�����j!=-1���ҵ�ǰ�ַ�ƥ��ʧ�ܣ�����i����(��ǰs��ʧ��ĵط�)��j=next[j]    
            //next[j]��Ϊj����Ӧ��nextֵ����ʵ���Ǻ���������ͬǰ׺�ĵط�������PΪ"AFHKAFOIU"����next[6]=2,����7���ַ���O����ǰ�����ַ�"AF"(���塢�����ַ�)����ͬǰ׺"AF"(��һ�������ַ�))
            j = next[j];
        }
    }
    if (j == pLen)
    {
        return &s[i - j];
    }
    else
    {
        return NULL;
    }
}

char* my_strstr(const char* p1, const char* p2)
{
	assert(p1 && p2);
	if (*p2 == '\0')
	{
		return (char*)p1;
	}
	char* s1;
	char* s2;
	char* cur = (char*)p1;
	while (*cur)
	{
		s1 = cur;
		s2 = (char*)p2;
		while ((s1 != '\0') && (s2 != '\0') && (*s1 == *s2))
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return cur;
		}
		cur++;
	}
	return NULL;
}
int main()
{
	char* p1 = "abcdefgg";
	char* p2 = "def";
	int slen = strlen(p1);
	int plen = strlen(p2);
	int next[] = 0;
	next[0] = -1;
	char* ret = my_strstr(p1, p2);
	char* ret = KmpSearch(p1, slen, p2, plen, next);
	if (ret == '\0')
	{
		printf("err");
	}
	else
	{
		printf("%s", ret);
	}
	return 0;
}























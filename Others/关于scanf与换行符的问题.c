#include<stdio.h>
//scanf在读取字符串时，会自动忽略换行符
//scanf（“%c”,&a） 会读取换行符
//一般情况下，我们不需要每次都加上getchar，
//因为scanf只读取对应的类型，但是如果后面的
//程序中出现要读取字符时，就一定要加上
//getchar把缓冲区中的回车符去除。
int main()
{
	int T;
	char ch;
	scanf("%d%*c",&T);
	while(T--)
	{
		scanf("%c%*c",&ch);
		printf("%c\n",ch);
	}
	return 0;
}

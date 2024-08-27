#include<stdio.h>
#include<string.h>
char a[29] = {'q','w','e','r','t','y','u','i','o','p','['
	        ,'a','s','d','f','g','h','j','k','l',';'
			,'z','x','c','v','b','n','m',','};
char change(char c){
	int j;
	for(j = 0;j < 29;j++){
		if(c == a[j])
		   return a[j-1];
	}
}
int main()
{
	int T,i,len;
	char str[100];
	scanf("%d%*c",&T);
	while(T--)
	{		
	     scanf("%s",&str);
	     len = strlen(str);
	     for(i = 0;i < len;i++){
	     	str[i] = change(str[i]);
	     }
	     printf("%s\n",str);
	}
	return 0;  
}


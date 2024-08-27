#include<stdio.h>
#include<string.h>
 int main(){
	int T,i,len;
    char a[1000];
	scanf("%d",&T);
	while(T--){	
	     int flag=1,sum=0,num;	
	     scanf("%s",&a);
         len=strlen(a);
         for(i=0;i<len;i++){
         	if(a[i]>='0'&&a[i]<='9'){
         		num=0;
				while(a[i]<='9'&&a[i]>='0'){
         		  num=num*10+a[i++]-'0';
         	   }
         	   i--;
         	}     	
         	else if(a[i]=='+'){
         		flag=1;
              	num=0;//遇符号清空当前数 
         	}
         	else if(a[i]=='-'){
         		flag=0;
         		num=0;
         	}
			if(flag==1)
				sum=sum+num;
    		else
			   sum=sum-num;   	 	
         }
	     printf("%d\n",sum);
	}
	return 0;  
}

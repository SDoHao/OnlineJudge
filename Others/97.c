#include<stdio.h>
#include<string.h>
typedef struct
{
	char name[17],name2[17];
	int type;//0 other 1 exe 2 virus
}File;
int cmp(const void * a,const void * b)
{
	return strcmp(((File *)a)->name,((File *)b)->name);
}
int main()
{
	int n,i,k;
	char name[17];
	char * point;
	while(scanf("%d%*c",&n) && n != 0)
	{
		File file[n];
		i = 0;
		while(i < n)
		{
			scanf("%s",&name);
			sprintf(file[i].name2,"%s",name);
			if(strstr(name,"exe"))
			{
				file[i].type = 1;
				point = strrchr(name,'.');
				*(point) = '\0';
			}
			else
				file[i].type = 0;
			sprintf(file[i++].name,"%s",name);
		}
		qsort(file,n,sizeof(file[0]),cmp);
		for(i = 0;i < n;i++)
		{
			if(file[i].type == 1)
			{
				for(k = 0;k < n;k++)
				{
					if(i != k)
						if(strcmp(file[i].name,file[k].name) == 0)
							break;
						else if(strcmp(file[i].name,file[k].name2) == 0)
							break;
				}
				if(k < n)
					file[i].type = 2;
			}
		}
		for(k = 0;k < n;k++)
			if(file[k].type == 2)
				printf("%s.exe\n",file[k].name);
	}
    return 0;
}

//		printf("---------------\n");
//		for(k = 0;k < n;k++)
//				printf("%s %s %d\n",file[k].name,file[k].name2,file[k].type);
//		printf("---------------\n");

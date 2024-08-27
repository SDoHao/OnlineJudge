#include<stdio.h>
#include<string.h>
int main()
{
	char line[129],name[128];
	char * point;	
	while(gets(line)!= NULL && strcmp(line,"</xmp>"))
	{
		if(strstr(line,"h3"))
		{
			point = strrchr(line,'<');
			*(point) = '\0';
			point = strchr(line, '>');
			sprintf(name, "%s", point + 1);
		}
		else if(strstr(line,"In Stock"))
			printf("%s\n",name);
	}
    return 0;
}


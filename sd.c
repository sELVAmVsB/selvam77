#include<stdio.h>
#include<cvomio.h>
void main()
{
	int i=0;
	char str[30];
	printf("Enter the String:");
	scanf("%s",&str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==" ")
		{
			str[i]++;
		}
		else
		{
			++str[i];
		}
	}
	printf("%d",i);
  getch ();
  return 0;
}

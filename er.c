#include <stdio.h>
#include<conio.h>

int main(void) {
int a,b,c,d,e,f,g,h,i,j
e=(a*60)+b;
scanf("%d %d",&c,&d);
f=(c*60)+d;
if(e>f)
{
h=e-f;
i=h/60;
j=h%60;

}
else
{
h=f-e;
i=h/60;
j=h%60;
printf("%d %d",i,j);
}

getch ();
	return 0;
}

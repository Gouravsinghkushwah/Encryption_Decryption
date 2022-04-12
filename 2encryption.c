#include <stdio.h>
#include <conio.h>
#include<string.h>

int main()
{
    char a[900],b,*p = a;
    int ch;
    printf("enter value = ");
    // scanf("%s",&a);
    gets(a);
b=strlen(a);
//printf("%d\n",b);
int c=b/2;
int d=b-c;
//printf(" c = %d \n",c);
//printf(" d = %d \n",d);

 printf("NOTE:- Always choose Encryption first then Decryption\n");
  printf("CHOOSE 1 FOR ENCRPYION CHOOSE 2 FOR DECRYPTION = ");
  scanf("%d",&ch);
  switch (ch)
{

case  1:

if (b<=6)
{
    for (int i = 0; i < b; i++)
{
    p[i]=p[i]+2*22;
 
printf("%c",p[i]);
}
}
else
{  
for (int i = 0; i < c; i++)
{
    p[i]=p[i]-2;
 
printf("%c",p[i]);
}
for (int i = c;i<=b;i++)
{
    p[i]=p[i]-28;
printf("%c",p[i]);
}
}
break;
case 2: 
if (b<=6)
{
    for (int i = 0; i <=b; i++)
{
    p[i]=p[i]-2*22;
printf("%c",p[i]);
}
}
else
{ 
for (int i = 0; i < c; i++)
{
    p[i]=p[i]+2;
 
printf("%c",p[i]);
}
for (int i = c;i<=b-1;i++)
{
    p[i]=p[i]+28;
printf("%c",p[i]);

}
}
break;
default :  printf("something wrong !");
break;
return 0;
}
}

//Program for VRC
#include<stdio.h>
#include<conio.h>
int main()
{
char name[100];
int binary[30][30];
int lrc[30];
int i=0,k,h;
int lim;
int lrccount=0;

printf("Enter your name: ");
scanf("%s",name);
printf("\t \t PARITY CHECK \n");
printf("Character ASCII BINARY VRC \n");
while(name[i]!= 0)
{
int j=0;
int ascii= name[i];
int count=0;
printf(" %c\t\t %d\t ", name[i],ascii);
while(ascii>0)
{
count+= ascii%2;
ascii/=2;
}
ascii=name[i];
while(ascii !=0)
{
int rem=ascii%2;
binary[i][j]=rem;
j++;
ascii/=2;
}
lim=j;
for(j=j-1;j>=0;j--)
{
printf("%d",binary[i][j]);
}
if(count%2==0)
{
printf(" 0 \t ");
}else
{
printf(" 1 \t ");
}
printf("\n");
i++;
}
}


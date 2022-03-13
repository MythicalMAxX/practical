#include<stdio.h>
#include<conio.h>
struct h
{
char name[30];
char address[20];
int grade;
int charges;
int room;
};

struct h s[]={
{"Hotel Oggy","Lucknow",3,3000,300},
{"Hotel Shaktimaan","Kanpur",2,1500,150},
{"Hotel PushpaRaj","Sultanpur",3,1100,250},
{"Hotel hillary clinton","patna",4,100,1150},
};
void main()
{
int i,k;
char c;
for(i=0;i<=3;++i)
{
printf("\nHOTEL NAME:%s",s[i].name);
printf("\nADDRESH:%s",s[i].address);
printf("\nGRADE:%d",s[i].grade);
printf("\nCHARGES:%d",s[i].charges);
printf("\nNO.OF ROOM:%d",s[i].room);
}
printf("\nSHOW HOTEL ROOM CHARGES LESS THAN:");
scanf("%d",&k);
for(i=0;i<=3;++i)
{
if(s[i].charges<=k)
{
printf("\n %d.HOTEL NAME:%s",i+1,s[i].name);
printf("\nADDRESS:%s",s[i].address);
printf("\nGRADE:%d",s[i].grade);
printf("\nCHARGES:%d",s[i].charges);
printf("\nNO.OF ROOM:%d",s[i].room);
}
}
getch();
}

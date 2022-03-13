#include<stdio.h>
#include<conio.h>
struct hotel
{
char name[30];
char address[20];
int grade;
int charges;
int room;
};

struct hotel key[]={
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
printf("\nHOTEL NAME:%s",key[i].name);
printf("\nADDRESH:%s",key[i].address);
printf("\nGRADE:%d",key[i].grade);
printf("\nCHARGES:%d",key[i].charges);
printf("\nNO.OF ROOM:%d",key[i].room);
}
printf("\nSHOW HOTEL ROOM CHARGES LESS THAN:");
scanf("%d",&k);
for(i=0;i<=3;++i)
{
if(key[i].charges<=k)
{
printf("\n %d.HOTEL NAME:%s",i+1,key[i].name);
printf("\nADDRESS:%s",key[i].address);
printf("\nGRADE:%d",key[i].grade);
printf("\nCHARGES:%d",key[i].charges);
printf("\nNO.OF ROOM:%d",key[i].room);
}
}
getch();
}

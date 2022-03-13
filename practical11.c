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
void hotel();
struct h s[]={
{"Hotel 1","Lucknow",3,3000,300},
{"Hotel 2","Kanpur",2,1500,150},
{"Hotel 3","Sultanpur",3,1100,250},
{"Hotel 4","patna",4,100,1150},
};
void main()
{
int i;
char c;
for(i=0;i<=3;++i)
{
printf("\nHOTEL NAME:%s",s[i].name);
printf("\nADDRESH:%s",s[i].address);
printf("\nGRADE:%d",s[i].grade);
printf("\nCHARGES:%d",s[i].charges);
printf("\nNO.OF ROOM:%d",s[i].room);
}
hotel();
getch();
}

void hotel()
{
int i,k;
char c;
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
}

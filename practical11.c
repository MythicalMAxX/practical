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
{"Hotel 1","Oggy",3,3000,300},
{"Hotel 2","Shaktimaan",2,1500,150},
{"Hotel 3","PushpaRaj",3,1100,250},
{"Hotel 4","Hillary Clinton",4,100,1150},
};
void main()
{
int i;
char c;
for(i=0;i<=3;++i)
{
printf("\nHOTEL NAME:%s",key[i].name);
printf("\nADDRESH:%s",key[i].address);
printf("\nGRADE:%d",key[i].grade);
printf("\nCHARGES:%d",key[i].charges);
printf("\nNO.OF ROOM:%d",key[i].room);
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
if(key[i].charges<=k)
{
printf("\n %d.HOTEL NAME:%s",i+1,key[i].name);
printf("\nADDRESS:%s",key[i].address);
printf("\nGRADE:%d",key[i].grade);
printf("\nCHARGES:%d",key[i].charges);
printf("\nNO.OF ROOM:%d",key[i].room);
}
}
}

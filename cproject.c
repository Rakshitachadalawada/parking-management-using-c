#include<stdio.h>
#define MAXfour 50
#define MAXtwo 50
int queuetwo[MAXtwo];
int fronttwo=-1;
int raretwo=-1;
int queuefour[MAXfour];
int frontfour=-1;
int rarefour=-1;
int ch;
int press;
int num;
int left;
int del,i,j,countfour=0,counttwo=0;
void enqueuefour(x)
{
if(rarefour==MAXfour-1)
{
printf("\nparking place alloted for four wheelers is filled...wait for few minutes");
}
else
{
if(frontfour==-1&&rarefour==-1)
{
frontfour=0;

}
rarefour++;
queuefour[rarefour]=x;
printf("\nsuccessfully parked!!");
}
}
void dequeuefour()
{
if(frontfour==-1&&rarefour==-1)
{
printf("\nparking place alloted for four wheelers is empty!!");
}
else
{
if(frontfour==rarefour)
{
frontfour=-1;
rarefour=-1;
}
else
{
frontfour++;
}
}
}
void enqueuetwo(x)
{
if(raretwo==MAXtwo-1)
{
printf("\nparking place alloted for two wheelers is filled...wait for few minutes");
}
else
{
if(fronttwo==-1&&raretwo==-1)
{
fronttwo=0;

}
raretwo++;
queuetwo[raretwo]=x;
printf("\nsuccessfully parked!!");
}
}
void dequeuetwo()
{
if(fronttwo==-1&&raretwo==-1)
{
printf("\nparking place alloted for two wheelers is empty!!");
}
else
{
if(fronttwo==raretwo)
{
fronttwo=-1;
raretwo=-1;
}
else
{
fronttwo++;
}
}
}
int main()
{
//printf("\n**************************WELCOME TO PARKING MANGEMENT SYSTEM***********************************************");
//printf("\nENTER YOUR CHOICE\n1.to park your vehicle\n2.to view number of vehicles in the parking\n3.to check out\n4.exit");
//scanf("%d",&ch);
while(1)
{
printf("\n**************************WELCOME TO PARKING MANGEMENT SYSTEM***********************************************");
printf("\nENTER YOUR CHOICE\n1.to park your vehicle\n2.to view number of vehicles in the parking\n3.to check out\n4.exit");
scanf("%d",&ch);

switch(ch)
{
case 1:
printf("\nenter type of vehicle to park:\npress 5 for 2 wheeler\npress 6 for 4 wheeler");
scanf("%d",&press);
printf("\nENTER NUMBER");
scanf("%d",&num);
if(press==5)
{

enqueuetwo(num);
}
else if(press==6)
{
enqueuefour(num);
}
else
{
printf("\ninvalid");
}
break;
case 2:
//if(rarefour==-1&&)
//left=(rarefour+1)+(raretwo+1);
if(rarefour==-1&&frontfour==-1)
{
countfour=0;
}
else
{
if(frontfour==rarefour)
{
countfour=1;
}
else
{

for(i=frontfour;i<=rarefour;i++)
{
countfour++;
}
}
}
if(raretwo==-1&&fronttwo==-1)
{
counttwo=0;
}
else
{
if(fronttwo==raretwo)
{
counttwo=1;
}
else
{

for(i=fronttwo;i<=raretwo;i++)
{
counttwo++;
}
}
}
//for(i=rare;i<=)
left=counttwo+countfour;
printf("\nNUMBER OF VEHICLES IN THE PARKING:\ntwo wheelers:%d\nfour wheelers %d",counttwo,countfour);
break;
case 3:
printf("\nENTER THE TYPE OF VEHICLE\n press 7 for 2 wheeler\n press 8 for 4 wheeler");
scanf("%d",&del);
if(del==7)
{
dequeuetwo();

}
else if(del==8)
{
dequeuefour();
}
else
{
printf("\ninvalid");
}
break;
case 4:
return 0;

default:
printf("\nenter vaild number");
}
}
}
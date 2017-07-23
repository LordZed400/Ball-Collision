#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
int x=0, y=0, i=0, a=1,b=1;
int xpo,ypo;
flushall();
printf("Give X-coordinate for circle: ");
scanf("%d",&xpo);
printf("Give Y-coordinate for circle: ");
scanf("%d",&ypo);
flushall();
int gd=DETECT, gm;
initgraph(&gd,&gm,"C://TC//BGI");
do
{
cleardevice();
settextstyle(GOTHIC_FONT,0,4);
outtextxy(160,10,"THE AMAZING CIRCLE");
settextstyle(DEFAULT_FONT,0,0);
outtextxy(240,360,"Press any key to exit");
if(x+xpo==0)
a=1;
if(y+ypo==0)
b=1;
if(x+xpo==540)
a=2;
if(y+ypo==240)
b=2;
if(a==1)
x++;
else
x--;
if(b==1)
y++;
else
y--;
rectangle(40,340,600,80);
circle(50+xpo+x,90+ypo+y,10);
delay(10);
}while(!kbhit());
getch();
closegraph();
flushall();
}
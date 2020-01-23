#include<graphics.h>
#include<conio.h>
main()
{
int a,bb,i,j,x,y,s,l,n,p,q,t,r,tt,pp,qq;
clrscr();
a=DETECT;
initgraph(&a,&bb,"c:\\turboc3\\bgi");
cleardevice();
	for(r=0;r<56;r++)
	{
		delay(30);
		for(i=0;i<15;i++)
		{
		setcolor(YELLOW);
		setfillstyle(5,8);
		fillellipse(x,y,3,3);
		x=x+15;
		}
		setcolor(14);
		circle(460,110,r);
	}
settextstyle(8,0,1);
setcolor(10);
outtextxy(90,50,"THE GREEN PARK ");
outtextxy(50,420,"Press A to see Autumn ::: ");
outtextxy(50,450,"Press W to see Winter ::: ");
setcolor(BROWN);
line(50,400,640,400);
delay(100);
arc(145,350,270,90,50);
arc(265,350,90,270,50);
x=280;
y=300;
for(i=15;i>=0;i--)
{
	s=x;
	for(j=i;j>=0;j--)
	{
		//delay(40);
		setcolor(GREEN);
		circle(s,y,10);
		s-=10;

	}
	delay(100);
	y-=10;
	x-=5;
}
l=x;
n=y;
setcolor(BROWN);
line(50,400,640,400);
delay(100);
arc(340,350,270,90,50);
arc(460,350,90,270,50);
x=480;
y=300;
for(i=15;i>=0;i--)
{
	s=x;
	for(j=i;j>=0;j--)
	{
		//delay(40);
		setcolor(GREEN);
		circle(s,y,10);
		s-=10;

	}
	delay(170);
	y-=10;
	x-=5;
}
p=l;
q=n;

tt=getch();
	if('a'==tt)
	{

	x=280;
y=300;
for(i=15;i>=0;i--)
{
	s=x;
	for(j=i;j>=0;j--)
	{
		//delay(40);
		setcolor(12);
		circle(s,y,10);
		s-=10;

	}
       //	delay(100);
	y-=10;
	x-=5;
}
x=480;
y=300;
for(i=15;i>=0;i--)
{
	s=x;
	for(j=i;j>=0;j--)
	{
		//delay(40);
		setcolor(12);
		circle(s,y,10);
		s-=10;

	}
       //	delay(100);
	y-=10;
	x-=5;
}


	for(i=0;i<=16;i++)
	{
		s=x;
		t=p;
		for(j=0;j<=i;j++)
		{

		delay(80);
		setcolor(BLACK);
		circle(s,y,10);
		circle(t,q,10);
		s+=10;
		t+=10;
		}
	y+=10;
	x-=5;
	p-=5;
	q+=10;
	}
	}

      else  if('w'==tt)
	{

	  for(i=0;i<=16;i++)
	{
		s=x;
		t=p;
		for(j=0;j<=i;j++)
		{

		//delay(50);
		setcolor(15);
		circle(s,y,10);
		circle(t,q,10);
		s+=10;
		t+=10;
		}
		delay(170);
	y+=10;
	x-=5;
	p-=5;
	q+=10;
	}

	 do{

	 pp=rand()%640;
	 qq=rand()%450;
	 setcolor(15);
	 delay(50);
	 circle(pp,qq,1);

	 }while(!kbhit());

	}


	else
		exit();
getch();
}


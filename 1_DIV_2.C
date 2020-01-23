#include<graphics.h>
#include<conio.h>
main()
{
int a,bb;
int x=50,y=200,lx,ly,j=120,e,s,r=65;
clrscr();
a=DETECT;
initgraph(&a,&bb,"c:\\turboc3\\bgi");
cleardevice();
while(x<650)
{
       //	circle(550,200,65);
	setfillstyle(3,5);
	fillellipse(550,200,r,r);
	line(230,120,230,350);
	delay(j);
	cleardevice();
	setcolor(14);
     //	circle(x,y,40);
	setfillstyle(2,4);
	fillellipse(x,y,40,40);
		if(x>=450)
			{
				setcolor(0);
				delay(j);
				setfillstyle(3,0);
				fillellipse(550,200,r,r);
				r-=5;
				setfillstyle(3,4);
				fillellipse(x,y,40,40);

			}
			settextstyle(0,0,2);
			outtextxy(50,90," you have a chance to save the  earth");

	if(kbhit())
	{

		settextstyle(0,0,2);
		outtextxy(50,90," you have a chance to save the  earth");

		lx=x;
		ly=y;
		while(x<650)
		{
			cleardevice();
			line(230,120,230,350);

				settextstyle(0,0,2);
				outtextxy(50,90," you are fail to save the  earth");

			setcolor(14);
			setfillstyle(3,5);
			fillellipse(550,200,r,r);
			setcolor(10);
		       //	circle(x,y,30);     // part 1
			setfillstyle(2,4);
			fillellipse(x,y,30,30);
			delay(40);
			setcolor(0);
		      //	circle(x,y,30);
		      setfillstyle(0,0);
		      fillellipse(x,y,30,30);
			 setcolor(13);
			//outtextxy(200,200,"you save the earth to distroy ");
			setcolor(10);
		       //	circle(lx,ly,30);   // part 2
			setfillstyle(2,4);
			fillellipse(lx,ly,30,30);
			delay(40);
			setfillstyle(0,0);
			fillellipse(lx,ly,30,30);
			if(x>=500)
			{
				setcolor(0);
				delay(j);
				settextstyle(10,0,2);
				outtextxy(50,90," you are fail to save the  earth");
				setfillstyle(3,5);
				fillellipse(550,200,r,r);
				r-=5;



			}
			x+=10;
			y-=3;
			lx+=10;
			ly+=3;
		}
	}
	x+=10;
}
getch();
getch();
}

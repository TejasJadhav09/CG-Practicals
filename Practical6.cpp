#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;
int main()     {
	int gd,gm;
	int r,i,a,b,x,y;
        initwindow(600,600);
//	detectgraph(&gd,&gm);
//	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

	//draw the base rectangle
	setcolor(WHITE);
	setfillstyle(SOLID_FILL,6);
	//base 3
	rectangle(202,340,330,360);
	floodfill(203,341,WHITE);
	//base 2
	rectangle(222,320,310,340);
	floodfill(223,321,WHITE);
	//base 1
	rectangle(242,300,290,320);
	floodfill(243,301,WHITE);

	//pole
	setcolor(6);
	setfillstyle(SOLID_FILL,6);
	rectangle(263,96,269,300);
	floodfill(264,97,6);
	arc(266,96,0,180,3);
	floodfill(267,95,6);

	//draw the top rectangle
	setcolor(12);
	rectangle(270,100,370,130);
	setfillstyle(SOLID_FILL,12);
	floodfill(271,101,12);
	//draw middle rectangle
	setcolor(WHITE);
	rectangle(270,130,370,160);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(271,131,WHITE);
	//draw bottom rectangle
	setcolor(GREEN);
	rectangle(270,160,370,190);
	setfillstyle(SOLID_FILL,GREEN);
	floodfill(271,161,GREEN);

	//draw ashok chakra
	a=320;
	b=145;
	r=14;
       setcolor(BLUE);
       circle(a,b,r);
       for(i=0;i<=360;i=i+17){
	  x=r*cos(i*3.14/180);
	  y=r*sin(i*3.14/180);
	 line(a,b,a+x,b-y);
       }
       getch();
   //closegraph();
   return 0;
}
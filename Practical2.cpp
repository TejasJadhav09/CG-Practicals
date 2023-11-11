#include <iostream>
#include <conio.h>
#include <graphics.h>
#include<dos.h>

using namespace std;

void bsline(int x,int y,int x2,int y2)
{
	int dx,dy,p;
	
	//calculate values of delta x and y
	dx=x2-x;
	dy=y2-y;
	
	//calculate initial decision parameter
	p = 2 * (dy) - (dx);
	
	//find out x and y co-ordinates for line plotting
	while(x <= x2)
	{
		if(p < 0)
		{
			x=x+1;
			y=y;
			p = p + 2 * (dy);
		}
		else
		{
			x=x+1;
			y=y+1;
			p = p + 2 * (dy - dx);
		}
		putpixel(x,y,RED);
		delay(100);
	}
}

int main()
{
	int x1,x2,y1,y2;
	int gd=DETECT,gm;
	
	//Take i/p
	
	cout<<"Enter the x1,y1,x2,y2 values : ";
	cin>>x1>>y1>>x2>>y2;
        
    //Create new window for displaying output
    initwindow(1000,800);
	
		
	//call to the line draw function
	bsline(x1,y1,x2,y2);
	
	getch();
	return 0;
	//closegraph();
}
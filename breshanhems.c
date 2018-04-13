
#include<graphics.h>

int main()
{
	
	
	
	int dx,dy,x1,x2,y1,y2,x,y;
	int p=0;
	int gd=DETECT,gm;
	
	
	printf("Enter the first starting point of the line");  //taking starting points
	scanf("%d %d",&x1,&y1);
	
	
	printf("Enter the ends point of the line");           //taking ends points
	scanf("%d %d",&x2,&y2);
	
	detectgraph(&gd,&gm);                                //detect graph
	initgraph(&gd,&gm,"");                               //initialize graph
	
	
	
	
	x=x1;                                              //set x1 points to x
	y=y1;                                              //set y1 poiits to y                          
	dx=x2-x1;
	dy=y2-y1;
	putpixel(x,y,14);                                  //plot point
	p=2*dy-dx;                                         //calculate decision parameter
	
	while(x1!=x2) 
	{
		if(p<=0)                                        //cheking     
		{    
			x=x+1;                                      //x increament
			y=y;
			p=p-2*dy;                                   //calculate new P
 			putpixel(x,y,14);
			
		}
		else
		{
			x=x+1;                                     //x increament
			y=y+1;                                      //y increament
			p=p-2*dy-2*dx;                               //calculate new p  
			putpixel(x,y,14);                
		}
	}
	

	delay(1000);
	getch();
	closegraph();
return 0;	
		
}	

	

#include<graphics.h>

int main()
{
     int x,y,r,dp=0;
     
     int gd=DETECT,gm;
                             //detect graph
	initgraph(&gd,&gm,NULL); 
     
     
	printf("Enter the  starting point of the circle");  //taking starting points
	scanf("%d %d",&x,&y);
	
	  
	printf("Enter the  radius of the circle");  //taking starting points
	scanf("%d %d",&r);
	  
     
	 x=0;
	 dp=1-r;
	 y=r;
	
	
	while(x<y)
	{
	
	if(dp<0)
	{
	x=x+1;
	putpixel(x,y,RED);
	dp=dp+2*x+3;
	}
	else
	{
	x=x+1;
	y=y-1;
    putpixel(x,y,RED);
    dp=dp+2*(x-y)+5;
    }
    }
 
	getch();
	closegraph();
return 0;	
		
}	   	
	
	

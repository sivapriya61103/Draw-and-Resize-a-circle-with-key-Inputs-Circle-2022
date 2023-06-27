#include<conio.h>
#include<stdio.h>
#include<graphics.h>

int main(void)
{
	char c;
	int x,y;
	int radio =100;
	int controlador = DETECT,gmode,handler;
	void initgraph (int *graphdriver,int *graphmode,char *pathodriver);	
int driver,mode;
driver=DETECT;
initgraph(&driver,&mode,"c:tcbgi");
   handler = graphresult();
   if (handler != grOk)
   {
   	printf("GRAPH ERROR: %s\n",grapherrormsg(handler));
   	printf("Press ONE KEY TO HALT:");
   	getch();
   	exit(1);
   }
   
   x=getmaxx()/2;
   y=getmaxy()/2;
   setcolor(3);
   
   do{
   	if(c=='+') radio++;
   	if(c=='-') radio--;
   	circle(x,y,radio);
   	}while (c!='q');
   	getch();
   	closegraph();
   	return 0;
}


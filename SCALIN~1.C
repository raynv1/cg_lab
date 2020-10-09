#include<stdio.h>
#include<graphics.h>
#include<math.h>
//function for triangle scaling
void scaling(int x1,int y1,int x2,int y2,int x3,int y3)
{
 int sx,sy,xn1,yn1,xn2,xn3,yn3,yn2,gd,gm;
 printf("enter the scaling vector\n");
 scanf("%d %d",&sx,&sy);
 //scale the co-ordinates of triangle vertices by multiplying the scaling vector
 xn1=x1*sx;
 yn1=y1*sy;
 xn2=x2*sx;
 yn2=y2*sy;
 xn3=x3*sx;
 yn3=y3*sy;
 //initializing the graph
 initgraph(&gd,&gm,"C:\\Turboc3\\BGI");
 //print the intitial triangle
 line(x1,y1,x2,y2);
 line(x1,y1,x3,y3);
 line(x2,y2,x3,y3);
 delay(600);
 //print the scaled triangle
 line(xn1,yn1,xn2,yn2);
 line(xn1,yn1,xn3,yn3);
 line(xn2,yn2,xn3,yn3);
 delay(600);
 cleardevice();

}
void main()
{
 int ch,x1,y1,x2,y2,x3,y3;
 printf("enter the vertex co-ordinates of triangle\n");
 scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
 scaling(x1,y1,x2,y2,x3,y3);
 getch();
}
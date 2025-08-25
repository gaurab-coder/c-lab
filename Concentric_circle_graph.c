#include <graphics.h>
int main(void)
{
    int gdriver = EGA, gmode=EGALO,x,y,maxx, maxy;
    initgraph(&gdriver, &gmode, "c:\\tc\\bgi");
    setcolor(RED);
    maxx=getmaxx();
    maxy=getmaxy();
    x=maxx/2;
    y=maxy/2;
    circle(x,y,50);
    circle(x,y,75);
    outtextxy(x,y,".");
    getch();
    closegraph(); 
    return 0;
}

#include<stdio.h>
int main()
{
    int length,breadth,area,peri;
    printf("enter the length of rectangle : ");
    scanf("%d",&length);
    printf("enter the breadth of the rectanl]gke : ");
    scanf("%d",&breadth);
    area=length*breadth;
    peri=2*(length+breadth);
    if (area>peri)
    {
        printf("area of the rectanglr is greater thean the perimeter !!");

    }
    else if (peri>area)
    {
        printf("the area of the rectangle is lesser than the perimeter !!");
    }
    else
    {
        printf("both area and the perimeter is equal !!");
    }
    return 0;

    }
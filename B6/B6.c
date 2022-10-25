#include<stdio.h>
#include<conio.h>

void main() {
    int a, b, c, d, min, min1, min2;
    printf("Nhap vao so a: ");
    scanf("%d", &a);
    printf("Nhap vao so b: ");
    scanf("%d", &b);
    printf("Nhap vao so c: ");
    scanf("%d", &c);
    printf("Nhap vao so d: ");
    scanf("%d", &d);
    min1=a;
    min2=c;
    if(a>b)
        min1=b;
    if(c>d)
        min2=d;
    min=min1;
    if(min2<min1)
    min=min2;
    printf("So nho nhat trong 4 so la: %d", min);
    getch();
}
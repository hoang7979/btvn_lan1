#include <stdio.h>
#include <conio.h>

void main () 
{
    int a,b,c,d ;
    // nhập giá giờ
    printf("Nhap gio : ");
    scanf("%d",&a);
    // nhập phút
    printf("Nhap phut : ");
    scanf("%d",&b);
    // nhập giây
    printf("Nhap giay : ");
    scanf("%d",&c);
    // tính giây 
    d = 60*60*a + 60*b + c;
    // in ra màn hình kết quả giây tính được
    printf("trung so giay la: %d ",d);
}
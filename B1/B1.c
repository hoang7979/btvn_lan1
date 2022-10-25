#include <stdio.h>
#include <conio.h>

void main () 
{
    int a,b,c;
    printf("CHUONG TRINH TINH TRUNG BINH CONG 3 SO");
    // nhập giá trị đầu tiên 
    printf("Nhap gia tri dau tien : ");
    scanf("%d",&a);
    // nhập giá trị thứ 2
    printf("Nhap gia tri thu hai : ");
    scanf("%d",&b);
    // nhập giá trị thứ 3
    printf("Nhap gia tri thu ba : ");
    scanf("%d",&c);
    // dùng %f là vì trung bình cộng 3 số có thể là 1 số có ","
    printf("trung binh cong cua ba so la: %f ",(float)(a + b + c )/3 );
}

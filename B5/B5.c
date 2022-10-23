#include <stdio.h>
#include <conio.h>

void main()
{
    char c;
    printf("Nhap vao mot chu cai tu ban phim : "); scanf("%c",&c);
    printf("Chu cai vua nhap la : %c\n",c);
    // nếu là chữ thường thì đổi thành chữ in hoa 
    if (c>='a' && c<='z' ) 
    {
        c=c-32;
        printf("Chu cai sau khi thay doi la : %c\n", c);
    }
    // nếu là chữ in hoa thì đổi thành chữ thường
    else if (c>='A' && c<='Z')
    {
        c=c+32; 
        printf("Chu cai sau khi thay doi la : %c\n", c);
    }
}

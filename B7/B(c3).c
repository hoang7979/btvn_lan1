#include <stdio.h>
#include <conio.h>

void main ()
{
    int a;
    printf("Nhap vao mot so bat ki : ");
	scanf("%d", &a);
    if ( a>=1 && a<=9 )
    {
        switch (a) 
        {
            case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9:
            printf("So nay la so %d", a); 
            break;
        }
    }
    else printf("Khong doc duoc !!!");
}
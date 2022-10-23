#include <stdio.h>
#include<conio.h>

void main()
{
	int a;
            printf("Nhap vao mot so bat ki : ");
	scanf("%d", &a);
    switch (a)
    {
            case 1:
                printf("So ban nhap la : mot ");
                break;
            case 2:
                printf("So ban nhap la : hai");
                break;
            case 3:
                printf("So ban nhap la : ba");
                break;
            case 4:
                printf("So ban nhap la : bon");
                break;
            case 5:
                printf("So ban nhap la : nam");
                break;
            case 6:
                printf("So ban nhap la : sau");
                break;
            case 7:
                printf("So ban nhap la : bay");
                break;
            case 8:
                printf("So ban nhap la : tam");
                break;
            case 9:
                printf("So ban nhap la : chin");
                break;
		default: 
			printf("Khong doc duoc !!!");
	}
}

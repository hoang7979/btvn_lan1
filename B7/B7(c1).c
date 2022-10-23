#include <stdio.h>
#include<conio.h>

void main()
{
	int a;
    printf("Nhap vao mot so bat ki : ");
	scanf("%d", &a);

    if (a>=1 && a<=9)
        printf("So ban vua nhap la so %d\n",a);
    else 
	    printf("Ban da nhap so sai !!! vui long nhap lai so khac ");
}

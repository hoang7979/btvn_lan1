#include <stdio.h>
#include <conio.h>

void main()
{
	float a,b,c,delta,x1,x2;
	printf("CHUONG TRINH GIAI PHUONG TRINH BAC 2\n");
	printf("Nhap a :");
	scanf("%f",&a);
	printf("Nhap b :");
	scanf("%f",&b);
	printf("Nhap c :");
	scanf("%f",&c);
	if (a==0)
	{
		if (b==0)
		{
			if (c==0) printf("Phuong trinh vo so nghiem");
			else printf("Phuong trinh vo nghiem");
		}
		else
		{
			x1=-b/c;
			printf("Phuong trinh co 1 nghiem:%f",x1);
		}
	}
	else
	{
		delta=b*b-4*a*c ;
		if (delta>0)
		{
			x1=(-b+sqrt(delta))/(2*a);
			x2=(-b-sqrt(delta))/(2*a);
			printf("Phuong trinh co 2 nghiem phan biet!!\n");
			printf("Nghiem thu nhat la :%f\n",x1);
			printf("Nghiem thu hai la :%f\n",x2);
		}
		if (delta==0)
		{
			x1=-b/(2*a);
			printf("Phuong trinh da nghiem kep:%f",x1);
		}
		if (delta<0) 
			printf("Phuong trinh vo nghiem");
	}
	getch() ;
}
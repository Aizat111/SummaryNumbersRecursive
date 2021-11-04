#include<stdio.h>
int toplam(int s)
{
	if(s==0)
	return 0;
	else
	return s+toplam(s-1);
}
int main()
{
int s;
printf("bir sayi giriniz:");
scanf("%d",&s);
printf("sonuc=%d",toplam(s));
return 0;
}


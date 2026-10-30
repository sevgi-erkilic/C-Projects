#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int n,sayi,i;
	float aritOrt=0,top=0;
	for(i=1;i<=n;i++)
	{
		n=0;
		aritOrt=1;
		if(sayi!=-1)
		{
			n++;
			printf("%d. sayiyi giriniz:",n);
			scanf("%d",sayi);
			top+=sayi;
			aritOrt=top/n;	
		}
	}
	    printf("%d tane girdiginiz sayinin aritmetik ortalamasi:%.2f",n,aritOrt);
	
	return 0;
}

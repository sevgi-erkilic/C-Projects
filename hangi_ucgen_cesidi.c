#include <stdio.h>
int main(void) {
	int a,b,c;
	printf("ucgenin kenarlarini giriniz:");
	scanf("%d%d%d",&a,&b,&c);
	if(a==b&&b==c)
	   printf("eskaner ucgen\n");
	else if(a==c||a==b||b==c)
	   printf("ikizkenar ucgen");
	else
	   printf("cesitkenar ucgen");
	return 0;
}

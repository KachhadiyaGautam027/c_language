#include<stdio.h>
main(){
	
	
	int x=4, y=5, total;
	printf("enter the value of x=4");
	scanf("%d", &x);
	
	printf("enter the value of y=5");
	scanf("%d", &y);
	
	total=(x*x)+2*(x*y)+(y*y);
	printf("(x+y)2= %d",total);
}
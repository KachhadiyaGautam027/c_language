#include<stdio.h>
main(){
	
	int a,b;
	printf("%d%d" , &a,&b);
	printf("before swapping\n a=%d\n b=%d\n ,a,b");
	a=a+b;
	b+a-b;
	a+a-b;
	printf("after swapping\n a=%d\n b=%d\n ,a,b");
	
}
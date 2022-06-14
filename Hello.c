#include<stdio.h>

int sum(int a, int b);

int main(){
	int a = 1;
	int b = 2;
	int *c = &a;
	int *d = &b;
	int x = sum(a, b);

	printf("%p\n", c);
	printf("%p\n", d);
	c = d;
	printf("%p\n", c);
	printf("%p\n", d);
	printf("%d\n", *c);


	//printf("%d", x);
	return 0;
}

int sum(int a, int b){
	return a + b;
}
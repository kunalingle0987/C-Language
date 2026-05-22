#include<stdio.h>

int swap(int*,int*);

int main(){
	int a=20;
	int b=50;
	
	printf("\n before swapping");
	printf("\n a=%d",a);
	printf("\n b=%d",b);
	
	swap(&a,&b);
	
	printf("\n after swapping");
	printf("\n a=%d",a);
	printf("\n b=%d",b);
	
	return 0;
}
int swap(int *x,int *y){
	int s;
	
	s=*x;
	*x=*y;
	*y=s;
}
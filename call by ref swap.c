#include<stdio.h>

int swap(int*,int*);

int main(){
	int a=50;
	int b=100;
	printf("before swapping");
	printf("\n a=%d",a);
	printf("\n b=%d",b);
	
	swap(&a,&b);
	
	printf("after swaping");
	printf("\n a=%d",a);
	printf("\n b=%d",b);
	
	return 0;
	
}
int swap(int*x,int*y){
	int s;
	s=*x;
	*x=*y;
	*y=s;
}
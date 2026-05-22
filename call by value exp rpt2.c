#include<stdio.h>
int add(int,int);
int mul(int,int);

int main(){
	int n1,n2;
	printf("\n enter the number");
	scanf("%d%d",&n1,&n2);
	add(n1,n2);
	mul(n1,n2);
	return 0;
	
}
 int add(int n1,int n2){
	int ans;
	ans=n1+n2;
	printf("\n addition of 2 num=%d",ans);
}
int mul( int x,int y){
	int multi;
	multi=x*y;
	printf("\n multipliation of 2 number is=%d",multi);
}
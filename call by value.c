#include<stdio.h>
 int add(int,int);
 int mul(int,int);
 
 int main(){
 	int n1,n2;
 	printf("\n enter any 2 number");
 	scanf("%d%d",&n1,&n2);
 	add(n1,n2);
 	mul(n1,n2);
 	return 0;
 }
 int add(int n1,int n2){
 	int addition;
 	addition=n1+n2;
 	printf("\n addition=%d",addition);
 	
 }
 int mul(int x,int y){
 	int mul;
 	mul=x*y;
 	printf("\n multiplication=%d",mul);
 }
 


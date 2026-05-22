#include<stdio.h>
union un{
	int mem1;
	char mem2;
	float mem3;
};
int main(){
	 union un var1;
	  var1.mem1=15;
	  
	  printf("\n the value of member1=%d",var1.mem1);
	  return 0;
}
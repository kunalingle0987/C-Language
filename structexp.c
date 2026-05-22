
//structure code to create a name and fees table.

struct course
{
	int code;
	char cname[10];
	int fees;
};
int main()
{
	struct course c1,c2;
	
	printf("\n Enter your data");
	
	
	scanf("%d%s%d",&c1.code,&c1.cname,&c1.fees);
	scanf("%d%s%d",&c2.code,c2.cname,&c2.fees);
	
	printf("\n code\tcname\tfees");
	printf("\n%d\t%s\t%d",c1.code,c1.cname,c1.fees);
	printf("\n%d\t%s\t%d",c2.code,c2.cname,c2.fees);
	return 0;
}
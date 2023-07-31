// quadratic equ
#include<math.h>
#include<stdio.h>
main()
{
	int a,b,c,d;
	float ip,rp,x1,x2;
	printf("enter a,b,c\n");
scanf("%d%d%d",&a,&b,&c);
d=sqrt(b*b-4*a*c);
if(d==0)
{
printf("real and equl\n");
x1=(float)-b/2*a;
x2=x1;
printf("%d%d",x1,x2);
}
if(d>0)
{
	printf("real and un equal\n");
	x1=(float)(-b+sqrt(d))/2*a;
	x2=(float)(-b-sqrt(d))/2*a;
	printf("%f%f",x1,x2);
}
if(d<0)
{
	printf("complex\n");
	rp=(float)-b/(2*a);
	ip=(float)sqrt(d)/(2*a);
	printf("%f%f",rp,ip);
	
}
}

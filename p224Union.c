#include<stdio.h>
union student
{
	int no,eng,hindi;	
};
main()
{
	union  student u1,u2;
	u1.no=5;
	u1.eng=10;
	u1.hindi=20;
	
	u2.no=5;
	u2.eng=34;
	u2.hindi=40;
	
	printf("\nu1's no=%d,eng=%d,hindi=%d",u1.no,u1.eng,u1.hindi);
	printf("\nu2's no=%d,eng=%d,hindi=%d",u2.no,u2.eng,u2.hindi);
}

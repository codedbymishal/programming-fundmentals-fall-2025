#include<stdio.h>
#include<math.h>
struct point
{
	int x;
	int y;
	int z;
};
struct midpoint
{
	float mx,my,mz;
};
float calculatedistance(struct point p1, struct point p2)
{
	float dis;
    dis= sqrt(((p2.x-p1.x)*(p2.x-p1.x)) + ((p2.y-p1.y)*(p2.y-p1.y))+ ((p2.z-p1.z)*(p2.z-p1.z)));
    return dis;
}
struct midpoint calculatemidpoint(struct point p1, struct point p2)
{
	struct midpoint mp;
	mp.mx= (p1.x+p2.x)/2;
	mp.my= (p1.y+p2.y)/2;
	mp.mz= (p1.z+p2.z)/2;
	return mp;
}
int main()
{
	struct point p1,p2;
	struct midpoint mp;
	float dis;
	printf("Enter x,y,z coordinates for point 1:\n");
	scanf("%d %d %d", &p1.x, &p1.y, &p1.z);
	printf("Enter x,y,z coordinates for point 2:\n");
	scanf("%d %d %d", &p2.x, &p2.y, &p2.z);
	dis=calculatedistance(p1,p2);
	mp=calculatemidpoint(p1,p2);
	printf("Distance is %0.3f\n", dis);
	printf("Midpoint is mx: %0.1f  my:%0.1f  mz:%0.1f",mp.mx,mp.my,mp.mz);
	return 0;
}

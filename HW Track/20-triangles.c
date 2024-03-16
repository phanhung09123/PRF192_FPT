#include <stdio.h>
int main() {
    /* INPUT HERE: Input three sides or triangle */
    /*  TEST DATA:
        Input a: 3
        Input b: 4
        Input c: 5
    */
int type,a,b,c;
printf("Input 3 sides of triangle respectively:\n ");
scanf("%d %d %d",&a,&b,&c);
if ((a+b)<c || (a+c)<b || (b+c)<a)
{
	printf("With those sides, it aint a triangle!!");
   }   
else
{
   if (a == b && b == c)
   {
   	printf("The triangle is equilateral triangle!");
   }
	else if (((a * a) + (b * b) == (c * c)) || ((a * a) + (c * c) == (b * b)) || ((c * c) + (b * b) == (a * a)))
	{
		printf("The triangle is a right triangle!");
	}
	else if (a==b || b==c || c==a)
	{
		printf("The triangle is a isosceles triangle!");
	}
	else
	{
		printf("The triangle is a simple one");
	}
}
    /* OUTPUT HERE: Print out type of triangle
        Equilateral triangle: a = b = c
        Right triangle: (a * a) + (b * b) = (c * c); 
            or (a * a) + (c * c) = (b * b);
            or (c * c) + (b * b) = (a * a);
        Isosceles triangle: a = b; or b = c; or c = a
        Simple triangle: not above
         */
    /*  EXPECTED OUTPUT:
        Right triangle
    */
    getchar();
    return 0;
}

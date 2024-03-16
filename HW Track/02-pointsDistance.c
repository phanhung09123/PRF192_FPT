#include <stdio.h>
#include <math.h>
int main() {
    /* INPUT HERE: Input two points coordinate */
    /*  TEST DATA:
        Input x1: 25
        Input y1: 15
        Input x2: 35
        Input y2: 10
    */
    
//input
	int x1,y1,x2,y2;
	double dis;
	printf("Input X1: ");
	scanf("%d",&x1);
	printf("Input X2: ");
	scanf("%d",&x2);
	printf("Input Y1: ");
	scanf("%d",&y1);
	printf("Input Y2: ");
	scanf("%d",&y2);

//Calculate
	dis = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

//output
	
	printf("Distance between two points: %.4lf\n",dis);




    /* OUTPUT HERE: Print out the distance between the points */
    /*  EXPECTED OUTPUT:
        Distance between the points: 11.1803
    */








    getchar();
    return 0;
}

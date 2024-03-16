#include <stdio.h>

int main() {
    /* INPUT HERE: Input employee's ID, 
        total worked hours of a month 
        and the amount he received per hour */
    /*  TEST DATA:
        Input the Employees ID: 342
        Input the working hrs: 8
        Salary amount/hr: 15000
    */
// Input
    int id,hrs;
    long salary,salaryperhr;
	printf("Input emplyee's ID: '");
	scanf("%d",&id);
	printf("Total worked hours of a month: ");
	scanf("%d",&hrs);
	printf("Salary per hour: ");
	scanf("%ld",&salaryperhr);
	
// Output
	salary=salaryperhr*hrs;
	printf("Employee's ID: %d\n",id);
	printf("Employee's Salary: %ld\n",salary);

    /* OUTPUT HERE: Print out the employee's ID 
        and salary (with two decimal places) of a particular month */
    /*  EXPECTED OUTPUT:
        Employees ID = 342
        Salary = U$ 120000.00
    */

    getchar();
    return 0;
}

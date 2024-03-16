#include <stdio.h>

int main() {
    /* INPUT HERE: Input year of birth and current year */
    /*  TEST DATA:
        Input year of birth: 2000
        Input current year: 2024
    */
int birth,year,age;
printf("Input year of birth:\n ");
scanf("%d",&birth);
printf("Current year?\n");
scanf("%d",&year);

age= year-birth;

printf("The age is %d\n", age);


   



    /* OUTPUT HERE: Print out the expression value (based on operator) */
    /*  EXPECTED OUTPUT:
        Your age is: 24
    */








    getchar();
    return 0;
}

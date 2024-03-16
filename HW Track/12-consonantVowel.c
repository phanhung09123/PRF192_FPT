#include <stdio.h>

int main() {
    /* INPUT HERE: Input a digit */
    /*  TEST DATA:
        Input a digit: 4
    */
int a;
printf("Input ONE digit: ");
scanf("%d",&a);

switch (a)
{
	case 0:
		printf("Zero");
		break;
	case 1:
		printf("One");
		break;
	case 2:
		printf("Two");
		break;
	case 3:
		printf("Three");
		break;
	case 4:
		printf("Four");
		break;
	case 5:
		printf("Five");
		break;
	case 6:
		printf("Six");
		break;
	case 7:
		printf("Seven");
		break;
	case 8:
		printf("Eight");
		break;
	case 9:
		printf("Nine");
		break;
	default:
        printf("Invalid input");
}




    /* OUTPUT HERE: Print out digit in the word format. */
    /*  EXPECTED OUTPUT:
        Four
    */

	getchar();
    return 0;
}

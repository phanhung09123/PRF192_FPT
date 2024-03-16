#include <stdio.h>

int main() {
    /* INPUT HERE: Input number of seconds */
    /*  TEST DATA:
        Input seconds: 25300
    */
	int sec,hr,mnt,inp;
	
printf("Input second: ");
scanf("%d",&inp);

hr = inp/3600;
mnt = (inp%3600)/60;
sec = inp - 3600*hr - 60*mnt;

printf("there are H:M:S - %d:%d:%d",hr,mnt,sec);

    /* OUTPUT HERE: Print out the hours, minutes and seconds */
    /*  EXPECTED OUTPUT:
        There are:
        H:M:S - 7:1:40
    */








    getchar();
    return 0;
}

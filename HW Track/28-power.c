#include <stdio.h>
#include <math.h>
int main() {
    /* INPUT HERE: Input two integer number n and m */
    /*  TEST DATA:
        Input n: 5
        Input m: 2
    */


int n,m,ans;
printf("Input an interger for n: \n");
scanf("%d",&n);
printf("Input an interger for n: \n");
scanf("%d",&m);

ans=pow (n,m);
printf("%d",ans);


    /* OUTPUT HERE: Print out n power m */
    /*  EXPECTED OUTPUT:
        25
    */








    getchar();
    return 0;
}

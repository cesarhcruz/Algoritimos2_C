#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define pi 3,14

#include <stdio.h>
 
int main(){
	
	

int func_f(int n) {
    int a, b;
    if (n == 0) {
        return(1);
    }
    a = n - 1;
    b = func_f(a);
    return(n*b);
}
printf ("%d", func_f(4));
}


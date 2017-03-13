/* 
* We need to print the no of zero in a factorial of a number 
*
* The input starts with no of iterations we would be providing our input 
*
* Output gives the no of zeros in factorial of a particular no entered in an iteration
*/

#include<stdio.h>
#include<math.h>


int main(int argc, char const *argv[]) {
 int hmi; //howManyIterations
 int zig; //zeroesIGot
 int n; // Number whose zeroes i need to find
 int p ;// power
 int i;

 scanf("%d", &hmi);

 for (i = 0; i < hmi; ++i) {
    zig = 0; //Initially no zeroes
    p = 1;
    scanf("%d", &n); //Number for which i want to find the zeroes
    while( pow(5,p) <= n) {
        zig += n/pow(5.0,p);
        p += 1;
    }
    printf("%d\n", zig);
  }

  return 0;
}
/*
Input 1: there will be 'n' iterations
Input 2: in each iteration there will be 'some' number of cupcakes
Output: we need to print max no of cupcakes chef can eat after equally dividing them into boxes

*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int noOfTestcases = 0;
    int cupcakes = 0;
    int i ;
    scanf("%d",&noOfTestcases);

    for (i = 0; i < noOfTestcases; ++i)
    {
        scanf("%d",&cupcakes);
        printf("%d\n",cupcakes/2+1);
    }
    return 0;
}

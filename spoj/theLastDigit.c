// #TLE SOLUTION
// # testCases = input();
// # outputs = [1] * int(testCases);
// # counter = 0;
// #
// # while(counter <  testCases) :
// #     a,b = raw_input().split(' ');
// #
// #     ans = str(int(a) ** int(b));
// #     fans = len(ans);
// #     outputs[counter] = ans[fans-1];
// #     counter = counter + 1;
// #
// # counter = 0
// # while(counter < testCases):
// #     print(outputs[counter]);
// #     counter = counter+1;


#include<stdio.h>

int main() {
  // int ans = lastdig();
  // printf("%d", ans);
  int testCases;
  scanf("%d",&testCases);
  while(testCases--)
  {
      long long n;
      scanf("%lld",&n);
      
  }
  return 0;
}

void lastdig() {
 scanf("%lld%lld",&n1,&n2);
 long long d=1;
 while(n2){
      if(n2%2 !=0) //n2 odd
             {
             d=(d*n1);
             }
     n2  = n2/2;
     n1=(n1*n1);
  }
 return d;

 }

#include<stdio>

int main() {

int testcases,a,b,i;

scanf("%d", &testCases);

for(i= 0; i<testCases: i++) {
  scanf("%d %d",&a, &b);

  if(a%2 == 0 && b%2 == 0 && (a-b == 0 || a-b ==2)) {
    printf("%d", (a+b));
  }
  else if((a+1)%2 == 0 && (b+1)%2 ==0 && (a-b == 0 || a-b == 2)) {
    printf("%d", (a+b-1));
  }
  else {
    printf("No Number\n");
  }
}

return 0;

}

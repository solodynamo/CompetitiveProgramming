#include<stdio.h>
#include<algorithm>

using namespace std;

int main() {
int tc;

scanf("%d\n", &tc);
while(tc--) {
        int it;
    scanf("%d",&it);
    int men[it], women[it];
for(int i = 0 ; i <it ; i++) {
    scanf("%d", &men[i]);
}
for(int j = 0 ; j <it ; j++) {
    scanf("%d", &women[j]);
}
sort(men, men+it);
sort(women, women+it);
int sum = 0;
for(int k = 0 ; k < it; k++) {
    sum+= men[k]*women[k];
}
printf("%d\n", sum);
}
return 0;
}

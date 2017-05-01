#include<stdio.h>
#include<string.h>



int main(){
int tc;
int counter = 1 ;
int no;
std::string str;
scanf("%d", &tc);

while(counter <= tc) {

    scanf("%d", &no);
    scanf("%s", &str);
    printf("%d %s", counter, str.erase(no,1));
}

return 0 ;
}

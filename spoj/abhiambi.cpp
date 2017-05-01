#include <bits/stdc++.h>
using namespace std;
char s[1001];
int a,b;
std::string joint;

void calc(string s) {

    int n = s.length();
    printf("%d", n);
    for(int i = 0 ; i < n ; i++) {
            char ch = s[i];
    int index  = joint.find(ch);
     printf("%d", index);
    }
    printf("%s", s);

}

int main() {
   scanf("%d", &a);
	scanf("%s", joint);


	scanf("%d", &b);


	for(int i = 0; i < b; ++i) {
        scanf("%s", s);
        calc(s);}
}

#include <bits/stdc++.h>
using namespace std;
char s[100123];

void test_case() {
	scanf("%s", s);
	int n = strlen(s);
	int start = n, end = -1;
	for(int i = 0; i < floor(n/2); ++i) {
		if(i%2 == 0) {
			printf("%c", s[i]);
		}

}
}

int main() {
	int T;
	scanf("%d", &T);
	for(int i = 1; i <= T; ++i) {
		test_case();
		printf("\n");

	}
}

#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;

std::vector<int> v;
int n, x;
unsigned long long ans;
 double ak, ka;
long long findFibo(int n , int x) {
    v.push_back(0);
    v.push_back(1);
    ans = ans + v[1] * pow(x,1);
    cout<<ans<<"\n";
    for(int i = 2; i<=n; i++) {
        int k = v[i-1] + v[i-2];
        ak = pow(x,i);
        ka = ka + k * ak;
        cout<<k<<'\t'<<ak<<'\n';

        v.push_back(k);
    }

    return ka ;
}
int main() {
int tc;
scanf("%d", &tc);
while(tc--) {

    scanf("%d %d", &n, &x);
    ans = (long long)findFibo(n, x);

}
return 0;
}

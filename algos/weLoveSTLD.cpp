// PS: Linus likes to dcoe but he has to sit in STLD class. His teacher wont give attendence
//if he doesnt solve the logical expressions also his attendence is short!!
//A-and B-or C-xor
//expectation : magic('1A1C1B0A0')  => 0

#include<bits/stdc++.h>
using namespace std;

char magic(string stldexp){int n=stldexp.size();for(int i=0;i<n;i+=2){if(stldexp[i+1]=='A'){if(stldexp[i+2]=='1'){stldexp[i+2]='1';}else stldexp[i+2]='0';}if(stldexp[i+1]=='B'){if(stldexp[i+2]=='1'){stldexp[i+2]='1';}else{stldexp[i+2]=stldexp[i];} if(stldexp[i+1]=='C'){if(stldexp[i+2]=='1' && stldexp[i]=='1'){stldexp[i+2]='0';}else if(stldexp[i+2]=='1'){stldexp[i+2]='1';} else if(stldexp[i+2]=='0'&& stldexp[i]=='1'){stldexp[i+2]=1;}}}}return stldexp[n-1]-'0';}

int main(){cout<<magic("1A1C1B0A0");return 0;}
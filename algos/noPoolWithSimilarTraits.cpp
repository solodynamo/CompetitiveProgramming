// PS: Two strings need to take uber pool . However the second one who is a girl doesn't want 
//to sit with a boy with similar characteristics like her.

//expectation : magic('aghbs', 'ioahs')  => iogb

#include<bits/stdc++.h>
#include <unordered_map>
using namespace std;

string magic(string pooler1,string pooler2) {
	string uberpool = "";
	unordered_map<char,int> kalanick;
	for(int j=0;j<pooler2.size();j++){kalanick[pooler2[j]] = 1;}
	for(int i = 0; i<pooler1.size();i++){if(kalanick.find(pooler1[i]) == kalanick.end()){uberpool+=pooler1[i];}else kalanick[pooler1[i]]=2;}
	for(int k =0; k<pooler2.size();k++){if(kalanick[pooler2[k]]!=2){uberpool+=pooler2[k];}} return uberpool;
}
int main(){string girlpooler="ioahs"; string boypooler="aghbs"; string letspool=magic(girlpooler,boypooler);cout<<letspool;return 0;}
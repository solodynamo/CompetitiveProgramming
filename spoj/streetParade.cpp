#include<stdio>
#include<iostream>

using namespace std;

int main() {

int arr [1000];
int testcases;
int ip;
int counter = 0;
cin>>testCases;

while(testCases>0) {
  cin>>ip;
  if(ip == 0) {
    break;
  }
  arr[counter] = ip;
  counter++;
  testCases--;
}





}

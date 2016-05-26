#include<iostream>
#include<math.h>
using namespace std;

#define ll long long

int main(){
int n;
cin>>n;
while(n--){
    ll a=0;
    int ctr=0;
    cin>>a;
    int i=1;
    while (pow(5,i)<=a){
        ctr+=a/pow(5,i);
        i++;
    }
    cout<<ctr<<'\n';
}
return 0;
}

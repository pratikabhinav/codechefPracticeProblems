#include<iostream>

using namespace std;

int main(){
int t;
cin>>t;
while (t--){
int n,c, i, sum=0;
cin>>n>>c;
int *candy= new int[n];
for (i=0;i<n;i++){
    cin>>candy[i];
    sum+=candy[i];
}
if (sum<=c)
    cout<<"Yes"<<'\n';
else
    cout<<"No"<<'\n';
}
return 0;
}

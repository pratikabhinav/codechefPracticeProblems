#include<iostream>
#include<algorithm>
using namespace std;

int main(){
int t,i,j;
cin>>t;
while(t--){
int n,m;
cin>>n>>m;
int *p=new int[n];
for (i=0;i<m;i++){
    cin>>p[i];
}
//stable_sort(p,p+m);
int ctr=m;
int x=1;
for (i=0;i<n;i++){
    int flag=0;
    for (j=0;j<m;j++){
        if (p[j]==x){
            x++;
            flag=1;
            break;
            }
        }
        if (flag==0){
            p[ctr]=x;
            ctr++;
            x++;
        }
    }
/*for (i=0;i<n;i++){
    cout<<p[i]<<' ';
}*/
for (i=m;i<n;i+=2){
    cout<<p[i]<<' ';
    }
cout<<'\n';
for (i=m+1;i<n;i+=2){
    cout<<p[i]<<' ';
    }
cout<<'\n';
}
return 0;
}

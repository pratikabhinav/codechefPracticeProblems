#include<iostream>
#include<algorithm>
using namespace std;

int main(){
int n, m, i,j;
cin>>n;
while(n--){
    int a=0;
    cin>>m;
    int *p= new int[m];
    for (i=0;i<m;i++){
        cin>>p[i];
    }
    int *q=new int[m];
    for (i=0;i<m;i++){
        cin>>q[i];
    }
    stable_sort(p,p+m);
    stable_sort(q,q+m);
    for (i=0, j=0;i<m && j<m;i++){
        while(j<m && p[i]>q[j])
            j++;
        if (p[i]<=q[j] && j<m){
            a++;
            j++;
            }
        }
    cout<<a<<endl;
}
return 0;
}

#include<iostream>
#include<math.h>
#include<string.h>
#include<algorithm>

using namespace std;

int main(){
	int t;
	cin>>t;
	while (t--){
		string a;
		cin>>a;
		cout<<a<<endl;
		sort(a.begin(),a.end());
		cout<<a<<endl;
		int ctr=1;
		int count=1;
		char ch=a[0];
		for (int i=1;i<a.length();i++){
			if (a[i]==ch){
				count++;
				if (count==3){
					ctr++;
					count=1;
				}
			}
			else if (a[i]!=ch){
				ch=a[i];
				ctr++;
				count=1;
			}
		}
	cout<<ctr<<endl;
	}
	return 0;
}
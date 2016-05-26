    #include<iostream>
    #include<algorithm>
    using namespace std;

    int main(){
    int n;
    cin>>n;
    while(n--){
        int b, i, temp=0, x=0, num=0;
        cin>>b;
        int *p=new int[b];
        for (i=0;i<b;i++){
            cin>>p[i];
        }
        for (i=0;i<b;i++){
            temp=p[i];
            int ctr=0;
            for (int j=0;j<b;j++){
                if (temp==p[j]){
                    ctr++;
                }
                if (ctr>x){
                    num=temp;
                    x=ctr;
                }
                else if (ctr==x && temp<num){
                    num=temp;
                    x=ctr;
                }
            }
        }
        cout<<num<<' '<<x<<'\n';

    }
    return 0;
    }

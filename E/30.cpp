#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    int t=n;
    int sum=0;
    int d = ceil(log10(n));
    int l;
    while (n!=0)
    {
        l=n%10;
        sum = sum + pow(l,d);
        n=n/10;
    }
    if(t==sum) cout<<"Armstrong"<<endl;
    else cout<<"Not Armstrong"<<endl;
    
}
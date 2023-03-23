#include<bits/stdc++.h>
using namespace std;

string myFunction(string str)
{
    int len = str.length();
    for(int i=0; i<len; i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u') {
            str[i]='\0';
        }
    }
    return str;
}
int main(){
    string x;
    getline(cin, x);
    cout<<myFunction(x);
}
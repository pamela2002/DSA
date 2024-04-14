#include<iostream>
using namespace std;
int main()
{
    int x = 10;
    cout<<"Hey "<<x<<endl;
    string str;
    getline(cin,str);
    cout<<str;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        char ch = 'A';
        for(int j=0;j<=i;j++) {
            cout<<ch;
            ch=ch+1;
        }
        cout<<endl;
    }
    return 0;
}
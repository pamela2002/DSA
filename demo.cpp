#include <bits/stdc++.h>
using namespace std;


void func(int arr[]){
    arr[2] += 10;
    cout << arr[2];
}
int main()
{
    string s = "Hey Pamela";
    cout << s;
    int arr[5];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    func(arr);
}

// Time complexity done
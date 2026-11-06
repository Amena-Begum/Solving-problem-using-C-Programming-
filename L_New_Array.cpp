// #include <iostream>
// #include <vector>

// using namespace std;

// int main() {
//     vector<int> v;
//     int n;
//     cin >> n;

//     for (int i = 0; i < n; i++) {
//         int a, b;
//         cin >> a >> b;
//         v.insert(v.begin(), b); 
//         v.insert(v.begin() , a);

//     for (int val : v) {
//         cout << val << " ";
//     }
//     cout << endl;

//     return 0;
// }

// #include <bits/stdc++.h>

// using namespace std;

// void insertAndPrint(vector<int>& v, int a, int b) {
//     v.insert(v.begin(), a);
//     v.insert(v.begin() + 1, b);
// }

// int main() {
//     vector<int> v;
//     int n;
//     cin >> n;

//     for (int i = 0; i < n; i++) {
//         int a, b;
//         cin >> a >> b;
//         insertAndPrint(v, a, b);
//     }

//     for (int val : v) {
//         cout << val << " ";
//     }
//     cout << endl;

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
void print(int a[],int b[],int n){
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
      }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
      }
}
int main(){ 
    int n;
    cin>>n;
    int a[n], b[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  for(int i=0;i<n;i++){
    cin>>b[i];
  }
  print(a,b,n);
    return 0;
} 
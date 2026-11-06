// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//    char a[n];
//     for(int i=0; i<n;i++){
//         cin>>a[i];
//     }
//     sort(a,a+n);
//     for(int i=0; i<n;i++){
//         cout<<a[i];
//     }
//     cout<<endl; 
//     return 0;
// }
#include<bits/stdc++.h>
#include <vector> // Include vector header
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<char> a(n); // Use std::vector<char>
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for(int i = 0; i < n; i++){
        cout << a[i];
    }
    cout << endl;
    return 0;
}
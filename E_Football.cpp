#include <bits/stdc++.h>
using namespace std;
int main() {
    string players;
    cin >> players;
    int count0 = 0; 
    int count1 = 0; 
    for (int i = 0; i < players.length(); i++) {
    
        if (players[i] == players[i-1]) {
            count0++;
            count1 = 0;
            if (count0 >= 7) {
                cout << "YES" << endl;
                return 0;
            }
        } else { 
            count1++;
            count0 = 0;
            if (count1 >= 7) {
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}
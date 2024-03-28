#include <iostream>
using namespace std;

int main() {
    int n, ans = 0;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        string input;
        cin >> input;
        ans += (input.find('+') != string::npos) ? 1 : 0;
    }
    
    cout << ans;
    
    return 0;
}

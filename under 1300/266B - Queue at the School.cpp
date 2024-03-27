#include <iostream>
#include <string>
using namespace std;
 
int main() {
    int length, time;
    string st;
 
    cin >> length >> time;
    cin.ignore(); 
    getline(cin, st);
 
    for (int i = 0; i < time; ++i) {
        size_t pos = st.find("BG");
        while (pos != string::npos) {
            st[pos] = 'G';
            st[pos + 1] = 'B';
            pos = st.find("BG", pos + 2); 
        }
    }
 
    cout << st << endl;
 
    return 0;
}

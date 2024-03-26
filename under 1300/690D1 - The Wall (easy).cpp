#include <iostream>
using namespace std;
int contiguousB(const string& str) {
    int contiguousGroups = 0;
    bool inGroup = false;
 
    for (char c : str) {
        if (c == 'B' && !inGroup) {
            contiguousGroups++;
            inGroup = true;
        } else if (c == '.' && inGroup) {
            inGroup = false;
        }
    }
 
    return contiguousGroups;
}
int main() {
// 	cout<<"GfG!";
    // vector<string> arr(n);
    int n,c;
    cin>>n>>c;
    string last;
    for(int i=0;i<n;i++){
        cin>>last;
        // if(i==n-1) last=temp;
    }
    int streak=0,ans=0;
    // for(int i=0;i<c;i++){
    //     if(last[i]=='B') streak=1;
    //     else{
    //         if(streak==1) ans+=1;
    //         streak=0;
    //     }
    // }
    // cout<<ans;
    cout<<contiguousB(last);
	return 0;
}

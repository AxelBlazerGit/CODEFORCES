// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt","r",stdin);
    //     freopen("output.txt","w",stdout);
    // #endif
    int n;
    cin>>n;
    int arr[3]={0},a,b,c;
    for(int i=0;i<n;i++){
        
        cin>>a>>b>>c;
        arr[0]+=a;
        arr[1]+=b;
        arr[2]+=c;
    }
    if(arr[0]==0 and arr[1]==0 and arr[2]==0) cout<<"YES";
    else cout<<"NO";
}

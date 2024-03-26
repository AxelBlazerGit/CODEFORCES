#include <iostream>
using namespace std;

int main() {
	int arr[5][5];
	pair<int,int> idx;
	for(int i=0;i<5;i++){
	    for(int j=0;j<5;j++){
	        cin>>arr[i][j];
	        if(arr[i][j]==1) idx=make_pair(i, j);
	    }
	    
	}
	cout<<abs(idx.first-2)+abs(idx.second-2);
	return 0;
}

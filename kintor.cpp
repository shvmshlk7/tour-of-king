#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while (t--){
        int n,s;
        cin>>n>>s;
        
        int temp = n*5;
        cout<<temp<<endl;
        
        int ans = s*7;
        cout<<ans<<endl;
        
        int sum = temp + ans;
        cout<<sum<<endl;
    }
	// your code goes here
	return 0;
}

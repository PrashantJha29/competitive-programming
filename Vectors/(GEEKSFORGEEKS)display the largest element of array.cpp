#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    int arr[n];
	    for(int i=0; i<n; i++)
	    {
	        cin>>arr[i];
	        
	    }
	    int count=0;
	    for(int i=0; i<n; i++)
	    {
	        if (count<arr[i])
	        {
	            count = arr[i];
	            
	        }
	        
	    }
	    cout<<count<<endl;
        
	}
	return 0;
}
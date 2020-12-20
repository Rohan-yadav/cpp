#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int n;
	cout<<"enter value of n";  //n is number of array element
	cin>>n;
	vector<int> arr(n,0);

	int q;
	cout<<"enter value of q"; //q is number of query
	cin>>q;
	while(q--){
		int l,r;
		cout<<"enter value of l,r"; //l is left query number, r is right query number
		cin>>l>>r;
		arr[l]++; 
		if(r+1<n){
			arr[r+1]--;
		}
	}

	for(int i=1;i<n;i++){     //loop for accumlation
		arr[i]+=arr[i-1];
	}

	for(int i=0;i<n;i++){     //loop for printing array elements
			cout<<arr[i]<<" ";
		}

	return 0;
}

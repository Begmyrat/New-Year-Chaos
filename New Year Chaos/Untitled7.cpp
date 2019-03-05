#include <iostream>

using namespace std;

int t,n,q;
int a[200000],b[200000];

int main(){
	
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n;
		q=0;
		for(int j=0;j<n;j++){		
			cin>>a[j];		
			if(a[j]>j && q!=-1){			
				q+=(a[j]-j-1);
				
				if(a[j]-j-1>2){				
					q=-1;
				}
			}
		}				
		b[i]=q;	
	}
	
	for(int i=0;i<t;i++){	
		if(b[i]!=-1)
			cout<<b[i]<<endl;
		else
			cout<<"Too chaotic"<<endl;
		
	}
	
	system("PAUSE");
	return 0;
}

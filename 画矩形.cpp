#include<iostream>
using namespace std; 
int main()
{
	  int n,m,t,i,j;
	  char c;
	  cin>>n>>m>>c>>t;
	  for(i=0;i<n;i++)
	  {
	      for(j=0;j<m;j++)
		  {
	          if(i==0||i==n-1||j==0||j==m-1)
	              cout<<c;
	          else
	              if(t) cout<<c;
	              else cout<<" ";
	      }
	      cout<<endl;
	  }
	  return 0;
}

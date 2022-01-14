#include <queue>
#include <vector>
#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
vector<int> adj[1000];
vector<int> dist(1000,-1);
queue<int> Q;

int main(){
	int n,m;
	 cin>>n>>m;
	
	int a,b,x,y; 
	for(int i=0;i<m;i++){
		cin>>a>>b;
		adj[a].push_back(b);
	} 
	
	cin>>x>>y;
	
	Q.push(x);
	dist[x]=0;
	
	 while(!Q.empty()){
	 	int u=Q.front();
	 	Q.pop();
	 	
	 	  for(int i=0;i<adj[u].size();i++){
	 	  	 int v=adj[u][i];
	 	  	  if(dist[v]==-1){
	 	  	    Q.push(v);
				dist[v]=1+dist[u];   	
			  }
		   }
	 	
	 }
	
	cout<<dist[y]<<endl;
	
}

#include <queue>
#include <vector>
#include <iostream>
using namespace std;
vector<int> adj[1000];
vector<bool> visited(1000,false);
queue<int> Q;

int main(){
   int n,m;
    cin>>n>>m;
    
   int a,b,x=0;
    for(int i=0;i<m;i++){
    	cin>>a>>b;
    	adj[a].push_back(b);
	} 

    Q.push(x);
	visited[x]=true;
	
	while(!Q.empty()){
	int u=Q.front();
	Q.pop(); 
	
	 for(int i=0;i<adj[u].size();i++){
	 	int v=adj[u][i];
	 	if(!visited[v]){
	 		Q.push(v);
	 		cout<<v<<" ";
	 		visited[v]=true;
		 }
	 }  	
   }
}

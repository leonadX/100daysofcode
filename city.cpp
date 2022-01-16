#include <cmath>
#include <queue>
#include <vector>
#include <iostream>
#include <algorithm>
#define INF 100000
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int n,a,b,c,d,ans=0;
vector<int> adj[100000];
vector<int> dist(100000,INF);
int A[100000],B[100000];

// this function creates an adjacency list for the graph
void create(){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			a=A[i],b=B[i],c=A[j],d=B[j];
			
			  if(abs(a-c)==1 && b==d) adj[i].push_back(j);
			  else if(a==c && abs(b-d)==1) adj[i].push_back(j);
		}
	}
}

// To set all distances to INF
void initialize_dist(int n){
	for(int i=0;i<n;i++) dist[i]=INF;
}

// Finds the shortest part from a vertice 's' to other vertices using Breadth First Search
void bfs(int s){
	queue<int> Q;
	dist[s]=0;
	Q.push(s);
	
	 while(!Q.empty()){
	 	int u=Q.front();
	 	Q.pop();
	 	
	 	   for(int i=0;i<adj[u].size();i++){
	 	   	  int v=adj[u][i];
	 	   	   if(dist[v]>1+dist[u]){
	 	   	   	  Q.push(v);
	 	   	   	  dist[v]=1+dist[u];
	 	   	   }
	 	   }
	 }
	 
}

int DistanceSum(int N,int X[],int Y[]){
	 create();
	 for(int i=0;i<N;i++){
	 	 bfs(i);              // perform a bfs from i
	 	for(int j=0;j<N;j++){
	 		if(j>i){
	 		   ans+=dist[j]%1000000000;
	    	}
	 	}
	  	  initialize_dist(N); // set all values of dist[] to INF
	 }
  return ans;	 
}

int main(){
	 cin>>n;
	
	 for(int i=0;i<n;i++){
	 	cin>>A[i]>>B[i];
	 }
	
	cout<<DistanceSum(n,A,B)<<endl; 
	 
	return 0;
}

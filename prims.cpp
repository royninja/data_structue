#include<iostream>
#include<climits>
using namespace std;

int findMinVertex(int* weight, bool* visited, int n){
	int minVertex=-1;
	for(int i = 0; i < n ; i++)
	{
		if( !visited[i] && (minVertex == -1 || weight[i] < weight[minVertex])){
			minVertex = i;
		}	
	}
	return minVertex;
}

void prims(int** edges, int n){
	
	int* parent = new int[n];
	int* weight = new int[n];
	bool* visited = new bool[n];
	
	for(int i = 0; i < n; i++){
		visited[i] = false;
		weight[i] = INT_MAX;
	}
	parent[0] = -1;
	weight[0] = 0;
	
	for(int i = 0; i < n; i++)
	{
		//find min vertex
		int minVertex = findMinVertex(weight,visited, n);
		visited[minVertex] = true;
		//explore unvisited neighbours
		for(int j = 0; j < n; j++)
		{
			if(edges[minVertex][j] != 0 && !visited[j]){
				if(edges[minVertex][j] < weight[j]){
					weight[j] = edges[minVertex][j];
					parent[j] = minVertex;
				}
		
			}
		}
	}
	
	for(int i=1; i < n; i++){
		if(parent[i] < i){
			cout<<parent[i]<< " " << i << " " << weight[i] << endl;
		}else{
			cout<< i << " " << parent[i] << " " << weight[i] << endl;
		}
	}
		
}
int main()
{
	int n;
	int e;
	cin >> n >> e;
	int** edges = new int*[n];
	for(int i = 0; i < n; i++){
		edges[i] = new int[n];
		for(int j=0; j<n; j++){
			edges[i][j]=0;
		}
	}
	
	for(int i = 0; i < e; i++)
	{
		int f,s,weight;
		cin >> f >> s >> weight;
		edges[f][s] = weight;
		edges[s][f] = weight;
	}
	cout << endl;
	prims(edges,n);
	
	for(int i = 0; i < n; i++){
		delete [] edges[i];
	}
	delete [] edges;
	return 0;
}

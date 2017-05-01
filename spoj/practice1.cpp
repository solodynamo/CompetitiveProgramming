#include<stdio.h>
#include<queue>
#include<vector>
#define MAX 1001
using namespace std;

struct Node {
vector <int> adj;
};

Node node[MAX];
bool is_visited[MAX];

inline void Bfs(int start) {

queue <int> queue_node;

queue_node.push(start);

while(!queue_node.empty()) {
    int next_index = queue_node.front();
    queue_node.pop();
    is_visited[next_index] = true;
    printf("Just traversed: %d", next_index);
     for(int i = 0 ; i<node[next_index].adj.size(); i++) {
        if(!is_visited[node[next_index].adj[i]]) {
            queue_node.push(node[next_index].adj[i]);
            is_visited[node[next_index].adj[i]] = true;
        }
     }
}
}

int main() {

node[0].adj.push_back(2);
node[0].adj.push_back(3);
node[2].adj.push_back(4);
node[3].adj.push_back(5);

Bfs(0);

return 0;
}

#include<stdio.h>
#include<vector>
#include<stack>
using namespace std;
#define MAX 1001

struct Node {
    vector <int> adj;
};

Node graph_node[MAX];
bool is_visited[MAX];

inline void Dfs(int start_node) {
    stack <int> stack_node;
    stack_node.push(start_node);

    while(!stack_node.empty()) {
        int top_index = stack_node.top();
        stack_node.pop();
        is_visited[top_index] = true;
        printf("Just Visited: %d\n", top_index);
        for(int i = 0 ; i < graph_node[top_index].adj.size(); i++) {
            if(!is_visited[graph_node[top_index].adj[i]]) {
                stack_node.push(graph_node[top_index].adj[i]);
                is_visited[graph_node[top_index].adj[i]] = true;
            }
        }
    }
}

int main() {
    graph_node[0].adj.push_back(3);
    graph_node[0].adj.push_back(4);
    graph_node[4].adj.push_back(5);
    graph_node[3].adj.push_back(2);
    graph_node[2].adj.push_back(5);
    //your next traversing node would depend on what's on top of stack i.e. what have been pushed in the adjacent vector list wrt current node.
    Dfs(0);
    return 0 ;
}

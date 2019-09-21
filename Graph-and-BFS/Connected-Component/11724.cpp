#include <iostream>
#include <vector>

using namespace std;

int N, M;
vector<int> e[1001];
bool visited[1001];

void dfs(int n) {
    visited[n] = true;
    
    for (int i=0; i<e[n].size(); i++) {
        int next = e[n][i];
        if (!visited[next]) dfs(next);
    }
}

int main() {
    
    cin >> N >> M;
    int a, b, answer = 0;
    for (int i=0; i<M; i++) {
        cin >> a >> b;
        e[a].push_back(b);
        e[b].push_back(a);
    }
    
    for (int i=1; i<=N; i++) {
        if (!visited[i]) {
            dfs(i);
            answer++;
        }
    }
    cout << answer << "\n";
}


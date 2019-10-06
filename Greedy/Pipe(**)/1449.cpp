#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int N, t, answer=0;
    int pipe[1001] = {0, };
    bool taped[1001] = {0, };
    cin >> N >> t;
    
    for (int i=0; i<N; i++) cin >> pipe[i];
    
    sort(pipe, pipe+N);
    
    for (int i=0; i<N; i++) {
        cout << "taped[" << pipe[i] << "] = " << taped[pipe[i]]<< endl;
        if (!taped[pipe[i]]) {
            cout << "pipe[" << i << "] = " << pipe[i] << endl;
            for (int j=pipe[i]; j<min(pipe[i]+t, 1001); j++) {
                cout << "TAPE " << j << endl;
                taped[j] = true;
                
            }
            answer++;
        }
    }
    
    cout << answer << endl;
}

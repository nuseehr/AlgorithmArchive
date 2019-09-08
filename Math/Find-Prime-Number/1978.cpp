#include <iostream>

using namespace std;

bool isPrime(int num) {
    if (num == 1) return false;
    else if (num == 2) return true;
    
    for (int i=2; i<num; i++) {
        if (num % i == 0) return false;
    }
    
    return true;
}

int main() {
    int N;
    int answer = 0;
    cin >> N;
    
    while (N--) {
        int num;
        cin >> num;
        if (isPrime(num)) answer++;
        
    }
    cout << answer << endl;
}

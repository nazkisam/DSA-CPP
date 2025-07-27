#include<iostream>
using namespace std;

int main() {
    int cnt = 0;
    int ans = 5;
    int position = 0; // We'll simulate a "pointer" moving to the right

    while(cnt < ans) {
        position++;
        cnt++;
    }

    cout << "Final position: " << position << endl;
    cout << "Counter value: " << cnt << endl;

    return 0;
}

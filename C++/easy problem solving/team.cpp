#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int result = 0;

    for (int i = 0; i < n; i++){
        int a, b, c;
        cin >> a >> b >> c;

        int positiveCount = 0;

        if (a == 1) {
            positiveCount++;
        }
        if (b == 1) {
            positiveCount++;
        }
        if (c == 1) {
            positiveCount++;
        }

        if (positiveCount >= 2) {
            result++;
        }
    }

    cout << result;
}
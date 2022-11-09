#include <iostream>
#include <cmath>
using namespace std;

bool can_read(int k, int h, int A[], int n) {
    long long time = 0;
    for (int i = 0; i < n; i++) {
        time += ceil((double)A[i] / k);
    }
    return time <= h;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, h;
        cin >> n >> h;
        int A[n];
        for (int i = 0; i < n; i++) cin >> A[i];
        int low = 1, high = 1e9, mid;
        while (high - low > 1) {
            mid = (low + high) / 2;
            if (can_read(mid, h, A, n)) high = mid;
            else low = mid + 1;
        }
        if (can_read(low, h, A, n))
            cout << low << "\n";
        else
            cout << high << "\n";
    }
    return 0;
}

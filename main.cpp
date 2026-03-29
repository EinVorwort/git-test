#include <iostream>
using namespace std;

void reverseArray(int a[], int left, int right) {
    while (left < right) {
        int t = a[left];
        a[left] = a[right];
        a[right] = t;
        ++left;
        --right;
    }
}

int main() {
    int p, n;
    cin >> p >> n;

    int a[100000];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    if (n > 0) {
        p %= n;
        if (p < 0) p += n;

        reverseArray(a, 0, p - 1);
        reverseArray(a, p, n - 1);
        reverseArray(a, 0, n - 1);
    }

    for (int i = 0; i < n; ++i) {
        if (i) cout << ' ';
        cout << a[i];
    }

    return 0;
}

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;

    vector<int> in(n), out(n), st;
    for (int i = 0; i < n; ++i) cin >> in[i];
    for (int i = 0; i < n; ++i) cin >> out[i];

    int j = 0;              // 指向输出序列当前位置
    int popCount = 0;       // 总出栈次数

    for (int i = 0; i < n; ++i) {
        st.push_back(in[i]);

        while (!st.empty() && j < n && st.back() == out[j]) {
            st.pop_back();
            ++j;
            ++popCount;
        }
    }

    if (j == n) cout << popCount;
    else cout << 0;

    return 0;
}

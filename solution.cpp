#include <iostream>
#include <queue>
#include <stack>

int main() {
    int n;
    std::cin >> n;

    std::queue<int> q;
    std::stack<int> s;

    for (int i = 0; i < n; ++i) {
        int x;
        std::cin >> x;
        q.push(x);
    }

    // 队列 -> 栈
    while (!q.empty()) {
        s.push(q.front());
        q.pop();
    }

    // 栈 -> 输出（即原队列逆序）
    bool first = true;
    while (!s.empty()) {
        if (!first) {
            std::cout << ' ';
        }
        std::cout << s.top();
        s.pop();
        first = false;
    }

    return 0;
}

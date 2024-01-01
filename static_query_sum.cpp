#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    long long n, q;
    std::cin >> n >> q;
    std::vector<long long> vec(n+1);
    vec[0] = 0;
    for (int i = 1; i <= n; ++i) {
        std::cin >> vec[i];
        vec[i] += vec[i-1];
    }

    for (;q;--q) {
        long long left_idx, right_idx;
        std::cin >> left_idx >> right_idx;
        std::cout << vec[right_idx] - vec[left_idx] << '\n';
    }
}


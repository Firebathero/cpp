#include <iostream>

int main() {
    int n, q;
    std::cin >> n >> q;
    int N = 100001;
    int cowtypes[N][3];
    memset(cowtypes, 0, sizeof(cowtypes));

    for (int i = 1; i <= n; ++i) {
        int temp;
        std::cin >> temp;
        cowtypes[i][0] = cowtypes[i-1][0];
        cowtypes[i][1] = cowtypes[i-1][1];
        cowtypes[i][2] = cowtypes[i-1][2];

        switch(temp) {
            case 1:
                cowtypes[i][0]++;
                break;
            case 2:
                cowtypes[i][1]++;
            case 3:
                cowtypes[i][2]++;
        }
    }
    for (int i = 0; i < q; ++i) {
        int a, b;
        std::cin >> a >> b;

        int h = cowtypes[b][0] - cowtypes[a-1][0];
        int g = cowtypes[b][1] - cowtypes[a-1][1];
        int j = cowtypes[b][2] - cowtypes[a-1][2];

        std::cout << h << ' ' << g << ' ' << j << '\n';
    }
}

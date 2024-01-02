#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> hooves(n + 1), paper(n + 1), scissors(n + 1);

    for (int i = 1; i <= n; i++) {

        hooves[i] += hooves[i - 1];
        paper[i] += paper[i - 1];
        scissors[i] += scissors[i - 1];

        char action;
        std::cin >> action;
        if (action == 'H') {
            paper[i]++;
        } else if (action == 'P') {
            scissors[i]++;
        } else if (action == 'S') {
            hooves[i]++;
        }
    }

    int max_wins = 0;
    for (int i = 1; i <= n; i++) {
        int before_wins = std::max(hooves[i], std::max(paper[i], scissors[i]));
        int after_wins = std::max(hooves[n] - hooves[i],
                         std::max(paper[n] - paper[i],
                             tscissors[n] - scissors[i]));
        max_wins = std::max(max_wins, before_wins + after_wins);
    }

    std::cout << max_wins << '\n';
}

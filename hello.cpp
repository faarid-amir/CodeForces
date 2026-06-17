#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<vector<int>> costs(4001);
    vector<int> count(4001, 0);

    for (int i = 0; i < n; ++i) {
        int mass, cost;
        cin >> mass >> cost;
        costs[mass].push_back(cost);
        ++count[mass];
    }

    vector<int> frequencies;
    frequencies.reserve(4000);
    for (int mass = 1; mass <= 4000; ++mass) {
        frequencies.push_back(count[mass]);
    }

    sort(frequencies.rbegin(), frequencies.rend());
    int sets = frequencies[k - 1];

    if (sets == 0) {
        cout << "0 0\n";
        return 0;
    }

    vector<long long> groupValues;
    groupValues.reserve(4000);

    for (int mass = 1; mass <= 4000; ++mass) {
        if (count[mass] < sets) {
            continue;
        }

        auto& group = costs[mass];
        sort(group.rbegin(), group.rend());

        long long sum = 0;
        for (int i = 0; i < sets; ++i) {
            sum += group[i];
        }
        groupValues.push_back(sum);
    }

    sort(groupValues.rbegin(), groupValues.rend());

    long long totalCost = 0;
    for (int i = 0; i < k; ++i) {
        totalCost += groupValues[i];
    }

    cout << sets << ' ' << totalCost << '\n';
    return 0;
}
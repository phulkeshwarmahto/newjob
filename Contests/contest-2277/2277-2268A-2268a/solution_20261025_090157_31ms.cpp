#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, k;
        scanf("%d %d", &n, &k);
        vector<int> cnt(n + 2, 0);
        for (int i = 0; i < n; i++) {
            int x;
            scanf("%d", &x);
            cnt[x]++;
        }
        int ans = 0, prefix = 0;
        for (int v = 0; v <= n; v++) {
            prefix += cnt[v];
            if (cnt[v] >= 1 && prefix >= (v + 1) * k) ans = v + 1;
            else break;
        }
        printf("%d\n", ans);
    }
    return 0;
}
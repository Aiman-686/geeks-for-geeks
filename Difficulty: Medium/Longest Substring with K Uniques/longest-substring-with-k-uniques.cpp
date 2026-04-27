class Solution {
  public:
    int longestKSubstr(string &s, int k) {
    int low = 0;
    int res = INT_MIN;
    int n = s.size();

    unordered_map<char, int> f;

    for (int high = 0; high < n; high++) {
        f[s[high]]++;

        while (f.size() > k) {
            f[s[low]]--;
            if (f[s[low]] == 0) {
                f.erase(s[low]);
            }
            low++;
        }

        if (f.size() == k) {
            res = max(res, high - low + 1);
        }
    }

    return (res == INT_MIN) ? -1 : res;
}
};
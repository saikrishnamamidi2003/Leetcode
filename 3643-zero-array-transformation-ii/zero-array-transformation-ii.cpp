class Solution {
public:
    int minZeroArray(std::vector<int>& nums, std::vector<std::vector<int>>& queries) {
        int n = nums.size();
        std::vector<int> cur = nums;
        if (std::all_of(cur.begin(), cur.end(), [](int x) { return x == 0; })) {
            return 0;
        }
        auto cmz = [&](int k) {
            std::vector<int> diff(n + 1, 0);
            for (int i = 0; i < k; ++i) {
                int l = queries[i][0], r = queries[i][1], value = queries[i][2];
                diff[l] += value;
                if (r + 1 < n) diff[r + 1] -= value;
            }
            int total = 0;
            for (int i = 0; i < n; ++i) {
                total += diff[i];
                if (total < cur[i]) {
                    return false;  
                }
            }
            return true;
        };
        int left = 0, right = queries.size(), ans = -1;
        bool midStateStored = false;
        std::vector<int> zerolithx = cur;  

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (cmz(mid)) {
                ans = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
            if (!midStateStored && mid == queries.size() / 2) {
                std::vector<int> diff(n + 1, 0);
                for (int i = 0; i < mid; ++i) {
                    int l = queries[i][0], r = queries[i][1], value = queries[i][2];
                    diff[l] += value;
                    if (r + 1 < n) diff[r + 1] -= value;
                }

                zerolithx = cur;
                int total = 0;
                for (int i = 0; i < n; ++i) {
                    total += diff[i];
                    zerolithx[i] = std::max(0, cur[i] - total);
                }
                midStateStored = true;
            }
        }

        return ans != -1 ? ans : -1;
    }
};
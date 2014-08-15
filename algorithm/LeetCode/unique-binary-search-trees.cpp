class Solution {
public:
    int numTrees(int n) {
        if (n <= 1) {
            return 1;
        }
        int num = 0;
        for (int i = 1; i <= n; ++i) {
            num += numTrees(i - 1) * numTrees(n - i);
        }
        return num;
    }
};

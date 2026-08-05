class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();

        // Every child gets at least 1 candy
        vector<int> candies(n, 1);

        // Left to right: give more candy if rating is higher than left child
        for (int i = 1; i < n; i++) {
            if (ratings[i] > ratings[i - 1]) {
                candies[i] = candies[i - 1] + 1;
            }
        }

        // Right to left: update candies if rating is higher than right child
        for (int i = n - 2; i >= 0; i--) {
            if (ratings[i] > ratings[i + 1]) {
                candies[i] = max(candies[i], candies[i + 1] + 1);
            }
        }

        // Add all candies
        int total = 0;
        for (int i = 0; i < n; i++) {
            total += candies[i];
        }

        // Return the minimum candies needed
        return total;
    }
};

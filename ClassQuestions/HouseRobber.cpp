#include<iostream>
#include<vector>

auto rob(const std::vector<int>& nums) -> int {
    std::vector<int> dp(std::size(nums));
    dp[0] = nums[0];
    dp[1] = std::max(nums[0], nums[1]);

    for (size_t i = 2; i<std::size(nums); i++) {
        dp[i] = std::max(dp[i-1], nums[i] + dp[i-2]);
    }
    return dp.back();
}


signed main(int argc, char **argv) {
    const std::vector<int> nums = {1, 2, 3, 1};
    std::cout << rob(nums) << std::endl;
    return 0;
}
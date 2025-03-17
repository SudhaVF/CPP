// Single Number
//Given a non-empty array of Integers nums,every element appears twice except for one. Find that single one.

class solution {
    public:
    int singleNumber(vector <int> &nums) {
        int ans = 0;

        for(int val : nums) {
            ans ^= val;
        }
        return ans;
    }
};
// problem link
// https://leetcode.com/problems/longest-subarray-of-1s-after-deleting-one-element/description/

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int max_count = 0, count = 0;
        map<int, int> mp;
        int n = nums.size();
        int s = 0;

        for(int l = 0;l < n;l++){
            if(mp.find(nums[l]) == mp.end()){
                mp[nums[l]] = 1;
            }else{
                mp[nums[l]]++;
            }
            cout << mp[0] + mp[1] << endl;

            if(mp[0] > 1){
                while(mp[0] > 1){
                    mp[nums[s]]--;
                    s++;
                }
            }
            cout << mp[0] + mp[1] << endl;

            if(max_count < mp[0]+mp[1]-1){
                max_count = mp[0]+mp[1]-1;
            }
        }

        return max_count;
    }
};

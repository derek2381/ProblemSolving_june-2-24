// problem link
// https://leetcode.com/problems/number-of-sub-arrays-of-size-k-and-average-greater-than-or-equal-to-threshold/description/

class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        long long int avg = 0,n = arr.size();
        int s = 0, l;

        for(l = s;l < k;l++){
            avg += arr[l];
        }
        int count = 0;

        if((avg/k) >= threshold){
            count++;
        }

        for(l = k;l < n;l++){
            avg -= arr[s];
            avg += arr[l];

            if((avg/k) >= threshold){
                count++;
            }
            s++;
        }
        return count;
    }
};

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n = nums.size();

        vector<vector<int>> ans;

        for(int i = 0 ; i< n-1 ; i++){

            if(i > 0 && nums[i-1] == nums[i]) continue;

            for(int j = i+1 ; j < n-1 ;){

                int p = j+1,q=n-1;

                while(p < q){
                    long long sum = (long long)nums[i] + (long long)nums[j] + (long long)nums[p] + (long long)nums[q];

                    if(sum > target){
                        q--;
                    }else if(sum < target){
                        p++;
                    }else{
                        ans.push_back({ nums[i],nums[j],nums[p],nums[q] });
                        p++;
                        q--;

                        while(p < n && nums[p-1] == nums[p]) p++;

                    }
                }

                j++;

                while(j < n && nums[j-1] == nums[j]) j++;

                
            }


        }

        return ans;
    }
};
class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        Arrays.sort(nums); // \U0001f9f9 Sort input
        HashSet<List<Integer>> res = new HashSet<>();
        
        for (int i = 0; i < nums.length - 2; i++) {
            int l = i + 1;
            int r = nums.length - 1;
            
            while (l < r) {
                int sum = nums[i] + nums[l] + nums[r];
                if (sum == 0) {
                    res.add(Arrays.asList(nums[i], nums[l], nums[r])); // ✅ Triplet found
                    l++;
                    r--;
                } else if (sum < 0) {
                    l++; // ➕ need larger
                } else {
                    r--; // ➖ need smaller
                }
            }
        }
        return new ArrayList<>(res); // \U0001f4e6 Convert to List
    }
}
class Solution {
    public int majorityElement(int[] nums) {
        int n = nums.length;
        HashMap<Integer, Integer> mpp = new HashMap<>();

        for(int i : nums)
        {
            mpp.put(i, mpp.getOrDefault(i, 0) + 1);
        }
        for(int key : mpp.keySet())
        {
            if(mpp.get(key) > n/2) return key;
        }
        return -1;

        
    }
}
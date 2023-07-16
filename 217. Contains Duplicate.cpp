class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool valor=false;
        int lenght = nums.size();
        std::sort(nums.begin(),nums.end());
        for(int i=0; i<lenght-1; i++)
        {
            if(nums[i]==nums[i+1])
            {
                valor=true;
            }
        }
        return valor;
    }
};

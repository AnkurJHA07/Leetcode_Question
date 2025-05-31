class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> vector_1;
        vector<int>vector_2;
        for(int i = 0; i< nums.size(); i++){
            if(nums[i ] % 2 == 0){
                vector_1.push_back(nums[i]);
            }else{
                vector_2.push_back(nums[i]);
            }
        }
        for(int i = 0; i<vector_2.size(); i++){
            vector_1.push_back(vector_2[i]);
        }
        return vector_1;
    }
};
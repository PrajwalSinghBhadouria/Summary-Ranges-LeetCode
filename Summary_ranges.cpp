class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        
        vector<string> v;
        string s="";
        if(nums.empty()){
            return v;
        }
        int count = 0;
        for(int i=0; i<nums.size(); i++){
            if( ((i+1)<nums.size())&& (nums[i]+1 == nums[i+1])){
                count++;
                if(count == 1){
                    s = to_string(nums[i]) +"->";
                }
                continue;
            }
            else{
                s = s+ to_string(nums[i]);
                v.push_back(s);
            }
            s = "";
            count = 0;
        }
        return v;
    }
};

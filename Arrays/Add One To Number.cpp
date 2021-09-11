vector<int> Solution::plusOne(vector<int> &nums) {
    
        int carry=1;
        vector<int>v;
        int n=nums.size();
        reverse(nums.begin(),nums.end());
        
        for(int i=0;i<n;i++)
        {
           
            
            if(nums[i]+carry==10)
            {
                if(i==n-1){
                    
                    v.push_back(0);
                    v.push_back(1);
                }
                else{
                    carry=1;
                    v.push_back(0);
                    
                }
            }
            
            else{
                v.push_back(nums[i]+carry);
                carry=0;
                }
                
            }
        
        reverse(v.begin(),v.end());
        
        for(int i=0;i<v.size();i++){
        if(v[i]==0) {v.erase(v.begin()); i--;}
        else break;
            }
        
        return v;
}

vector<vector<int> > Solution::fourSum(vector<int> &nums, int B) {

vector<vector<int>>ans;
int n=nums.size();
    sort(nums.begin(),nums.end());
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int sum=B-nums[i]-nums[j];
            int front=j+1;
            int back=n-1;
            while(front<back)
            {
                int ts=nums[front]+nums[back];
                if(ts<sum) front++;
                else if(ts>sum) back--;
                
                else{
                    vector<int>v;
                    v.push_back(nums[i]);
                    
                    v.push_back(nums[j]);
                    v.push_back(nums[front]);
                    v.push_back(nums[back]);
                    
                    ans.push_back(v);
                    while(front<back && nums[front]==v[2]) front++;
                    while(front<back && nums[back]==v[3]) back--;
                    
                }
            }
            while(j+1<n && nums[j]==nums[j+1]) j++;
        }
        while(i+1<n && nums[i]==nums[i+1]) i++;
    }
    
    
    return ans;
}

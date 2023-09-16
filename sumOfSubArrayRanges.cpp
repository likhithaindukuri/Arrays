class Solution {
public:
    long long minsum(vector<int>& num){
    int n=num.size();
    long long sum=0;
    long long left[n],right[n];
    stack<pair<int,int>> st1,st2;
    for(int  i=0;i<n;i++){
        int count=1;
        while(!st1.empty() && st1.top().first>=num[i]){
            count=count+st1.top().second;
            st1.pop();
        }
        st1.push({num[i],count});
        left[i]=count;
    }
    for(int i=n-1;i>=0;i--){
        int count=1;
        while(!st2.empty() && st2.top().first>num[i]){
            count=count+st2.top().second;
            st2.pop();
        }
        st2.push({num[i],count});
        right[i]=count;
    }

    for(int j=0;j<n;j++){
        sum+=num[j]*left[j]*right[j]*1LL ;
       // sum=sum%mod;
    }
    return sum;
}

long long maxSum(vector<int>& nums){
    int n=nums.size();
    long long sum=0;
    long long left[n],right[n];
    stack<pair<int,int>> st1,st2;
    for(int i=0;i<n;i++){
        int count=1;
        while(!st1.empty() && st1.top().first<=nums[i]){
            count+=st1.top().second;
            st1.pop();
        }
          st1.push({nums[i],count});
        left[i]=count;
    }
    for(int i=n-1;i>=0;i--){
        int count=1;
        while(!st2.empty() && st2.top().first<nums[i]){
            count=count+st2.top().second;
            st2.pop();
        }
        st2.push({nums[i],count});
        right[i]=count;
    }

    for(int j=0;j<n;j++){
        sum+=nums[j]*left[j]*right[j]*1LL ;
       // sum=sum%mod;
    }
    return sum;
}


    long long subArrayRanges(vector<int>& nums) {
        long long ans1=minsum(nums);
        long long ans2=maxSum(nums);
        return ans2-ans1;
    }
};
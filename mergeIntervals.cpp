class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>v;
       int start;
       int end;
       int i;
        sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b) {
           return a[0] < b[0];
       });
       
       for( i=0;i<intervals.size();i++)
       {
           int start=intervals[i][0];
           int end=intervals[i][1]; 
            while(i!=intervals.size()-1 && end>=intervals[i+1][0])
           {
               end= max(end,intervals[i+1][1]);
               i++;
           }
           
           
           vector<int> temp={start,end};
           v.push_back(temp);
       } 
       return v;
    }
};
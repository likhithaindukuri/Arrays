class Solution
{
public:
    int getSecondLargest(vector<int> &arr)
    {
        int n = arr.size();
        if (n < 2)
        {
            return -1;
        }
        int maxi = INT_MIN;
        int secMax = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > maxi)
            {
                secMax = maxi;
                maxi = arr[i];
            }
            else
            {
                if (arr[i] > secMax && arr[i] != maxi)
                {
                    secMax = arr[i];
                }
            }
        }
        if (secMax == INT_MIN)
        {
            return -1;
        }
        return secMax;
    }
};
class Solution {
  public:
    int mean(vector<int>& arr) {
        // code here
        int sum=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
        }
        return sum/arr.size();
    }

    int median(vector<int>& arr) {
        // code here
        sort(arr.begin(), arr.end());

                int n = arr.size();

                if(n % 2 == 1) {
                    return arr[n / 2];
                }
                else {
                    return (arr[n / 2 - 1] + arr[n / 2]) / 2;
                }
    }
};

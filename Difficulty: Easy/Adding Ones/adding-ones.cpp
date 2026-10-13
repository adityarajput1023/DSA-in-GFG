class Solution {
  public:
    vector<int> update(int n, vector<int>& updates) {
        // code here
       vector<int> arr(n, 0);

			int m = updates.size();

			for (int i = 0; i<m; i++) {
				int index = updates[i];

			
				arr[index - 1] += 1; 
			}

			for (int i = 1; i<n; i++) {
				arr[i] += arr[i - 1];
			}

			return arr;
    }
};
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
         vector<pair<string, string>> arr;

        for (string str : strs) {
            string key = str;
            sort(key.begin(), key.end());
            arr.push_back({key, str});
        }

        sort(arr.begin(), arr.end());

        vector<vector<string>> result;
        result.push_back({arr[0].second});

        for (int i = 1; i < arr.size(); i++) {
            if (arr[i].first == arr[i - 1].first) {
                result.back().push_back(arr[i].second);
            } else {
                result.push_back({arr[i].second});
            }
        }

        return result;
    }
};

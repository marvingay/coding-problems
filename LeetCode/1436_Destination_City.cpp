class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        map<string, vector<string>> cities;
        
        for (int i=0; i < paths.size(); i++) {
            cities[paths[i][1]].push_back("");
            cities[paths[i][0]].push_back(paths[i][1]);
        }
        string ans = "";
        for (auto it=cities.begin(); it != cities.end(); it++) {
            vector<string> dests = it->second;
            if (dests.size() == 1 && dests[0] == "") {
                ans = it->first;
                break;
            }
        }
        
        return ans;
    }
};
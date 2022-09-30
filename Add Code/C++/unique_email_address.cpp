class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        
        map<string,int> nameCount;
        
        for(auto e : emails) {
            string str = "";
            int i = 0;
            
            while(e[i] != '@' && e[i] != '+') {
                if(e[i] != '.')
                    str.push_back(e[i]);
                i++;
            }
            
            while(e[i] != '@')
                i++;
            
            while(i < e.length()) {
                str.push_back(e[i]);
                i++;
            }
            
            nameCount[str]++;
        }
        
        return nameCount.size();
        
    }
};

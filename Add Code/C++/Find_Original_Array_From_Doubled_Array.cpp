class Solution {
public:
    vector<int> findOriginalArray(vector<int>& c) {
        int n = c.size();
        bool haikya = true;
        sort(c.begin(),c.end());
        map<int,int>m;
        for(int i = 0; i < n; i++)
            m[c[i]]++;
        int i = 0;
        vector<int>ans;
        while( i < n)
        {
            int k = c[i];
            if(m[k])
            { 
                m[k]--;
                if(m[2*k])
                   { 
                       ans.push_back(k);
                       m[2*k]--;
                   }
                   else
                    {
                       m[k]++; 
                       haikya = false;
                           break;
                    }
            }
            i++;
        }       
        if(!haikya)
        {
            
            vector<int>n;
            return n;
        }
        else
            return ans;
    }
};

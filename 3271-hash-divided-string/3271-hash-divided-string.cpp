class Solution {
public:
    string stringHash(string s, int k) {string result = "";
        unordered_map<char,int> a;
        int q = ceil(s.size()/float(k));int i=0;
        
        while(q--){
            int count = 0;
            for(;i<s.size();i++){
                 a[s[i]]++;
                count++;
                if(count==k){i++;break;}
            }
            int sum =0;
            for(auto it: a){
                sum += it.second*(it.first - 'a');
            }
            a.clear();
            sum = sum % 26;
            result += char(sum+97);
            
        }
        return result;
    }
};
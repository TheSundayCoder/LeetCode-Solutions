class Solution {
public:
    string digitSum(string s, int k) {
        while (s.length() > k) {
            vector<int> f(0);
            int w = 0;
            for (int i = 0; i < s.length(); i++) {
                if (i > 0 && i % k == 0) {
                    f.push_back(w);  
                    w = 0;
                }
                w += s[i] - 48;
            }
            f.push_back(w); // Har chunk ka sum daalna hai, chahe 0 ho
            
            s = "";
            for (int i = 0; i < f.size(); i++) {
                s += to_string(f[i]);
            }
        }
        return s;
    }
};
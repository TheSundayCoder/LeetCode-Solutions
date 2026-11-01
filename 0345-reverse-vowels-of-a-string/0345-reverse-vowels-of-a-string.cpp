class Solution {
public:
    string reverseVowels(string s) {
        vector<char> a(0); int x = 0;
        for(int i = 0 ; i < s.size();i++){
            if(s.at(i)=='a'||s.at(i)=='o'||s.at(i)=='i'||s.at(i)=='e'||s.at(i)=='u'||s.at(i)=='A'||s.at(i)=='E'||s.at(i)=='O'||s.at(i)=='I'||s.at(i)=='U'){
              
                a.push_back(s.at(i));x++;
            }
        }
       x--;int i=0;
        while(x>=0 && i <s.length()){
               if(s.at(i)=='a'||s.at(i)=='o'||s.at(i)=='i'||s.at(i)=='e'||s.at(i)=='u'||s.at(i)=='A'||s.at(i)=='E'||s.at(i)=='O'||s.at(i)=='I'||s.at(i)=='U'){
                s.at(i)=a[x];   x--;
               }
            i++;
        }
        return s;
    }
};
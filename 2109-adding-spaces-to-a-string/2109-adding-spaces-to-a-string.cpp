class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string t=""; int k = 0;int z = 0;
        for(int i = 0 ; i < s.length() ; i++){
            int a = spaces[k];
            if(z==spaces[k])
            {
                if(k!=spaces.size()-1){
                k++;}
            t +=" ";}

             t += s.at(i); z++;
        }
        return t;
      
    }
};
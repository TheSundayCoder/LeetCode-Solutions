class Solution {
public:
    int findComplement(int num) {
        int sum=0;
        string rev="";
        while(num>0){
            int r = num%2;
             rev += 48+r;
            num = num/2;
        }
        
        string s="";
        for(int i = rev.length()-1;i>=0;i--){
            s +=rev.at(i);
        }
        for(int i = 0 ; i < s.length();i++){
            if(s.at(i)=='1'){
                 s.at(i)='0';
            }
            else{
                s.at(i)='1';
            }
        }
        for(int i = s.length()-1;i>=0;i--){
            if(s.at(i)=='1'){
                sum += pow(2,s.length()-1-i);
            }
        }  
        return sum ;         
    }
};
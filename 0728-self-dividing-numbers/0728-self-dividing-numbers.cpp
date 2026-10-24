class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> a(0);
        for(int i = left ; i <= right ; i++){
            int temp = i;bool b=true;
            while(temp>0){
                if(temp%10==0){b=0;break;}
                if(i%(temp%10)!=0){
                    b=0;
                    break;
                }
                temp /=10;
            }
            if(b){a.push_back(i);}
        }
        return a;
    }
};
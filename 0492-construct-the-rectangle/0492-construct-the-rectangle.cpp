class Solution {
public:
    vector<int> constructRectangle(int area) {
        int n=INT_MAX,a,b;
        for(int i = 1 ; i*i <=area;i++){
             if(area%i==0){
                if(area/i>i){
                    if(n>area/i-i)
                    {n = area/i-i;
                    a=area/i;b=i;}
                }
                else{
                    if(n>i-area/i)
                    {n = area/i;
                    b=area/i;a=i;}
                }
             }
        }
        return {a,b};
    }
};
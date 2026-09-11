class Solution {
public:
    int maxProduct(int n) {
        int count = 0;
        int k  = n;
            while(k>0){
                count++;
                k = k/10;
            }
        vector<int> a(count);
        int j = 0;
        while(n>0){
            int r = n%10;
            n = n/10;
            a[j] = r;
            j++;
        }
        sort(a.begin(),a.end());
        return a[count-1]*a[count-2];
    }
};
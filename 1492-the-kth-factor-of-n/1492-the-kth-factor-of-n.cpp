class Solution {
public:
    int kthFactor(int n, int k) {int count=0;
        for(int i = 1;i<=n ; i++){
               if(n%i==0){
                count++;
               }
        }
        int a[count];int j=0;
        for(int i = 1 ; i <=n ; i++ ){
            if(n%i==0){
                a[j]=i;
                j++;
            }
        }
          if(k<=count){
            return a[k-1];
          }
          return -1;
    }
};
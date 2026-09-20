class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int a[5]={};
       for(int i = 0 ; i < text.length();i++){
            if(text.at(i)=='b'){
                a[0]++;
            }
            if(text.at(i)=='a'){
                a[1]++;
            }
            if(text.at(i)=='l'){
                a[2]++;
            }
            if(text.at(i)=='o'){
                a[3]++;
            }
            if(text.at(i)=='n'){
                a[4]++;
            }
       }int count = 0;
       while(true){
            if(a[0]-1>=0&&a[1]-1>=0&&a[2]-2>=0&&a[3]-2>=0&&a[4]-1>=0){
                a[0] -=1;
                a[1] -=1;
                a[2] -=2;
                a[3] -= 2;
                a[4] -= 1;
                count++;
            }
            else{
                break;
            }
       }
       return count;
    }
};
class Solution {
public:
    int dayOfYear(string date) {
         string s="";
         int d = 0;
         s+=date.at(0);
         s += date.at(1);
         s += date.at(2);
         s += date.at(3);

         int c = stoi(s);
          string t="",u="";
          t += date.at(5);
          t += date.at(6);
          u += date.at(8);
          u += date.at(9);

          int f = stoi(t);
          int e = stoi(u);
          for(int i = 1 ; i < f ; i++){
            if(i==1||i==3||i==5||i==7||i==8||i==10){
                d+=31;
            }
            else if(i == 4 || i==6 ||i==9||i==11){
                d +=30;
            }
            else{
                if((c%4==0&&c%100 != 0)||c%400==0){
                    d+=29;
                }
                else{
                    d+=28;
                }
            }
          }
          d+= e;
    return d;
    
    
    
    }};
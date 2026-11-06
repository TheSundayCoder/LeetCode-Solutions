class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        if(bx1>= ax2||ax1>=bx2||by2<=ay1||ay2<=by1){
            return (ax2-ax1)*(ay2-ay1) + (bx2-bx1)*(by2-by1);
        }

        int x , y;
        if(bx1>=ax1&&bx2<=ax2){
            x = bx2-bx1;
        }
        else if(bx2>ax2&&bx1>=ax1){
            x = ax2-bx1;
        }
        else if(bx1<ax1&&bx2<=ax2){
            x = bx2-ax1;
        }
        else if(bx2>ax2&&bx1<ax1){
            x = ax2-ax1;
        }
        
         if(by1>=ay1&&by2<=ay2){
        y = by2-by1;
        }
        else if(by2>ay2&&by1>=ay1){
            y= ay2-by1;
        }
        else if(by1<ay1&&by2<=ay2){
        y = by2-ay1;
        }
        else if(by2>ay2&&by1<ay1){
        y = ay2-ay1;
        }
        return  (ax2-ax1)*(ay2-ay1) + (bx2-bx1)*(by2-by1)-x*y;

    }
};
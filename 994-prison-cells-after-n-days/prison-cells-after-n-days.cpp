class Solution {
public:
    vector<int> prisonAfterNDays(vector<int>& cells, int n) {
        vector<int> firstDay;
        vector<int> nextDay(cells.size(),0);
        int days=0;
        while(n>0){
            for(int i=1;i<cells.size()-1;i++){
                if(cells[i-1]==cells[i+1]){
                 nextDay[i]=1;
                }else{
                    nextDay[i]=0;
                }
            }
            if(days==0){
                firstDay=nextDay;
            }else if(firstDay==nextDay){
                n %= days;
                if (n == 0) {
                 n = days;
                }
            }
            cells=nextDay;
            n--;
            days++;
        }
        return cells;
    }
};
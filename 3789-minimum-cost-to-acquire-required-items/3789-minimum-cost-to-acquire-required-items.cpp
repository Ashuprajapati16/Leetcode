
class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long mixed = 1LL*costBoth*min(need1,need2)
                       + 1LL*cost1*max(0,need1-need2)
                       + 1LL*cost2*max(0,need2-need1);
       if(costBoth<cost1&&costBoth<cost2){
        return min(mixed,1LL*costBoth*max(need1,need2));
       }else if(costBoth<cost1&&costBoth>cost2){
            return min(mixed,min(1LL*costBoth*max(need1,need2),1LL*costBoth*need2+1LL*cost1*need1));
       }else if(costBoth<cost2&&costBoth>cost1){
            return min(mixed,min(1LL*costBoth*max(need1,need2),1LL*costBoth*need1+1LL*cost2*need2));
       }else{
            return min(mixed,min(1LL*cost1*need1+1LL*cost2*need2,1LL*costBoth*max(need1,need2)));
       }
       return 0;
    }
};
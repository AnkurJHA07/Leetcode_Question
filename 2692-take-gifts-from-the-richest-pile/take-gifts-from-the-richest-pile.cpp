class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> maxHeap;
        for(int gift : gifts)
        {
            maxHeap.push(gift);
        }
        for(int i = 0; i<k; i++){
            int maxgifts = maxHeap.top();
            maxHeap.pop();

            int newgifts = (int)sqrt(maxgifts);
            maxHeap.push(newgifts);
        }
        long long totalgifts = 0;
        while(!maxHeap.empty()){
            totalgifts += maxHeap.top();
            maxHeap.pop();
        }
        return totalgifts;
    }
};

class Solution {
  public:
    bool findPair(vector<int> &arr, int x) {
        // code here
        unordered_set<int> st;
        for(int num : arr){
            if(st.count(num+x) || st.count(num-x)){
                return true;
            }st.insert(num);
        }return false;
        
        
    }
};

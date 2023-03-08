class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> order;
        for(int i=0; i<s.length(); i++){
            order[s[i]]++;
        }
        int index=0;
        for(int j=0; j<s.length(); j++){
            int k=order[s[j]];
            if(k == 1){
                index=j;
                break;
            }
            else{
                index=-1;
            }
        }
        return index;
    }
};
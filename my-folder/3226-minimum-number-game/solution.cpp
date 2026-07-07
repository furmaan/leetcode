class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int> count(101,0);
        for(int num : nums){
            count[num]++;
        }
        vector<int> arr;
        int alice=-1;
        bool alice_turn = true;

        for(int i=0;i<=100;i++){
            while(count[i] > 0)
            {
                if(alice_turn){
                    alice=i;
                    alice_turn = false;
                }
                else{
                    arr.push_back(i);
                    arr.push_back(alice);
                    alice_turn= true;
                }
                count[i]--;
            }
        }
        return arr;
    }
};

class Solution {
public:

bool isselfdividing(int num){

int temp=num;
int digit=0;
while(temp){
    digit=temp%10;
    if(digit==0 || num%digit !=0) return false;
    temp=temp/10;
}

return true;


}

    vector<int> selfDividingNumbers(int left, int right) {
        vector <int> res;
        for(int i=left ;i<=right;i++){
            if(isselfdividing(i)){
                res.push_back(i);
            }
        }

        return res;
    }
};
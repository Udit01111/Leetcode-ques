class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count=0;

 if (flowerbed.size() > 0 && flowerbed[0] == 0 && (flowerbed.size() == 1 || flowerbed[1] == 0)) {
            flowerbed[0] = 1;
            count++;
        }

        for(int i=1;i <flowerbed.size()-1;i=i+1){
            if(flowerbed[i-1]==0 && flowerbed[i]==0 && flowerbed[i+1]==0){
                count++;
                flowerbed[i]=1;
            }
        
        }
    int size =flowerbed.size();
  if (size > 1 && flowerbed[size - 1] == 0 && flowerbed[size - 2] == 0) {
            flowerbed[size - 1] = 1;
            count++;
        }

        if(count>=n){
            return true;
        }

        return false;
    }
};
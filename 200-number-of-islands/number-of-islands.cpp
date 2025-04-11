// class Solution {
// public:

//     void elim(int x, int y , vector<vector<char>>& grid ){
//         queue <pair<int,int>>  q;
//         pair<int , int > p1= make_pair(x,y);
//         q.push(make_pair(x,y));

//     while(!q.empty()){
//         x=q.front().first;
//         y=q.front().second;

//         //up
//         if(x-1>=0 && grid[x-1][y]=='1'){
//             q.push(make_pair(x-1,y));
//         }


//         //down
//         if(x+1<grid.size() && grid[x+1][y]=='1'){
//             q.push(make_pair(x+1,y));
//         }

//         //left
//          if(y-1>=0 && grid[x][y-1]=='1'){
//             q.push(make_pair(x,y-1));
//         }


//         //right
//          if(y+1<grid[0].size() && grid[x][y+1]=='1'){
//             q.push(make_pair(x,y+1));
//         }

//         pair<int , int > p2= q.front();
//         q.pop();
//         grid[p2.first][p2.second]=9;

//     }

//     }

//     int numIslands(vector<vector<char>>& grid) {
//     //make queue
//     //check if its within the bounds and add to queue
//     //make it 9 if within the bounds (eliminating islands)
//     //increment the count
//     int count=0;
//     for(int i=0;i <grid.size();i++){
//         for(int j=0;j<grid[0].size();j++){
//             if(grid[i][j]=='1'){
//                 elim(i,j,grid);
//                 count++;}
//         }
//     }

//     return count;

//     }
// };

class Solution {
public:
    void elim(int x, int y, vector<vector<char>>& grid) {
        queue<pair<int, int>> q;
        q.push({x, y});
        grid[x][y] = '0';  // mark as visited immediately

        while (!q.empty()) {
            auto [cx, cy] = q.front();
            q.pop();

            // check 4 directions
            vector<pair<int, int>> dirs = {{-1,0}, {1,0}, {0,-1}, {0,1}};
            for (auto [dx, dy] : dirs) {
                int nx = cx + dx;
                int ny = cy + dy;

                if (nx >= 0 && ny >= 0 && nx < grid.size() && ny < grid[0].size() && grid[nx][ny] == '1') {
                    q.push({nx, ny});
                    grid[nx][ny] = '0';  // mark visited
                }
            }
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        int count = 0;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] == '1') {
                    elim(i, j, grid);
                    count++;
                }
            }
        }
        return count;
    }
};

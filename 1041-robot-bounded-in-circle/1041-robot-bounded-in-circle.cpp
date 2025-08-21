class Solution {
public:
    bool isRobotBounded(string instructions) {
        vector<pair<int,int>> dirs = {{0,1}, {1,0}, {0,-1}, {-1,0}};
        int x = 0, y = 0;
        int dir = 0;

        for (char ins : instructions)
        {
            if (ins == 'G')
            {
                x += dirs[dir].first;
                y += dirs[dir].second;
            }
            else if (ins == 'L')
            {
                dir = (dir + 3) % 4;
            }
            else if (ins == 'R')
            {
                dir = (dir + 1) % 4;
            }
        }
        return (x == 0 && y == 0) || (dir != 0);
    }
};

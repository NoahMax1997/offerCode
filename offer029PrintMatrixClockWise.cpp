#include "headFile/frequent_head_file.h"
class Solution
{
public:
    const int LEFT = 0, RIGHT = 1, UP = 2, DOWN = 3;
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        vector<int> ret;
        if (matrix.size() == 0)
        {
        }
        else
        {
            set<int> Set;
            int ii = 0, jj = 0, i_size = matrix.size(), j_size = matrix[0].size(), direction = RIGHT;
            while (1)
            {
                if (Set.size() == i_size * j_size)
                {
                    break;
                }

                if (direction == RIGHT && Set.size() < i_size * j_size)
                {
                    cout<<"right"<<endl;
                    for (; jj < j_size && Set.find(ii * i_size + jj) == Set.end(); jj++)
                    {
                        cout<<matrix[ii][jj]<<" ";
                        // cout<<"sfd"<<endl;
                        ret.push_back(matrix[ii][jj]);
                        Set.insert(ii * i_size + jj);
                    }
                    cout<<endl;
                    jj--;
                    ii++;
                    direction=DOWN;
                }
                else if (direction == DOWN && Set.size() < i_size * j_size)
                {
                    cout<<"down"<<endl;
                    for (; ii < i_size && Set.find(ii * i_size + jj) == Set.end(); ii++)
                    {
                        cout<<matrix[ii][jj]<<" ";
                        ret.push_back(matrix[ii][jj]);
                        Set.insert(ii * i_size + jj);
                    }
                    ii--;
                    jj--;
                    cout<<endl;
                    direction=LEFT;
                }
                else if (direction == LEFT && Set.size() < i_size * j_size)
                {
                    cout<<"left"<<endl;
                    for (; jj >= 0 && Set.find(ii * i_size + jj) == Set.end(); jj--)
                    {
                        cout<<matrix[ii][jj]<<" ";
                        ret.push_back(matrix[ii][jj]);
                        Set.insert(ii * i_size + jj);
                    }
                    jj++;
                    ii--;
                    cout<<endl;
                    direction=UP;
                }
                else if (direction == UP && Set.size() < i_size * j_size)
                {
                    cout<<"up"<<endl;
                    for (; ii >= 0 && Set.find(ii * i_size + jj) == Set.end(); ii--)
                    {
                        cout<<matrix[ii][jj]<<" ";
                        ret.push_back(matrix[ii][jj]);
                        Set.insert(ii * i_size + jj);
                    }
                    ii++;
                    jj++;
                    cout<<endl;
                    direction=RIGHT;
                    // cout<<ii<<" "<<jj<<endl;
                }
            }
        }
        return ret;
    }
};
int main()
{
    Solution s;
    vector<vector<int>> vec = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    s.spiralOrder(vec);
    system("pause");
    return 0;
}
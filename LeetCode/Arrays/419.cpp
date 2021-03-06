class Solution {
 public:
  int countBattleships(vector<vector<char>>& board) {
    int sum = 0;
    for (int i = 0; i < board.size(); i++) {
      for (int j = 0; j < board[i].size(); j++) {
        if (board[i][j] == 'X') {
          if (i + 1 < board.size() && board[i + 1][j] == 'X') {
            continue;
          }
          if (j + 1 < board[i].size() && board[i][j + 1] == 'X') {
            continue;
          }
          sum++;
        }
      }
    }
    return sum;
  }
};
#include <iostream>
#include <vector>
using namespace std;

int n;                      // Size of the board (n x n)
int solution_count;              // Number of valid solutions
vector<bool> column;        // column[x] is true if column x is occupied
vector<bool> diag1;         // diag1[x + y] is true if "/" diagonal is occupied
vector<bool> diag2;         // diag2[x - y + n - 1] is true if "\" diagonal is occupied

void n_queen(int y){
    if(y==n){
        solution_count++;
        return;
    }
    for (int x = 0; x < n; x++) {
        if (column[x] || diag1[x + y] || diag2[x - y + n - 1]) continue;
        column[x] = diag1[x + y] = diag2[x - y + n - 1] = true;
        n_queen(y + 1);
        column[x] = diag1[x + y] = diag2[x - y + n - 1] = false;
    }
}

int main(){
    n = 3;
    column.resize(n);
    diag1.resize(2 * n);
    diag2.resize(2 * n);

    n_queen(0);

    cout << "Total number of solutions for " << n << "-Queens: " << solution_count << endl;

    return 0;

}
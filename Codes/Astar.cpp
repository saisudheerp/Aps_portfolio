#include <bits/stdc++.h>
using namespace std;

#define ROW 9
#define COL 10

typedef pair<int, int> Pair;
typedef pair<double, pair<int, int>> pPair;

struct cell {
    int parent_i, parent_j;
    double f, g, h;
};

bool isValid(int row, int col) {
    return (row >= 0) && (row < ROW) && (col >= 0) && (col < COL);
}

bool isUnBlocked(int grid[][COL], int row, int col) {
    return (grid[row][col] == 1);
}

bool isDestination(int row, int col, Pair dest) {
    return (row == dest.first && col == dest.second);
}

double calculateHValue(int row, int col, Pair dest) {
    return ((double)sqrt((row - dest.first) * (row - dest.first) + (col - dest.second) * (col - dest.second)));
}

void tracePath(cell cellDetails[][COL], Pair dest) {
    printf("\nThe Path is ");
    int row = dest.first;
    int col = dest.second;
    stack<Pair> Path;
    
    while (!(cellDetails[row][col].parent_i == row && cellDetails[row][col].parent_j == col)) {
        Path.push(make_pair(row, col));
        int temp_row = cellDetails[row][col].parent_i;
        int temp_col = cellDetails[row][col].parent_j;
        row = temp_row;
        col = temp_col;
    }
    
    Path.push(make_pair(row, col));
    while (!Path.empty()) {
        pair<int, int> p = Path.top();
        Path.pop();
        printf("-> (%d,%d) ", p.first, p.second);
    }
}

void aStarSearch(int grid[][COL], Pair src, Pair dest) {
    if (isValid(src.first, src.second) == false) {
        printf("Source is invalid\n");
        return;
    }
    if (isValid(dest.first, dest.second) == false) {
        printf("Destination is invalid\n");
        return;
    }
    if (isUnBlocked(grid, src.first, src.second) == false || isUnBlocked(grid, dest.first, dest.second) == false) {
        printf("Source or the destination is blocked\n");
        return;
    }
    if (isDestination(src.first, src.second, dest) == true) {
        printf("We are already at the destination\n");
        return;
    }
    
    bool closedList[ROW][COL];
    memset(closedList, false, sizeof(closedList));
    
    cell cellDetails[ROW][COL];
    int i, j;
    for (i = 0; i < ROW; i++) {
        for (j = 0; j < COL; j++) {
            cellDetails[i][j].f = FLT_MAX;
            cellDetails[i][j].g = FLT_MAX;
            cellDetails[i][j].h = FLT_MAX;
            cellDetails[i][j].parent_i = -1;
            cellDetails[i][j].parent_j = -1;
        }
    }
    
    i = src.first, j = src.second;
    cellDetails[i][j].f = 0.0;
    cellDetails[i][j].g = 0.0;
    cellDetails[i][j].h = 0.0;
    cellDetails[i][j].parent_i = i;
    cellDetails[i][j].parent_j = j;
    
    set<pPair> openList;
    openList.insert(make_pair(0.0, make_pair(i, j)));
    bool foundDest = false;
    
    while (!openList.empty()) {
        pPair p = *openList.begin();
        openList.erase(openList.begin());
        i = p.second.first;
        j = p.second.second;
        closedList[i][j] = true;
        
        double gNew, hNew, fNew;
        
        // Successors: N, S, E, W, NE, NW, SE, SW
        int rowDir[] = {-1, 1, 0, 0, -1, -1, 1, 1};
        int colDir[] = {0, 0, 1, -1, 1, -1, 1, -1};
        double dirCost[] = {1.0, 1.0, 1.0, 1.0, 1.414, 1.414, 1.414, 1.414};
        
        for (int d = 0; d < 8; d++) {
            int newRow = i + rowDir[d];
            int newCol = j + colDir[d];
            
            if (isValid(newRow, newCol)) {
                if (isDestination(newRow, newCol, dest)) {
                    cellDetails[newRow][newCol].parent_i = i;
                    cellDetails[newRow][newCol].parent_j = j;
                    printf("The destination cell is found\n");
                    tracePath(cellDetails, dest);
                    foundDest = true;
                    return;
                }
                else if (!closedList[newRow][newCol] && isUnBlocked(grid, newRow, newCol)) {
                    gNew = cellDetails[i][j].g + dirCost[d];
                    hNew = calculateHValue(newRow, newCol, dest);
                    fNew = gNew + hNew;
                    
                    if (cellDetails[newRow][newCol].f == FLT_MAX || cellDetails[newRow][newCol].f > fNew) {
                        openList.insert(make_pair(fNew, make_pair(newRow, newCol)));
                        cellDetails[newRow][newCol].f = fNew;
                        cellDetails[newRow][newCol].g = gNew;
                        cellDetails[newRow][newCol].h = hNew;
                        cellDetails[newRow][newCol].parent_i = i;
                        cellDetails[newRow][newCol].parent_j = j;
                    }
                }
            }
        }
    }
    
    if (!foundDest)
        printf("Failed to find the Destination Cell\n");
    return;
}

int main() {
    int grid[ROW][COL] = {
        { 1, 1, 1, 1, 1, 1, 0, 1, 1, 1 },
        { 1, 1, 0, 1, 1, 1, 1, 1, 0, 1 },
        { 1, 1, 1, 1, 0, 0, 0, 1, 1, 1 },
        { 1, 1, 1, 1, 1, 1, 0, 1, 0, 1 },
        { 0, 0, 0, 0, 0, 1, 0, 0, 0, 1 },
        { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 1, 1, 1, 1, 0, 1, 1, 0, 1, 1 },
        { 1, 1, 0, 1, 0, 1, 0, 1, 0, 1 },
        { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }
    };
    
    Pair src = make_pair(8, 0);
    Pair dest = make_pair(0, 0);
    
    aStarSearch(grid, src, dest);
    
    return 0;
}

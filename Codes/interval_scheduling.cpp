#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Interval {
    int start;
    int end;
};

bool compareIntervals(Interval i1, Interval i2) {
    return (i1.end < i2.end);
}

int intervalScheduling(vector<Interval>& intervals) {
    sort(intervals.begin(), intervals.end(), compareIntervals);
    int count = 0;
    int endTime = 0;

    for (auto interval : intervals) {
        if (interval.start >= endTime) {
            endTime = interval.end;
            count++;
        }
    }

    return count;
}

int main() {
    vector<Interval> intervals = {{1, 3}, {2, 4}, {3, 5}, {7, 8}};
    cout << "Maximum number of non-overlapping intervals: " << intervalScheduling(intervals) << endl;
    return 0;
}

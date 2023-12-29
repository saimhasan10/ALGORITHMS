#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Activity
{
    int start, finish;
};

bool activityCompare(const Activity &a, const Activity &b)
{
    return (a.finish < b.finish);
}

void printMaxActivities(vector<Activity> &activities)
{
    sort(activities.begin(), activities.end(), activityCompare);

    cout << "Selected Activities: ";
    int n = activities.size();
    int i = 0;
    cout << "(" << activities[i].start << ", " << activities[i].finish << ") ";

    for (int j = 1; j < n; j++)
    {
        if (activities[j].start > activities[i].finish)
        {
            cout << "(" << activities[j].start << ", " << activities[j].finish << ") ";
            i = j;
        }
    }
}

int main()
{
    vector<Activity> activities = {
        {1, 4}, {3, 5}, {0, 6}, {5, 7}, {3, 8}, {5, 9}, {6, 10}, {8, 11}, {8, 12}, {2, 13}, {12, 14}};

    printMaxActivities(activities);

    return 0;
}

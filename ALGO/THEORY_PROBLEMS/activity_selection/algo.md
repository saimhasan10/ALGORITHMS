## Greedy Algorithm for Activity Selection:

1. Sort the activities by their finish times in ascending order.
2. Select the first activity (earliest finish time) and mark it as part of the solution.
3. For each remaining activity:
   a.If the start time of this activity is greater than  the finish time of the previously selected activity, select this activity and mark it as part of the solution.
4. Repeat step 3 until all activities are checked.

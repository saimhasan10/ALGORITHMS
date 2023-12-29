## Algorithm for fractional knapsack problem

1. Calculate the value-to-weight ratio for each item.

2. Sort the items by their value-to-weight ratio in non-increasing order.

3. Initialize totalValue = 0.0 and remainingCapacity = knapsack capacity.

4. For each item:
   a. If the item's weight can be fully taken, take the entire item and update totalValue and remainingCapacity.
   b. If the item's weight cannot be fully taken, take a fraction of the item, update totalValue, and break the loop

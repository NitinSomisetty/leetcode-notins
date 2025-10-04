int maxProfit(int* prices, int pricesSize) 
{
    // ADDED: handle tiny arrays safely
    if (pricesSize < 2) 
        return 0;

    int min = prices[0];
    int lwstsofar = 0;
    int hgstsofar = 0;        // CHANGED: initialize so it's always valid
    int max_profit = 0;       // ADDED: track best profit seen

    // CHANGED: single-pass scan (replaces the two-loop logic)
    for (int i = 1; i < pricesSize; i++) {
        if (prices[i] < min) {
            min = prices[i];
    // update buy index when we find a new low
        }

        int profit = prices[i] - min;  // find profits for all and then the max among them
        if (profit > max_profit) {
            max_profit = profit;       // update best profit
           // update sell index (optional, kept for your variables)
        }
    }

    return max_profit; 
}

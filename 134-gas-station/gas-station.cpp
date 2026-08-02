class Solution 
{
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) 
    {
        int totalGas = 0, totalCost = 0;

        // Calculate total gas and total cost
        for (int x : gas)
        totalGas += x;

        for (int x : cost)
        totalCost += x;

        // If total gas is less than total cost,
        // completing the circuit is impossible
        if (totalGas < totalCost)
        return -1;

        int tank = 0;      // Current gas in tank
        int start = 0;     // Candidate starting station

        for (int i = 0; i < gas.size(); i++) 
        {
            // Update current tank
            tank += gas[i] - cost[i];

            // If tank becomes negative,
            // current start cannot complete the journey
            if (tank < 0) 
            {
                start = i + 1; // Try next station
                tank = 0;      // Reset tank
            }
        }

        return start;
    }
};

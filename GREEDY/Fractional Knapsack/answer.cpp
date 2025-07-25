// class implemented
/*
struct Item{
    int value;
    int weight;
};
*/

class Solution {
  public:
    double fractionalKnapsack(vector<int>& values, vector<int>& weights, int W) {
        // code here
        int n = values.size();
        vector<pair<double, int>> ratioIdx;
        for (int i = 0; i < n; ++i) {
            ratioIdx.emplace_back((double)values[i] / weights[i], i);
        }
        sort(ratioIdx.rbegin(), ratioIdx.rend());

        double totalValue = 0.0;
        int currWeight = 0;
        for (auto& p : ratioIdx) {
            int idx = p.second;
            if (currWeight + weights[idx] <= W) {
                totalValue += values[idx];
                currWeight += weights[idx];
            } else {
                int remain = W - currWeight;
                totalValue += ((double)values[idx] / weights[idx]) * remain;
                break;
            }
        }

        return totalValue;
        
        // int n = values.size();
        // vector<int> indices(n);
        // for (int i = 0; i < n; i++) indices[i] = i;
        // sort(indices.begin(),indices.end(),[&](int i, int j) {
        //     return (double)values[i] / weights[i] > (double)values[j] / weights[j];
        // });
        // double sum = 0.0;
        // int weight = 0;
        // for(int i : indices){
        //     if((weight+weights[i])<=W){
        //         sum += values[i];
        //         weight += weights[i];
        //     } else {
        //         int extra = W - weight;
        //         double adds = ((double)values[i] / weights[i]) * extra;
        //         sum += adds;
        //         break;
        //     }
        // }
        // return sum;
    }
};

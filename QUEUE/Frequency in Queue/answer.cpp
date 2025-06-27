class Solution {
  public:
    void enqueue(queue<int> &q, int k) {
        // code here
        q.push(k);
    }

    int findFrequency(queue<int> &q, int k) {
        //  code here
        int res = 0;
    int s = q.size();

    while (s)
    {
        s--;
        int x = q.front();
        q.pop();
        if (x == k)
        {
            res++;
        }
        q.push(x);
    }

    return res;
    }
};

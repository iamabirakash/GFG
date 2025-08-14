class Solution {
  public:
    vector<int> search(string &pat, string &txt) {
        // code here\
        int m = pat.length();
        int n = txt.length();
      for (int i = 0; i <= n - m; i++) {   // loop over all possible starting indices
    int j = 0;
    // compare pattern with substring starting at i
    while (j < m && txt[i + j] == pat[j]) {
        j++;
    }
    // if full pattern matched
    if (j == m) {
        res.push_back(i); // store starting index of match
    }
}

    //     vector<int> lps(m, 0), res;

    //     // Step 1: Build LPS array
    //     int len = 0; // length of previous longest prefix suffix
    //     for (int i = 1; i < m; ) {
    //         if (pat[i] == pat[len]) {
    //             lps[i++] = ++len;
    //         } else {
    //             if (len != 0) len = lps[len - 1];
    //             else lps[i++] = 0;
    //         }
    //     }

    //     // Step 2: KMP search
    //     int i = 0, j = 0; 
    //     while (i < n) {
    //         if (txt[i] == pat[j]) {
    //             i++; j++;
    //         }
    //         if (j == m) {
    //             res.push_back(i - j); // match found
    //             j = lps[j - 1];
    //         } else if (i < n && txt[i] != pat[j]) {
    //             if (j != 0) j = lps[j - 1];
    //             else i++;
    //         }
    //     }
    //     return res;
    // }
};


#include <vector>
#include <utility>
#include <algorithm>
#include <map>

std::pair<int, int> mostFrequent(int N, const std::vector<int>& A) {
    
    std::map<int, int> freq;
    
    for (int i = 0; i < N; i++) {
        freq[A[i]]++;
    }
    
    int best_val = -1;
    int max_freq = 0;
    

    for (auto const& [val, count] : freq) {
        if (count > max_freq) {
            max_freq = count;
            best_val = val;
        }
    }
    
    return {best_val, max_freq};
}
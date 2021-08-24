#include <vector>
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    if (argc > 2)
    {
        return 1;
    }
    
    int fibSeq = atoi(argv[1]);
    vector<uint64_t> memo;
    memo.push_back((uint64_t)0);
    memo.push_back((uint64_t)1);
    for (int i = 2; i < fibSeq; i++)
    {
        memo.push_back(memo[i - 1] + memo[i - 2]);
    }
    cout << memo[fibSeq - 1] << "\n";
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);


/*
 * Complete the 'isPossible' function below.
 *
 * The function is expected to return a BOOLEAN.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY calCounts
 *  2. INTEGER requiredCals
 */

bool isPossible(vector<int> calCounts, int requiredCals) {
    int sizeOfCalCounts = int(calCounts.size());
    vector< vector <bool> > targetSum(sizeOfCalCounts + 1);
    for ( int i = 0; i <= sizeOfCalCounts; i++ ) {
        targetSum[i] = vector<bool>(requiredCals + 1); 
    }
    for( int i = 0; i <= sizeOfCalCounts; i++ ) {
        targetSum[i][0] = true;
    }
    for( int i = 1; i <= requiredCals; i++ ) {
        targetSum[0][i] = false;
    }
    for( int i = 1; i <= sizeOfCalCounts; i++ ) {
        for( int j = 1; j <= requiredCals; j++ ) {
            if ( calCounts[i - 1] <= j ) {
                targetSum[i][j] = targetSum[i - 1][j - calCounts[i - 1]] || targetSum[i - 1][j];
            }
            else {
                targetSum[i][j] = targetSum[i - 1][j];
            }
        }
    }
    return targetSum[sizeOfCalCounts][requiredCals];
}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string calCounts_count_temp;
    getline(cin, calCounts_count_temp);

    int calCounts_count = stoi(ltrim(rtrim(calCounts_count_temp)));

    vector<int> calCounts(calCounts_count);

    for (int i = 0; i < calCounts_count; i++) {
        string calCounts_item_temp;
        getline(cin, calCounts_item_temp);

        int calCounts_item = stoi(ltrim(rtrim(calCounts_item_temp)));

        calCounts[i] = calCounts_item;
    }

    string requiredCals_temp;
    getline(cin, requiredCals_temp);

    int requiredCals = stoi(ltrim(rtrim(requiredCals_temp)));

    bool result = isPossible(calCounts, requiredCals);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

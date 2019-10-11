#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



/*
 * Complete the 'maxHeight' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY tablePositions
 *  2. INTEGER_ARRAY tableHeights
 */
int returnMaxValues( int value, int gap ) {
    if ( gap % 2 == 1 ) {
        value++;
        gap--;
    }
    value += ( gap / 2 );
    return value;
}
int maxHeight(vector<int> tablePositions, vector<int> tableHeights) {
    int sizeOfTablePositions = int(tablePositions.size());
    int maxHeightValue = 0;
    for( int i = 1; i < sizeOfTablePositions; i++ ) {
        int gapInPositions = tablePositions[i] - tablePositions[i - 1] - 1;
        if ( gapInPositions > 0 ) {
            int leftValue = tableHeights[i - 1];
            int rightValue = tableHeights[i];
            int returnValue;
            if( leftValue < rightValue ) {
                int gap = rightValue - leftValue;
                if ( gapInPositions > gap ) {
                    gapInPositions -= gap;
                    leftValue += gap;
                    returnValue = returnMaxValues( leftValue, gapInPositions );
                }
                else if ( gapInPositions < gap ) {
                    leftValue += gapInPositions;
                    returnValue = leftValue;
                }
                else {
                    leftValue += gap;
                    returnValue = leftValue;
                }
            }
            else if (leftValue > rightValue) {
                int gap = leftValue - rightValue;
                if ( gapInPositions > gap ) {
                    gapInPositions -= gap;
                    rightValue += gap;
                    returnValue = returnMaxValues( rightValue, gapInPositions );
                }
                else if ( gapInPositions < gap ) {
                    rightValue += gapInPositions;
                    returnValue = rightValue;
                }
                else {
                   rightValue += gap;
                   returnValue = rightValue;
                }
            }
            else {
                returnValue = returnMaxValues( leftValue, gapInPositions );
            }

            if ( maxHeightValue < returnValue ) {
                maxHeightValue = returnValue;
            }

        }
    }
    return maxHeightValue;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string tablePositions_count_temp;
    getline(cin, tablePositions_count_temp);

    int tablePositions_count = stoi(ltrim(rtrim(tablePositions_count_temp)));

    vector<int> tablePositions(tablePositions_count);

    for (int i = 0; i < tablePositions_count; i++) {
        string tablePositions_item_temp;
        getline(cin, tablePositions_item_temp);

        int tablePositions_item = stoi(ltrim(rtrim(tablePositions_item_temp)));

        tablePositions[i] = tablePositions_item;
    }

    string tableHeights_count_temp;
    getline(cin, tableHeights_count_temp);

    int tableHeights_count = stoi(ltrim(rtrim(tableHeights_count_temp)));

    vector<int> tableHeights(tableHeights_count);

    for (int i = 0; i < tableHeights_count; i++) {
        string tableHeights_item_temp;
        getline(cin, tableHeights_item_temp);

        int tableHeights_item = stoi(ltrim(rtrim(tableHeights_item_temp)));

        tableHeights[i] = tableHeights_item;
    }

    int result = maxHeight(tablePositions, tableHeights);

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

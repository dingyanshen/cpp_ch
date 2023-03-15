//ifelse.cpp
#include <iostream>
using std::endl; using std::cin; using std::cout;
#include <vector>
using std::vector;
#include <string>
using std::string;
#include <iterator>
using std::begin; using std::end;

const vector<string> scores = {"F", "D", "C", "B", "A", "A++"};
vector<unsigned> grades;
int main()
{
    // read a set of scores from the input
    unsigned grade;
    while (cin >> grade)
        grades.push_back(grade);

    // now process those grades
    for (auto it : grades) {   // for each grade we read
        cout << it << " " ;    // print the grade
        string lettergrade;    // hold coresponding letter grade
        // if failing grade, no need to check for a plus or minus
        if (it < 60)
            lettergrade = scores[0];
        else {
            lettergrade = scores[(it - 50)/10];  // fetch the letter grade
            if (it != 100)  // add plus or minus only if not already an A++
                if (it % 10 > 7)
                    lettergrade += '+';   // grades ending in 8 or 9 get a +
                else if (it % 10 < 3)
                    lettergrade += '-';   // grades ending in 0, 1, or 2 get a -
        }
        cout << lettergrade << endl;
   }

    return 0;
}


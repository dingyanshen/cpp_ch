//score.cpp
//统计分数

#include <string>//字符串
using std::string;

#include <vector>//动态数组
using std::vector;

#include <iostream>//标准
using std::cin; using std::cout; using std::endl;

int main()
{
    // hold the grades we read from the standard input
    // 保存输入的成绩
    vector<unsigned> grades;

    // count the number of grades by clusters of ten:
    // 0--9, 10--19, . ..  90--99, 100
    // 计算成绩等级区间
    vector<unsigned> scores(11, 0); // 11个初始值为0的元素 
    //11 buckets, all initially 0
    unsigned grade;
    while (cin >> grade) {      // 读取成绩 read the grades
        if (grade <= 100)       // 读取正确的输入 handle only valid grades
            grades.push_back(grade);// grades数组后追加grade
            ++scores[grade/10]; // increment the counter for the current cluster
    }
    cout << "grades.size = " << grades.size() << endl;
    for (auto it : grades)
        cout << it << " " ;
    cout << endl;

    cout << "scores.size = " << scores.size() << endl;
    for (auto it : scores)
        cout << it << " " ;
    cout << endl;

    // equivalent program using iterators instead of subscripts
    vector<unsigned> alt_scores(11, 0);  // 11 buckets, all initially 0
    // for each grade in the input
    for (auto it = grades.begin(); it != grades.end(); ++it) {
        unsigned i = *it;
        // increment the counter for the current cluster
        ++(*(alt_scores.begin() + i/10));
    }

    cout << "alt_scores.size = " << alt_scores.size() << endl;
    for (auto it = alt_scores.begin(); it != alt_scores.end(); ++it)
        cout << *it << " " ;
    cout << endl;
    while(1);
}



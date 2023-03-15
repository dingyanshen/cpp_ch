#include<iostream>
#include<string>
#include<fstream>
#include "TextQuery.h"
#include "Query.h"

int main()
{
    std::ifstream file("storyDataFile.txt");
    TextQuery tQuery(file);
    Query q = Query("fiery")&Query("bird")|Query("wind");
    print(std::cout, q.eval(tQuery)) << std::endl;
    std::cout<<q.rep()<<std::endl;

	return 0;
}

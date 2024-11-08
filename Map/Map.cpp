
#include <iostream>
#include <map>
using namespace std;



int main()
{
    map <string, int> StudentGrade;

    StudentGrade["Ahmed"] = 100;
    StudentGrade["Kholud"] = 98;
    StudentGrade["Lila"] = 80;
    StudentGrade["Sondos"] = 77;


    // Printing all map values
    cout << "\nPrinting all map values..\n\n";

    // Iterating over the map
    for (const auto& Pair : StudentGrade)
        cout << "student Name = " << Pair.first << "|| student Grade = " << Pair.second << endl;


    string studentName = "Lila";

    if (StudentGrade.find(studentName) != StudentGrade.end())
    {
        cout << endl;
        cout << studentName << "'s grade: " << StudentGrade[studentName] << endl;
   }
 else {
     cout << "Grade not found for " << studentName << endl;
    }

    
}

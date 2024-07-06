#include <iostream>
#include <string>

using namespace std;
//..............School Placement System for Basic Education Certificate Examination.............
int main()
{
    int EnglishLanguageGrade;
    int MathematicsGrade;
    int IntegratedScienceGrade;
    int ElectiveGradeONE;
    int ElectiveGradeTWO;
    int ElectiveGradeTHREE;

    cout << "********SELECTED SENIOR HIGH SCHOOLS********" << '\n';
    cout << "First Choice = Opoku Ware Senior High School" << '\n';
    cout << "Second Choice = Armed Forces Senior High School" << '\n';
    cout << "Third Choice = Kumasi Anglican Senior High School" << '\n';
    cout << "Fourth Choice = Sunyani Senior High School" << '\n';
    cout << "********************************************" << '\n';
    cout << endl;

    // Get user input for grades and determine senior high school.

    cout << "Enter Your English Language Grade: ";
    cin >> EnglishLanguageGrade;

    cout << "Enter Your Mathematics Grade: ";
    cin >> MathematicsGrade;

    cout << "Enter Integrated Science Grade: ";
    cin >> IntegratedScienceGrade;

    cout << "Enter Your First Best Elective Grade: ";
    cin >> ElectiveGradeONE;

    cout << "Enter Your Second Best Elective Grade: ";
    cin >> ElectiveGradeTWO;

    cout << "Enter Your Third Best Elective Grade: ";
    cin >> ElectiveGradeTHREE;

    // Calculate total grade
    int TotalGrade = EnglishLanguageGrade + MathematicsGrade + IntegratedScienceGrade + ElectiveGradeONE + ElectiveGradeTWO + ElectiveGradeTHREE;

    // Determine Senior High School based on total grade
    string SelectedSchool;

    if (TotalGrade >= 24 && TotalGrade <= 36)
    {
        SelectedSchool = "kukuom Senior High School";
    }
    else if (TotalGrade >= 15 && TotalGrade <= 23)
    {
        SelectedSchool = "Kumasi Senior High School";
    }
    else if (TotalGrade >= 10 && TotalGrade <= 14)
    {
        SelectedSchool = "Armed Forces Senior High School";
    }
    else if (TotalGrade >= 6 && TotalGrade <= 9)
    {
        SelectedSchool = "Opoku Ware School";
    }
    else
    {
        SelectedSchool = "Sunyani Senior High School";
    }

    // Display selected program
    cout << "Based on your BECE grades, you are eligible to go to " << SelectedSchool << endl;
    cout << "***********************CONGRATULATION ON YOUR ADMISSION!***********************";

    return 0;
}

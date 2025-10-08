#include <iostream>
#include <string>

using namespace std;

int main () {
    string SLN, name;
    float Quiz1_Prelim, Quiz2_Prelim, Quiz1_Midterm, Quiz2_Midterm, Quiz1_Final, Quiz2_Final;
    float Act_Prelim, Act_Midterm, Act_Final;
    float Exam_Prelim, Exam_Midterm, Exam_Final;
    float LMSGrade, F2FGrade, Total_Grade;
    float Passing_Grade = 75;

    // Info
    cout << "Enter SLN: ";
    getline(cin, SLN);
    cout << "Enter Full Name: ";
    getline(cin, name);

    // Grade inputs
    cout << "---Input LMS Grades---" << endl;
    cout << "Enter Quiz 1 (Prelim): ";
    cin >> Quiz1_Prelim;
    cout << "Enter Quiz 2 (Prelim): ";
    cin >> Quiz2_Prelim;
    cout << "Enter Quiz 1 (Midterm): ";
    cin >> Quiz1_Midterm;
    cout << "Enter Quiz 2 (Midterm): ";
    cin >> Quiz2_Midterm;
    cout << "Enter Quiz 1 (Final): ";
    cin >> Quiz1_Final;
    cout << "Enter Quiz 2 (Final): ";
    cin >> Quiz2_Final;
    
    cout << "---Input F2F Grades---" << endl;
    cout << "Enter Act (Prelim): ";
    cin >> Act_Prelim;
    cout << "Enter Act (Midterm): ";
    cin >> Act_Midterm;
    cout << "Enter Act (Final): ";
    cin >> Act_Final;

    cout << "---Input Major Exam Grades---" << endl;
    cout << "Enter Exam (Prelim): ";
    cin >> Exam_Prelim;
    cout << "Enter Exam (Midterm): ";
    cin >> Exam_Midterm;
    cout << "Enter Exam (Final): ";
    cin >> Exam_Final;

    // Calculations
    float TotalQuizGrade = (Quiz1_Prelim + Quiz2_Prelim + Quiz1_Midterm + Quiz2_Midterm + Quiz1_Final + Quiz2_Final) / 6;
    float TotalF2FGrade = (Act_Prelim + Act_Midterm + Act_Final) / 3;
    float TotalExamGrade = (Exam_Prelim + Exam_Midterm + Exam_Final) / 3;

    LMSGrade = (TotalQuizGrade * 0.5) + (TotalExamGrade * 0.5);
    F2FGrade = (TotalF2FGrade * 0.5) + (TotalExamGrade * 0.5);
    Total_Grade = (LMSGrade * 0.5) + (F2FGrade * 0.5);

    // Final Grade
    cout << "---Your Results---" << endl;
    cout << "Your Grade: " << Total_Grade << endl;
    cout << "Grade Status: ";
    if (Total_Grade >= Passing_Grade){
        cout << "Passed." << endl;
    } else {
        cout << "Failed." << endl;
    }

    return 0;
}
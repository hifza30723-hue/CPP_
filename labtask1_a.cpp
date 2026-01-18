#include <iostream>
#include <iomanip> // for setprecision
using namespace std;
int main() {
    float quiz, mid, finalexam, total, att;
    char grade;
    cout << "Enter student's quiz marks (out of 100): ";
    cin >> quiz;
    cout << "Enter Mid term Marks (out of 100): ";
    cin >> mid;
    cout << "Enter Final term Marks (out of 100): ";
    cin >> finalexam;
    cout << "Enter Student Attendance (%): ";
    cin >> att;
     total = (quiz * 0.2) + (mid * 0.3) + (finalexam * 0.5);
     // Assign grade based on total
    if (total > 90)
        grade = 'A';
    else if (total >= 80)
        grade = 'B';
    else if (total >= 70)
        grade = 'C';
    else if (total >= 60)
        grade = 'D';
    else
        grade = 'F';

    // Adjust grade based on attendance
    if (att < 75) {
        if (grade == 'A')
         grade = 'B';
        else if (grade == 'B') 
        grade = 'C';
        else if (grade == 'C')
         grade = 'D';
        else if (grade == 'D') 
        grade = 'F';
    }
     cout << fixed << setprecision(2); // show 2 decimals
    cout << "\nTotal Percentage = " << total;
    cout << "\nYour Grade is: " << grade << endl;
     return 0;
}
#include <iostream>
#include <fstream>
#include <vector>

int main() {
    int numClasses;
    double grade, total = 0;
    std::vector<double> grades;

    std::cout << "Enter the number of classes: ";
    std::cin >> numClasses;

    for (int i = 0; i < numClasses; i++) {
        std::cout << "Grade for class " << i + 1 << ": ";
        std::cin >> grade;
        grades.push_back(grade);
        total += grade;
    }

    double gpa = total / numClasses;
    std::cout << "Final GPA: " << gpa << std::endl;

    // Saving to a file
    std::ofstream outFile("report.txt");
    outFile << "Academic Report\n";
    outFile << "---------------\n";
    for (double g : grades) outFile << "Grade: " << g << "\n";
    outFile << "---------------\n";
    outFile << "Final GPA: " << gpa << "\n";
    outFile.close();

    std::cout << "Report saved to report.txt" << std::endl;
    return 0;
}
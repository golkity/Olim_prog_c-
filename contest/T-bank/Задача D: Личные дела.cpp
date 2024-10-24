#include "bits-stdc++.h"
using namespace std;
struct Student {
    string surname;
    string name;
    int class_number;
    char class_letter;
    string birth_date;
};

bool ok(const Student &a, const Student &b) {
    if (a.class_number != b.class_number) {
        return a.class_number < b.class_number;
    }
    if (a.class_letter != b.class_letter) {
        return a.class_letter < b.class_letter;
    }
    return a.surname < b.surname;
}

int main() {
    ios_base::sync_with_stdio(false);
    int N;
    cin >> N;

    vector<Student> students(N);

    for (int i = 0; i < N; i++) {
        string class_info;
        cin >> students[i].surname >> students[i].name >> class_info >> students[i].birth_date;

        students[i].class_number = stoi(class_info.substr(0, class_info.size() - 1));
        students[i].class_letter = class_info.back();
    }

    sort(students.begin(), students.end(), ok);

    for (const auto &student : students) {
        cout << student.class_number << student.class_letter << " "
             << student.surname << " " << student.name << " "
             << student.birth_date << endl;
    }

    return 0;
}

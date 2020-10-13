// I solved some problems of C++ from Hackerrank platform

//Class Object problem

class Student {
    private:
    int s[5];
    public:
    void input() {
        for (int i= 0;i<5;i++) {
            cin>>s[i];
        }
    }
    int calculateTotalScore() {
        int total = 0;
        for (int i= 0; i < 5; i++) {
            total += s[i];
        }
        return total;
    }
};
int main() {
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout << count;
    
    return 0;
}

//Struct Problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct Student{
    int age,standard;
    string first_name,last_name;

};


int main() {
    Student st;
    
    cin >> st.age >> st.first_name >> st.last_name >> st.standard;
    cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;
    
    return 0;
}


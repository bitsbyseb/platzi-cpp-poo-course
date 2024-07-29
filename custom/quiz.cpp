#include <iostream>
#include <string>
#include <vector>

using namespace std;
using vec_str = vector<string>;
struct question {
    string title;
    int correct_answer_index;
    vec_str *opts;
};
using vec_quest = vector<question>;

class Quiz
{
    string title;
    int correct_answer_index;
    vec_str *opts;

public:
    Quiz(string title, int correct_answer_index, vec_str *opts) : title(title), correct_answer_index(correct_answer_index), opts(opts) {}
    ~Quiz()
    {
        delete opts;
    }
    void printOptions()
    {
        for (int i = 0; i < opts->size(); i++)
        {
            cout << i << "." << opts->at(i) << endl;
        }
    }
    void exec()
    {
        int answer_index;
        while (true)
        {
            cout << title << endl;
            printOptions();
            cin >> answer_index;
            if (answer_index == correct_answer_index)
            {
                cout << "congratulations, you have chosen the right option" << endl;
                break;
            }
        }
    }
};

int main()
{
    string title = "which of them are a true programming language";
    vec_str options({"c++", "vscode", "windows", "linux"});
    int correct = 0;
    Quiz *test = new Quiz(title, correct, &options);
    test->exec();
}
#include <iostream>
#include <string>
#include <vector>

using namespace std;
using vec_str = vector<string>;
struct Question
{
    const string title;
    const int correct_answer_index;
    const vec_str *opts;
};
using vec_quest = vector<Question>;

class Quiz
{
    string game_title;
    vec_quest *questions;
    vector<bool> results;

public:
    Quiz(string title, vec_quest *questions) : game_title(title), questions(questions) {}
    ~Quiz()
    {
        delete this->questions;
    }
    void quiz()
    {
        int questions_size = questions->size();

        for (int i = 0; i < questions_size; i++)
        {
            int response_index;
            Question element = questions->at(i);
            cout << element.title << endl;
            print_question_options(element);
            cin >> response_index;

            response_index == element.correct_answer_index ? this->results.push_back(true) : this->results.push_back(false);

            if (i == questions_size)
            {
                break;
            }
            else
            {
                continue;
            }
        }
        print_results();
    }

private:
    void print_question_options(Question subject)
    {
        for (int i = 0; i < subject.opts->size(); i++)
        {
            cout << i << "." << subject.opts->at(i) << endl;
        }
    }
    void print_results()
    {
        int asserts = 0;
        int total = results.size();
        for (int i = 0; i < results.size(); i++)
        {
            if (results.at(i))
            {
                asserts++;
            }
        }
        cout << "your results are: " << asserts << "/" << total << endl;
    }
};

int main()
{
    vec_str options1 = {"Paris", "London", "Berlin", "Madrid"};
    vec_str options2 = {"3", "4", "5", "6"};
    vec_str options3 = {"Green", "Blue", "Red", "Yellow"};
    Question question1 = {"What is the capital of France?", 0, &options1};
    Question question2 = {"What is 2 + 2?", 1, &options2};
    Question question3 = {"What is the color of the sky on a clear day?", 1, &options3};

    vector<Question> questions = {question1, question2, question3};
    string title = "Who want to be millionaire";
    Quiz game_instance = Quiz(title, &questions);
    game_instance.quiz();
}

#include <iostream>

#include "Question.hpp"

#define NO_OF_QUESTIONS 3

int main()
{
	Question question1("Who am I?", "Jack", "Jim", "Jerry", "Josh", 4);

	question1.printQ();

	int userAnswer;

	std::cin >> userAnswer;

	question1.compAnswer(userAnswer);
}
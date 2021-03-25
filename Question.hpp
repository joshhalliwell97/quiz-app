#pragma once
#include <string>
#include <iostream>
#include <vector>

#define ANSWERS 5

class Question 
{
public:
	Question(std::string p_q, std::string p_a1, std::string p_a2, 
		std::string p_a3, std::string p_a4, int p_cor);
	
	void printQ();

	void compAnswer(int p_ans);

private:
	std::vector<std::string> questionAndAnswers;
	int correct;
};
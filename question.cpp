#include "Question.hpp"

Question::Question(std::string p_q, std::string p_a1, std::string p_a2, 
		std::string p_a3, std::string p_a4, int p_cor)
     {
       questionAndAnswers.push_back(p_q);
       questionAndAnswers.push_back(p_a1);
       questionAndAnswers.push_back(p_a2);
       questionAndAnswers.push_back(p_a3);
       questionAndAnswers.push_back(p_a4);
       correct = p_cor;
     }

void Question::printQ()
{
    for (int i = 0; i < questionAndAnswers.size(); i++)
    {
        std::cout << questionAndAnswers.at(i) << std::endl;
    }
    std::cout << "Enter answer: " << std::endl;
}

void Question::compAnswer(int p_ans)
{
    
}
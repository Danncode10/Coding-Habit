from data import question_data
from question_model import Question
from quiz_brain import QuizBrain

question_bank = []

for i in range(len(question_data)):
    new_question = Question(question_data[i]["text"], question_data[i]["answer"])
    question_bank.append(new_question)

quiz = QuizBrain(question_bank)

while(quiz.still_has_questions()):
    quiz.next_question()
    quiz.evaluate_answer()
    quiz.showScore()


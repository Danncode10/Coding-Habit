class QuizBrain:

    def __init__(self, q_list):
        self.question_number = 0
        self.question_list = q_list
        self.score = 0

    def still_has_questions(self):
        if(len(self.question_list) > self.question_number):
            return True
        else:
            return False

    def next_question(self):
        current_question = self.question_list[self.question_number]
        answer = input(f"Q. {self.question_number + 1}: {current_question.question} (True/False): ")
        self.my_answer = answer.capitalize()
        self.question_number += 1

    def evaluate_answer(self):
        correct_answer = self.question_list[self.question_number]
        correct_answer = correct_answer.answer

        answer = self.my_answer

        if (answer == correct_answer):
            self.score += 1
            print("Correct")
        else:
            print("Wrong")

    def showScore(self):
        print(f"Score: {self.score}")



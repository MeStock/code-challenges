using namespace std;
// Kristen is a contender for valedictorian of her high school. She wants to know how many students (if any) have scored higher than her in the 5 exams given during this semester.

// Create a class named Student with the following specifications:

// An instance variable named scores to hold a student's 5 exam scores.
// A void input() function that reads 5 integers and saves them to .
// An int calculateTotalScore() function that returns the sum of the student's scores.
class Student {
    private:
        int scores[5];
    public:
        void input(){
            for(int i = 0; i < 5; i++){
                cin >> scores[i];
            }
        }

        int calculateTotalScore(){
            int sum;
            for(int i = 0; i < 5; i++){
                sum+= scores[i];
            }
            return sum;
        }
};
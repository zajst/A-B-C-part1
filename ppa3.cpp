/*Question      : Write your code to find whether the number is a happy number or not (for max 10 cycles).
int number      : The number to be determined whether it is happy or not
int finalNumber : Store the resultant value in this variable
int cycle_no    : Store the number of iterations done to determine whether the 'number' is happy or not */
void detectHappy(int number, int &finalNumber, int &cycle_no) {

    //Write your solution code below this line
    int rest;
    cycle_no=10;
    for (int i=1; i<11; i++) {
        int result = 0;

        do {
             rest=number%10;
            result=result + rest*rest;
            number=(number-rest)/10;
        } while (number != 0);
        number = result;
        if (number==1) {
            cycle_no=i;
            break;
        }
    }
    finalNumber=number;
}



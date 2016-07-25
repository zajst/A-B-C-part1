/* Question: Find the sum of squares of individual digits of a number 'sqdnumber' and store the sum in variable 'sqdNumber_result'. 
int sqdnumber: Original number
int sqdNumber_result: Store the resultant in this variable */
void squaredSum(int sqdnumber,int &sqdNumber_result) {

    //Write your solution code below this line
    int rest = 0;
    int result =0;
    
    do {
        rest=sqdnumber%10;
        result=result + rest*rest;
        sqdnumber=(sqdnumber-rest)/10;
    } while (sqdnumber != 0);
    sqdNumber_result = result;

}

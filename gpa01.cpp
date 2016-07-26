/* Question:  You are required to write code that does the following:-

1. Find out the sum of the squares of the digits of the rpm
2. Multiply the number obtained in (1) by 323
3. Do a cyclic right shift of digits of the rpm i.e. 
    if Number is 1234, after cyclic right shift, the number will be 4123. 
    Thereafter, take the last two digits of the number obtained just now, and add it to the number obtained in point 2. Thus, obtaining a new rpm value.
4. Do these steps till the number of years are 10 or the harddisk has reached the maximum RPM

long long int rpm: Original value of RPM
int years: Store the number years that have elapsed
long long int finalRPM: Store the modified value of RPM i.e. the final of RPM */

void solutionRPM(long long int rpm, int &years, long long int &finalRPM) {

    //Write your solution code below this line
    int rest, A;
    long long int number, B, maks;
    maks=8*rpm;
    years=10;
    
    for (int i=1; i<11; i++) {
        int result = 0, digit=0;
        number=rpm;
        
        do {
            rest=number%10;
            result=result + rest*rest;
            number=(number-rest)/10;
            digit++;
        } while (number != 0);
        
        A=result * 323;
        result=1;
        for(int j=1; j<digit; j++) {
            result = result*10;
        }
        B=rpm/10 + (rpm%10)*result;
        
        rpm = A + B%100;
        
        if (rpm > maks) {
            years = i;
            break;
        }
    }
    finalRPM=rpm;

}

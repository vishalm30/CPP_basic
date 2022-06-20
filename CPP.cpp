// CPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cmath> /*this will we gonna use math function*/


//void sayHi(std::string name, int age) { /*parameter given to function*/
//
//    std::cout << "Hello " << name << " you are "<< age << "\n";
//}

//double cube(double num) {
//    return num * num * num;
//}

//int getMax(int num1, int num2) {
//    int result;
//
//    if (num1 > num2) {
//        result = num1;
//    }
//    else {
//        result = num2;
//    }
//    return result;
//}

//int getMax(int num1, int num2, int num3) {
//    int result;
//
//    if (num1 >= num2 && num1 >= num3) {
//        result = num1;
//    }
//    else if (num2 >= num1 && num2 >= num3) {
//        result = num2;
//    }
//    else {
//        result = num3;
//    }
//    return result;
//}

//std::string getDayOfWeek(int dayNum) {
//    std::string dayName;
//
//    switch (dayNum) {
//    case 0:
//        dayName = "Sunday";
//        break;
//    case 1:
//        dayName = "Monday";
//        break;
//    case 2:
//        dayName = "Tueday";
//        break;
//    case 3:
//        dayName = "Wednesday";
//        break;
//    case 4:
//        dayName = "Thrusday";
//        break;
//    case 5:
//        dayName = "Friday";
//        break;
//    case 6:
//        dayName = "Satday";
//        break;
//    default:
//        dayName = "Invalid Day Number";
//    }
//}


//int power(int baseNum, int powNum) {
//    int result = 1;
//
//    for (int i = 0; i < powNum; i++) {
//        result = result * baseNum;
//    }
//
//    return result;
//}

int main()
{   
    /*shift + ctlr + / = comment all an un comment all*/


    /*std::cout << "Hello World! \n";*/

    /*Variables*/

    /*std::string characterName = "Tom";
    int characterAge;
    characterAge = 50;

    std::cout << "There once was a man named "<< characterName <<" \n" ;
    std::cout << "He was "<< characterAge <<" years old\n";

    characterName = "Mike";

    std::cout << "He liked the name " << characterName <<"\n" ;
    std::cout << "But did not like being "<< characterAge <<" \n" ;*/
    
    
    /*Data Type*/

    //char grade = 'A';
    //std::string phrase = "Academy";
    //int age = 50; 
    //double gpa = 2.3;
    //bool isMale = false;

    //std::cout << grade << "\n";
    
    /*Working eith strings*/

    /*std::string phrase = "Academy";*/

    //std::cout << phrase.length() << "\n"; /*print length of string*/
    //std::cout << phrase[0] << "\n"; /*print letter of index*/

    //phrase[0] = 'B'; /*replace the string index number letter*/

    //std::cout << phrase << "\n";
    
    //std::cout << phrase.find("Aca", 0); /*find the sting and at what index*/


    //std::cout << phrase.substr(2, 3) << "\n"; /*can take part of the string to searchg*/
    
    /*To save the searched string*/
    
    /*std::string phrasesub;  
    phrasesub = phrase.substr(2, 3);
    std::cout << phrasesub << "\n";*/
       
    /*Working with numbers*/
    
    /*int wnum = 5;
    double dnum = 5.5;*/

    //wnum++; /*this will add plus 1*/
    //wnum+=80 /*this will add 80 */



    //std::cout << pow(2, 5); /*multiples as power*/
    //std::cout << sqrt(36); /*gives square root*/
    //std::cout << round(36.6); /*gives round number*/
    //std::cout << ceil(36.1); /*next higest whole number*/
    //std::cout << floor(36); /*round down to whole number*/
    //std::cout << fmax(1, 0 ); /*gives higest number*/
    //std::cout << fmax(1, 0); /*gives lowest number*/



    /*getting user input*/

    //int age; /*this can also take double and we can also use char*/
    //std::cout << "Enter your age: ";
    //std::cin >> age; /*this is used for input*/

    //std::cout << "You are " << age << " years old";

    /*std::string name;
    std::cout << "Enter your name: ";
    getline(std::cin, name);

    std::cout << "Hello " << name;*/

    /*Building a Calculator*/

    /*double num1, num2;
    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    std::cout << num1 + num2;*/

    /*Building a Mad Libs Game*/

    /*std::string color, pluralNoun, celebrity;

    std::cout << "enter a color: ";
    getline(std::cin, color);

    std::cout << "enter a plural noun: ";
    getline(std::cin, pluralNoun);

    std::cout << "enter a celebity: ";
    getline(std::cin, celebrity);

    std::cout << "Roses are " << color << "\n";
    std::cout << pluralNoun << " are blue \n";
    std::cout << "I love " << celebrity << "\n";*/
    
    

    /*Arrays*/
    
    /*int luckyNums[] = { 4, 8, 15, 16, 23, 42 };*/

    //std::cout << luckyNums[0]; /*to print the number at index*/

    //int luckyNums[20]; /*number of elements in the array will be 20*/
    //luckyNums[0] = 19; /*change the number at that index*/

    //std::cout << luckyNums[0];

    /*Functions*/
    
    //sayHi("Mike", 60); /*this tell all the code to execute all the code inside this function
    //               If parameter is given you have to pass the value*/
    //sayHi("Vishal", 25);
    
    /*Return Statement*/

  
    /*std::cout << cube(5.0);*/

    /*If statements*/

    /*bool isMale = true;
    bool isTall = true;*/

    /*if (isMale && isTall) {  //will print first if both are true
        std::cout << "You are a tall make";
    }
    else {
        std::cout << "Ypu are not male";
    }*/

    //if (isMale || isTall) { /*will print first if either is true*/
    //    std::cout << "You are a tall make";
    //}
    //else {
    //    std::cout << "Ypu are not male";
    //}

    /*if (isMale && isTall) {
        std::cout << "You are a tall make";
    }
    else if (isMale && !isTall) {
        std::cout << "You ara a short male";
    }
    else if (!isMale && isTall) {
        std::cout << "You are tall female";
    }
    else {
        std::cout << "You are not male and not tall";
    }*/
    

    /*more if statements*/
    
    /*std::cout << getMax(2, 5, 10);*/
    
    /*Building a better calculator*/

    /*int num1, num2;
    char op;

    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter operator: ";
    std::cin >> op;

    std::cout << "Enter second number: ";
    std::cin >> num2;
    int result;
    if (op == '+') {
        result = num1 + num2;
    }
    else if (op == '-') {
        result = num1 - num2;
    }
    else if (op == '*') {
        result = num1 * num2;
    }
    else if (op == '/') {
        result = num1 / num2;
    }
    else {
        std::cout << "Invalid Operator";
    }
    std::cout << result;*/
    
    /*switch statements*/
    
    /*std::cout << getDayOfWeek(0);*/
    
    /*While loops*/
    
    /*int index = 1;
    while (index <= 5) {
        std::cout << index << "\n";
        index++;
    }*/

    /*do while loops*/
    
    /*int index = 0;
    do {
        std::cout << index << "\n";
        index++;
    } while (index <= 5);*/

    /*Building a Guessing Game*/

    /*int secretNum = 7;
    int guess = 0;
    int guessCount = 0;
    int guessLimit = 3;
    bool outOfGuesses = false;

    while (secretNum != guess && !outOfGuesses) {
        if (guessCount < guessLimit) {
            std::cout << "Enter guess: ";
            std::cin >> guess;
            guessCount++;
        }
        else {
            outOfGuesses = true;
        }
    }
    if (outOfGuesses) {
        std::cout << "You Lose!";
    }
    else {
        std::cout << "You win!";
    }
    

    return 0;*/

    /*for loops*/

    /*int index = 1;
    while (index <= 5) {
        std::cout << index << "\n";
        index++;
    }*/


    /*for (int i = 1; i <= 5; i++) {

        std::cout << i << "\n";

    }*/

    //int nums[] = { 1, 2, 5, 7, 3 };
    //for (int i = 0; i < 5; i++) {  /*i is less than number of elements in array*/
    //    std::cout << nums[i] << "\n";
    //}

    /*Exponent Function*/

    /*std::cout << power(4, 2);*/

    /*2d array and nested loops*/

    //int numberGrid[3][2] = { {1,2},{3,4},{5,6} };

    ///*std::cout << numberGrid[0][1] << "\n"; *//*first is for number of array and second is for number of elements*/
    //for (int i = 0; i < 3; i++) { /*this for loop for all the array elements*/
    //    for (int j = 0; j < 2; j++) { /*for all of element inside array*/
    //        std::cout << numberGrid[i][j];
    //    }
    //    std::cout << "\n";

    //}

    /*comments*/

    //int age = 19;
    //int *pAge = &age;  /*use *pAge so that it will get the input instead of address*/
    //double gpa = 2.7;
    //double *pGpa = &gpa;
    //std::string name = "Mike";
    //std::string *pName = &name;

    //std::cout << *pAge;
    

    return 0;

}



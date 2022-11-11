/*
PIC 10A Homework 5, vecfunc.cpp
Author: Moris Gomez
UID: 705089833
Discussion Section: 5B
Date: 11/11/2022
*/
#include <iostream>
#include <vector>
using namespace std;

bool isfactor(int n, const vector<int> & vec) //return value is a boolean type.
{
    bool flag = false;
    for (int counter = 0; counter < vec.size(); counter++) //loops depending on size of vector.
    {
        if (vec[counter] % n == 0) //arithmetic logic for factor check.
        {
            flag = true; //updates flag bool.
        }
        else
        {
            flag = false; //updates flag bool.
            break; //no need to continue looping, so break.
        }
    } //closes for loop.
    return flag;
} //closes function.
/*
///////////////////////////////
///////////////////////////////
///////////////////////////////
///////////////////////////////
///////////////////////////////
///////////////////////////////
*/
int myMinimum(const vector<int> & vec) //vectors will have a reference value & return value is an int type.
{
        int smallest = vec[0];
        for (int counter = 1; counter < vec.size(); counter++)
        //we start the counter at 1 bc we start comparing at index 1.
        {
            if (smallest < vec[counter]) //if true...
            {
                smallest = smallest;
                //if the value is smaller than the new one, then that value is the smallest b/w the two.
            }
            else
            {
                smallest = vec[counter];
                //if false, smallest is now the original.
            }
        }//closes outer loop.
        return smallest;
} //closes function.
/*
///////////////////////////////
///////////////////////////////
///////////////////////////////
///////////////////////////////
///////////////////////////////
///////////////////////////////
*/
void myPermutation(vector<int> & vec) //no return value.
{
    for (int counter = 0; counter < vec.size(); counter++)
    {
        int lastElement = vec[vec.size() - 1];
        vec[vec.size() - 1] = vec[counter];
        vec[counter] = lastElement;
    } //closes for loop.
} //closes function.
/*
///////////////////////////////
///////////////////////////////
///////////////////////////////
///////////////////////////////
///////////////////////////////
///////////////////////////////
*/
void mySimplify(vector<int> & vec) //no return value.
{
    int maxFactor = myMinimum(vec); //stores the max possible factor among elements.
    for (int i = maxFactor; i >= 1; i--) //start at max and decrement until 1.
    {
        if (isfactor(i, vec)) //factor check.
        {
            for (int counter = 0; counter < vec.size(); counter++) //this divides each element.
            {
                vec[counter] = vec[counter] / i; //if true, divide the index by i and print out.
                break;
            } //closes nested for loop.
        } //closes if statement.
    } //closes statement.
} //closes function.

// DO NOT MODIFY THE CODE BELOW THIS LINE
//-----------------------------------------------
void print_vector(vector<int> & vec){
    for (int e : vec){
        cout << e << " ";
    }
    cout << endl;
}

int main(){
    int input;
    vector<int> myvector;
    cout << "Please input a sequence of positive integers, ending with Q:" << endl;
    while (cin >> input){
        myvector.push_back(input);
    }
    int min_element = myMinimum(myvector);
    cout << "min element: " << min_element << endl;
    myPermutation(myvector);
    print_vector(myvector);
    mySimplify(myvector);
    print_vector(myvector);
    return 0;
}

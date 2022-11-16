# vectors-functions-assignment
Practice running vectors through multiple functions.
<br>
<br>
Problem 1: In vecfunc.cpp, implement the following functions.
<br>
<br>
bool isfactor(int n, const vector<int> & vec)
<br>
<br>
int myMinimum(const vector<int> & vec)
<br>
<br>
void myPermutation(vector<int> & vec)
<br>
<br>
void mySimplify(vector<int> & vec)
<br>
<br>
where
<br>
<br>
• (20pt) isfactor returns a bool type indicating whether n is a common factor of all
the elements in vec, in other words, all the elements in vec are multiples of n. If so,
return true, otherwise return false.
<br>
<br>
• (20pt) myMinimum returns the minimum element in vec.
<br>
<br>
• (20pt) myPermutation applies a special permutation to the numbers: moving the last
element to the beginning. For example, a vector 1 2 3 will become 3 1 2 after the
function call.
<br>
<br>
• (20pt) mySimplify modifies the vector by dividing each element by their maximum
common factor. For example, a vector 3 6 9 will become 1 2 3 after the function call.
Hint: the function isfactor and myMinimum may help you find the maximum common
factor.

AIM OF THE EXPERIMENT : Finding an element position in an array using linear search without recursion.

DESCRIPTION: linear search or sequential search is a method of finding element within a list or array.It sequentially checks each element in an array until the match is found,
if the match is not found it checks till the end of the array and returns element is not found.If the match is found then it returns the position of the element in the array.

Step-by-Step Procedure :
First declare an array of size 10  i.e, a[10] = { 10,6,8,15,20,3,14,99,66,30 }.

Declare the key value to be found.

Intialize i = 0 .

using for loop check each element in the array with the key value by incrementing i value.

if the element is present,print the position of the element to the output.

if the element is not present,print the element is not present to the output.

OUTPUT :

 Output 1 ( key element = 66 ):
  The key element= 66 is made to match with every element in the array ,when it reaches the ninth element it matches and returns the position of the key element in the array i.e,
  8 .
  
 Output 2 ( key element = 0 ):
  The key element = 0 is made to match with every element in the array , the element is not found in the array . The search ends when it reaches the last element of the array and
  returns the outout as "the element is not present".
  
  

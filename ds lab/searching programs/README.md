
AIM OF THE EXPERIMENT: To find the position of an element in an array by using linear search ,binary search with and without recursion.

DESCRIPTION:linears search is method of finding element within a list or array it sequentially checks every element in an array.In binary search array should be a sorted array.
Binary search begins by comparing an element in the middle value with the key element.If the element is matched then it returns the position of the value.If it does not match it 
checks whether it is greater or lesser than the middle value.If it is greater than the middle value the search continues to upper half of the array . If it is lesser than the
miidle value the search continues with lower half of the array .By doing this the algorithm eliminates the half in which the target value cannot lie in each element.

STEP BY STEP PROCEDURE OF LINEAR SEARCH WITH RECURSION:

1 . Given array is = { 10,6,8,15,20,3,14,99,66,30}
2 . key element for output 1 is 66 and key element for output 2 is 0.
3 . we declare a function RecursiveLinear_search.
4 . we initialize a for loop and check if the middle value is equal to the key value by recursively calling function.
5 . when key = element in the array then it returns the index value of the element .
6 .if it is not equal it goes to the next value of array.
7. if the element is not found in the array it returns that the element is not present in the array .

###OUTPUT OBTAINED:

![output 1](2020-08-13(15).png , 2020-08-13(10).png)
![output 2](2020-08-13(6).png)

STEP BY STEP PROCEDURE OF BINARY SEARCH WITH AND WITHOUT RECURSION:

1.given array is to be sorted first. array = {3,6,8,10,14,15,20,30,66,99}
2.key element for output 1 is 6,for output 2 is 14,for output 3 is 99.
3.here the low position is 0 and high position is 9.
4.we need to find the mid value as mid = ( low + high) / 2
5.compare the mid value with the key value by calling the user function declared.
6.then there will be 3 cases . 
case1 : (key = mid )
case 2: ( key < mid )
case 3: ( key > mid )
7.continue this process till the element is found .
8.If the element is not found print the is not found .

  output 1 : 
  key element is 6 then mid = (0+9) /2 = 4.5 i.e,4  here key < mid element so,high = mid -1.continue this until the element is matched with the mid element .for key element 6 the position 
  is found at 1.
  
  output2 :
  key element is 14 then mid = 4 here key = mid element . the element is found at middle position ,it returns the position of the key value.
  
  output3:
  key element is  99 then mid = 4 here key > mid element.So low = mid + 1.Continue this until the element is matched with the mid element . key  element 99 is 
  found at index 9.
  
  ###OUTPUT OF BINARY SEARCH :
  
   ![output 1](2020-08-13(12).png)
   ![output 2](2020-08-13(13).png)
   ![output 3](2020-08-13(14).png)
  
  ### OUTPUT OF RECURSIVE BINARY SEARCH:
  
  ![output 1](2020-08-13(16).png , 2020-08-13(17))
  ![output 2](2020-08-13(18).png)
  ![output 3](2020-08-13(19).png)
  









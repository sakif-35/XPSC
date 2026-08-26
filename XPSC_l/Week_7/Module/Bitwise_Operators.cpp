Time complexity for all the operators is O(1) since the operator operates on all the bits at the same time

AND - '&'  (at least one 0 -> 0)
OR - '|'   (at least one 1 -> 1)
NOT - '~'  (1->0, 0->1)
X-OR - '^' (odd number of 1 -> 1, even number of 1 -> 0)

Left shift - '<<'  (all the bits move to the left and the right empty bits become 0)
in each left shift the value increases to double 
(7 << 1) = 14
(14 << 1) = 28
So, (7 << 2) = 28
For (x << n) , time complexity is supposed to be O(n) but modern CPU uses barrel shifter so it is O(1)

Right shift - '>>' (all the bits move to the right and the left empty bits become 0)
in each right shift the value decreases to half
(28 >> 1) = 14
(14 >> 1) = 7
(7 >> 1) = 3
(3 >> 1) = 1
(1 >> 1) = 0
So, (28 >> 5) = 0
For (x << n) , time complexity is supposed to be O(n) but modern CPU uses barrel shifter so it is O(1)


*** (1 << n) = pow(2,n)
    (1 << 0) = 1
    (1 << 1) = 2
    (1 << 2) = 4
    (1 << 3) = 8
    (1 << 4) = 16
Integer can hold maximum number of 2^31-2^32. So if the value of n is bigger than 31 or 32 u should declare the variable as long long or can perform the following type casting : (1LL << 45)


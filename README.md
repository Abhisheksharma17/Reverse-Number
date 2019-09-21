# Reverse-Number
The reversed sum of two reversed numbers. Omit any leading zeros in the output

Reversed number is a number the order of digits is reversed. The first digit becomes last and vice versa. Note that all the leading zeros are omitted. That means if the number ends with a zero, the zero is lost by reversing (e.g. 1200 gives 21). Also, note that the reversed number never has any trailing zeros.

Jones needs to calculate with reversed numbers. Your task is to add two reversed numbers and output their reversed sum. Of course, the result is not unique because any particular number is a reversed form of several numbers (e.g. 21 could be 12, 120 or 1200 before reversing). Thus we must assume that no zeros were lost by reversing (e.g. assume that the original number was 12).

Input:
The input consists of N cases. The first line of the input contains only positive integer N. Then follow the cases. Each case consists of exactly one line with two positive integers separated by space. These are the reversed numbers you are to add.

Constraints:
1 <= N <= 10^5
1 <= a <= 10^18
1 <= b <= 10^18

Output:
The reversed sum of two reversed numbers. Omit any leading zeros in the output

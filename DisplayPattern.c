/*
 Problem statement :
 Write a program which accept number from user and display below pattern:
 
 Input :    6
Output :   2    4   6   8   10  12
 
 Input :      9
 Output :   2   4   6   8   10  12  14  16  18
 
 */

/*
        iNo -> 9

_____________________________________
Loop            1   2   3    4    5    6    7   8     9
_____________________________________
Output :       2   4   6    8   10  12  14  16  18
_____________________________________
  
 Concllusion

 Display the value -> iCnt * 2

 */
 
 #include<stdio.h>
 
 void DisplayPattern(int iValue)
 {
    int iCnt = 0;
	
	for(iCnt = 1;iCnt <= iValue; iCnt++)
	{
	   printf("%d\t",iCnt*2);
	}
 }
 
 int main()
 {
   int no = 0;
   
   printf("Enter The Number \n");
   scanf("%d",&no);
   
   DisplayPattern(no);
 return 0;
 }
 
 
 /*
 
 output
 
 Enter The Number
2
2       4
D:\ProgramTopicWise\LB\PatternPrinting\Pattern6>myexe
Enter The Number
6
2       4       6       8       10      12
D:\ProgramTopicWise\LB\PatternPrinting\Pattern6>myexe
Enter The Number
9
2       4       6       8       10      12      14      16      18
D:\ProgramTopicWise\LB\PatternPrinting\Pattern6>myexe
Enter The Number
10
2       4       6       8       10      12      14      16      18      20

*/
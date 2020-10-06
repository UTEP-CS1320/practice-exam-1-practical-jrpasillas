#include <stdio.h>
int main_screen(void) {
 int sectionNum1;
 int sectionNum2;
 int sectionNum3;
 
 //Read phone number in sections (AAA-BBB-CCCC)
 printf("Enter area code and phone number in this form AAA BBB CCCC\n");
 scanf("%d", &sectionNum1);
 scanf("%d", &sectionNum2);
 scanf("%d", &sectionNum3);
 //Determine if numbers are true, if so, call is accepted
 if ((sectionNum1 == 915) || (sectionNum1 == 617) || (sectionNum1 == 718) || (sectionNum1 == 661)) 
 {
     if ((sectionNum2 == 253) || (sectionNum2 == 834) || (sectionNum2 == 112)) 
    {
         if ((sectionNum3 == 9899) || (sectionNum3 == 3581))
        {
            printf("OK!\n");
        }
    }
 }
 //Determine if numbers are true, if so, call is blocked
     if ((sectionNum3 >= 1000) || (sectionNum3 <= 1999)) 
 {
         printf("BLOCKED.\n");
 }
 //The last check automatically blocks phone numbers that don't pass the prior tests
 else {
     printf("BLOCKED.\n");
 }
	return 0;
}

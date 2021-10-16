//write a program to check whether an alphabet is vowel or consonant using switch case.
#include<stdio.h>
#include<stdlib.h>
void main(){
    char ch;
    printf("\nenter any alphabet\n");
    scanf("%c",&ch);
    
    switch (ch)
    {
    case 'a':
        printf("vowel"); 
        break; 
    case 'e':
        printf("vowel"); 
        break; 
    case 'i':
        printf("vowel"); 
        break; 
    case 'o':
        printf("vowel"); 
        break; 
    case 'u':
        printf("vowel"); 
        break; 
    case 'A':
        printf("vowel"); 
        break; 
    case 'E':
        printf("vowel"); 
        break; 
    case 'I':
        printf("vowel"); 
        break; 
    case 'O':
        printf("vowel"); 
        break;
    case 'U':
        printf("vowel"); 
        break;              
        
    default:
        printf("consonant");
        break;
    }
    
    
    

}
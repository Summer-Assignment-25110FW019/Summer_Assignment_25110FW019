// WAP to check anagram string
#include <stdio.h>
#include <string.h>
int main(){
    char str1[100],str2[100];
    int i,j,len1,len2,flag=1;
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    len1=strlen(str1);
    len2=strlen(str2);
    if(len1!=len2){
        printf("Not Anagram");
        return 0;
    }
    for(i=0;i<len1;i++){
        int count1=0,count2=0;
        for(j=0;j<len1;j++){
            if(str1[i]==str1[j])
                count1++;
                if(str1[i]==str2[j])
                count2++;
        }
        if(count1!=count2){
            flag=0;
            break;
        }
    }
    if(flag==1)
        printf("Anagram Strings");
    else
        printf("Not Anagram");
        return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void input_string(char *a){
    scanf("%s",a);
}
void str_reverse(char *str, char *rev_str){
    int n=strlen(str);
    for(int i=n-1;i>=0;i--){
        rev_str[n-1-i]=str[i];
    }
}
void output(char *a, char *reverse_a)
{
    printf("%s",reverse_a);
}


int main(){
    char *str = malloc(sizeof(char)*1000);
    char *rev_str=malloc(sizeof(char)*1000);
    input_string(str);
    str_reverse(str,rev_str);
    output(str,rev_str);
    return 0;
}

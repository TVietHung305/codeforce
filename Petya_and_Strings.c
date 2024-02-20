#include<stdio.h>
#include<ctype.h>

int check_str(char* str1, char* str2){
	int i = 0;
	while(str1[i] != '\0' && str2[i] != '\0'){
		char s1 = tolower(str1[i]);
		char s2 = tolower(str2[i]);
		if(s1 < s2){
			return -1;
		}else if(s1 > s2){
			return 1;
		}
		i++;
	}
	return 0;
}
int main(){
	char str1[101], str2[101];
	scanf("%s", &str1);
	scanf("%s", &str2);
	int sum1 = 0, sum2 = 0;
	printf("%d", check_str(str1, str2));
	return 0;
}

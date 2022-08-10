#include<stdio.h>
#include<string.h>
int main() {
 int counter1[] = {0, 0, 0, 0,};
 int counter2[] = {0, 0, 0, 0,};
 int flag = 0; 

char s1[] = "dbb cccccaacb cdbababdcdcdab dcdad";
char s2[] = "bbbcc bdddccccad cdbbaaacaccdabdd";

for(int i= 0; i < strlen(s1); i++){
  if( s1[i] == 'a'){
    counter1[0]++;
}if( s1[i] == 'b'){
    counter1[1]++;
}if( s1[i] == 'c'){
    counter1[2]++;
}if( s1[i] == 'd'){
    counter1[3]++;
}
}
for(int j= 0; j < strlen(s2); j++){
  if( s2[j] == 'a'){
    counter2[0]++;
}if( s2[j] == 'b'){
    counter2[1]++;
}if( s2[j] == 'c'){
    counter2[2]++;
}if( s2[j] == 'd'){
    counter2[3]++;
}
}

for (int b = 0; b < sizeof(counter1) / sizeof(int); b++) {
      if (counter1[b] != counter2[b]) {
        flag = 1;
        break;
      }
        }

      
      if (flag == 1) {
        printf("Not Anagram!");
      }
      else {
        printf("Anagram!");
      }
    }
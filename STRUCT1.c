#include <stdio.h>
#include<stdlib.h>
#include<string.h>

  struct student {
   int age;
   char name [30],prenom[30];
};
int main() {
   struct student st;
   printf("\nenter name :");
    scanf("%s",st.name);
   printf("\nenter prenom :");
    scanf("%s",st.prenom);
    printf("\nenter age :");
    scanf("%d",&st.age);
   printf("\nname :%s\nprenom :%s\nage :%d ",st.name,st.prenom,st.age);

    return 0;
}

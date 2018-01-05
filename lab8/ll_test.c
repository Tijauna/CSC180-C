#include <stdio.h>
#include "ll.h"

int main(void) {
   llnode *root = NULL;
   int r=0;
   int i=0;
   int z = 0;
llnode *list1 = NULL; 
llnode *list2 = NULL;
llnode *list3 = NULL;

llnode *temp = NULL;

r = ll_add_to_tail(&list3, 5);
r = ll_add_to_tail(&list3, 1);
r = ll_add_to_tail(&list3, 7);
r = ll_add_to_tail(&list3, 4);

r = ll_add_to_tail(&list2, 40);
r = ll_add_to_tail(&list2, 50);


r = ll_add_to_tail(&list1, 10);
r = ll_add_to_tail(&list1, 20);
r = ll_add_to_tail(&list1, 30);
r = ll_add_to_tail(&list1, 40);



r = ll_add_to_tail(&list1, 50);

r = ll_add_to_tail(&list1, 60);

r = ll_add_to_tail(&list1, 70);

r = ll_add_to_tail(&list1, 80);

r = ll_print(list1);
   printf("List A\n");
   r=ll_add_to_tail(&root,100);
   r=ll_add_to_tail(&root,200);
   r=ll_add_to_tail(&root,300);

   
temp = list1;



while(temp->next != NULL){

temp = temp->next;
}

printf ("Reverse: \n");
while (temp!= NULL){

printf("%d ",temp->val);
temp = temp->prev;
}

printf("del from tail done\n");
r = ll_del_by_value(&list1, 50);

temp = list1;
while(temp->next != NULL){

temp = temp->next;
}

printf ("Reverse: \n");
while (temp!= NULL){

printf("%d ",temp->val);
temp = temp->prev;
}





for(i=0;i<10;i=i+1){
      r=ll_add_to_tail(&root,i*100);
   }
   r=ll_print(root);
   
  /*z = ll_find_by_value(root, 99999); 
   printf ("%d\n",z);*/

printf("del from tail testing");

z = ll_del_from_tail(&root);
z = ll_del_from_tail(&root);
z = ll_del_from_tail(&root);
r = ll_print(root);

z = ll_del_from_head(&root);
r = ll_print(root);

printf ("Del by value:\n");
/*z = ll_del_by_value(&root, 600);
r = ll_print(root);*/

/*   r = ll_free(root);*/

   printf("List B\n");
   root=NULL;
   r=ll_add_to_tail(&root,100);
   r=ll_add_to_tail(&root,200);
   r=ll_add_to_tail(&root,300);
   for(i=0;i<10;i=i+1){
      r=ll_add_to_head(&root,i*100);
   }
   r=ll_print(root);
   r=ll_free(root);
   printf("Testing ll_insert_in_order\n");
   root=NULL;
   r=ll_add_to_tail(&root,100);
   r=ll_add_to_tail(&root,200);
   r=ll_add_to_tail(&root,300);
   printf("before\n");
   r=ll_print(root);
   r=ll_insert_in_order(&root,99);
   printf("after-a\n");
   r=ll_print(root);
   r=ll_insert_in_order(&root,101);
   printf("after-b\n");
   r=ll_print(root);
   r=ll_insert_in_order(&root,201);
   printf("after-c\n");
   r=ll_print(root);
   r=ll_insert_in_order(&root,301);
   printf("after-d\n");
   r=ll_print(root);




temp = root;



while(temp->next != NULL){

temp = temp->next;
}

printf ("Reverse: \n");
while (temp->prev != NULL){

printf("%d ",temp->val);
temp = temp->prev;
}



   r=ll_free(root);




z = ll_concat(&list2, &list1);
r = ll_print(list2);

r = ll_sort(&list3);
r = ll_print(list3);

r = ll_free(list1);
r = ll_free(list2);
r = ll_free(list3);
   return 0;
}

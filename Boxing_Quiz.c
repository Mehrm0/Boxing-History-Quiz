/*A quiz about the history of the heavy weight boxing, with correction and assessment. There are 20 questions.*/ 
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>



/*********************************
*        Putting Struct
*********************************/
struct block
{
char get;
bool res;  
int note;
};
/**************************
*Function Declarations   
*************************/
void getf();
/*******************************
*     The Main Function
********************************/
int main()
{
char cont;
puts("*************************************************************************");
puts("Wellcome to Boxing History quiz. Please press the `d' key to continue.");
puts("*************************************************************************");
scanf("%c",&cont);
if(cont=='d')
{
getf();
}
else if(cont!='d')
{
puts("Incorrect button, going out....");
exit(0);
}
}


/****************************************************************************
*The getf Function to get and correct each question and print the result    *
******************************************************************************/

void getf()
{

struct block *block1,*block2,*block3,*block4,*block5,*block6,*block7,*block8,*block9,*block10,*block11,*block12,*block13;
struct block *block14,*block15,*block16,*block17,*block18,*block19,*block20;

block1=(struct block*)malloc(sizeof(struct block));
block2=(struct block*)malloc(sizeof(struct block));
block3=(struct block*)malloc(sizeof(struct block));
block4=(struct block*)malloc(sizeof(struct block));
block5=(struct block*)malloc(sizeof(struct block));
block6=(struct block*)malloc(sizeof(struct block));
block7=(struct block*)malloc(sizeof(struct block));
block8=(struct block*)malloc(sizeof(struct block));
block9=(struct block*)malloc(sizeof(struct block));
block10=(struct block*)malloc(sizeof(struct block));
block11=(struct block*)malloc(sizeof(struct block));
block12=(struct block*)malloc(sizeof(struct block));
block13=(struct block*)malloc(sizeof(struct block));
block14=(struct block*)malloc(sizeof(struct block));
block15=(struct block*)malloc(sizeof(struct block));
block16=(struct block*)malloc(sizeof(struct block));
block17=(struct block*)malloc(sizeof(struct block));
block18=(struct block*)malloc(sizeof(struct block));
block19=(struct block*)malloc(sizeof(struct block));
block20=(struct block*)malloc(sizeof(struct block));

/***************************************************/
puts("1)Who was a bareknuckle boxing champion?");
puts("a)Johnson");
puts("b)Dempsy");
puts("c)Tunny");
puts("d)Sulivan");
puts("---------------------------------------");
scanf("%c", &block1->get);
scanf("%c", &block1->get);


(block1->get=='d')?
block1->res=true:false;

(block1->res==true)?
block1->note=5:0;

printf("Your score is %d out of 5\n",block1->note);
puts("------------------------------------------");
/*2*/
puts("******************************************");
puts("2)Who was the first black Champion of the world?");
puts("a)Langford");
puts("b)Johnson");
puts("c)Quarry");
puts("d)Louis");
puts("---------------------------------------");
scanf("%c", &block2->get);
scanf("%c", &block2->get);


(block2->get=='b')?
block2->res=true:false;

(block2->res==true)?
block2->note=5:0;

printf("Your score is %d out of 10\n",(block1->note)+(block2->note));

puts("**************************************");
/*3*/
puts("**************************************");

puts("3)Which boxer in 1920s was nicknamed Kid Blackie?");
puts("a)Tunney");
puts("b)Dempsey");
puts("c)Jeffries");
puts("d)Johnson");
puts("---------------------------------------");
scanf("%c", &block3->get);
scanf("%c", &block3->get);


(block3->get=='b')?
block3->res=true:false;

(block3->res==true)?
block3->note=5:0;

printf("Your score is %d out of 15\n",(block1->note)+(block2->note)+(block3->note));
puts("------------------------------------------");


puts("******************************************");
/*4*/
puts("******************************************");

puts("4)Which fight is called The Long Count Fight?");
puts("a)Johnson vs Jeffries");
puts("b)Johnson vs Longford");
puts("c)Dempsey vs Tunney");
puts("d)Louis Carnera");
puts("---------------------------------------");
scanf("%c", &block4->get);
scanf("%c", &block4->get);


(block4->get=='c')?
block4->res=true:false;

(block4->res==true)?
block4->note=5:0;

printf("Your score is %d out of 20\n",(block1->note)+(block2->note)+(block3->note)+(block4->note));


puts("**************************************");
/*5*/
puts("**************************************");

puts("5)Which of these punchers defeated Primo Carnera?");
puts("a)Max Baer");
puts("b)Langford");
puts("c)Zora Folley");
puts("d)Lewis");
puts("---------------------------------------");
scanf("%c", &block5->get);
scanf("%c", &block5->get);


(block5->get=='a')?
block5->res=true:false;

(block5->res==true)?
block5->note=5:0;

printf("Your score is %d out of 25\n",(block1->note)+(block2->note)+(block3->note)+(block4->note)+(block5->note));


puts("**************************************");
/*6*/
puts("**************************************");

puts("6)Which boxer was nicknamed Cinderella Man?");
puts("a)Joe Louis");
puts("b)Lennox Lewis");
puts("c)James Braddock");
puts("d)Leotis Martin");
puts("---------------------------------------");
scanf("%c", &block6->get);
scanf("%c", &block6->get);


(block6->get=='c')?
block6->res=true:false;

(block6->res==true)?
block6->note=5:0;

printf("Your score is %d out of 30\n",(block1->note)+(block2->note)+(block3->note)+(block4->note)+(block5->note)+(block6->note));


puts("**************************************");
/*7*/
puts("**************************************");

puts("7)Who was the chalenger in the fight vs Max Baer?");
puts("a)Williams");
puts("b)Carpentier");
puts("c)Braddock");
puts("d)Carnera");
puts("---------------------------------------");
scanf("%c", &block7->get);
scanf("%c", &block7->get);


(block7->get=='c')?
block7->res=true:false;

(block7->res==true)?
block7->note=5:0;

printf("Your score is %d out of 35\n",(block1->note)+(block2->note)+(block3->note)+(block4->note)+(block5->note)+(block6->note)+block7->note);

puts("**************************************");
/*8*/
puts("**************************************");

puts("8)Which boxer won the most titles during 1930s and 1940s?");
puts("a)Louis");
puts("b)Lewis");
puts("c)Braddock");
puts("d)Baer");
puts("---------------------------------------");
scanf("%c", &block8->get);
scanf("%c", &block8->get);


(block8->get=='a')?
block8->res=true:false;

(block8->res==true)?
block8->note=5:0;


printf("Your score is %d out of 40\n",(block1->note)+(block2->note)+(block3->note)+(block4->note)+(block5->note)+(block6->note)+(block7->note)+(block8->note));

puts("**************************************");
/*9*/
puts("**************************************");

puts("9)Who defeated Joe Wallcott to become the world champion?");
puts("a)Marciano");
puts("b)Louis");
puts("c)Liston");
puts("d)Williams");
puts("---------------------------------------");
scanf("%c", &block9->get);
scanf("%c", &block9->get);


(block9->get=='a')?
block9->res=true:false;

(block9->res==true)?
block9->note=5:0;

printf("Your score is %d out of 45\n",(block1->note)+(block2->note)+(block3->note)+(block4->note)+(block5->note)+(block6->note)+(block7->note)+(block8->note)+(block9->note));

puts("**************************************");
puts("**************************************");
/*10*/
puts("**************************************");

puts("10)Who succeded Patterson as the world champion?");
puts("a)Ali");
puts("b)Foreman");
puts("c)Charles");
puts("d)Liston");
puts("---------------------------------------");
scanf("%c", &block10->get);
scanf("%c", &block10->get);


(block10->get=='d')?
block10->res=true:false;

(block10->res==true)?
block10->note=5:0;
printf("Your score is %d out of 50\n",(block1->note)+(block2->note)+(block3->note)+(block4->note)+(block5->note)+(block6->note)+(block7->note)+(block8->note)+(block9->note)+(block10->note));

puts("**************************************");
puts("**************************************");
/*11*/
puts("**************************************");

puts("11)Which Boxer put an end to Liston's championship in one of the biggest upsets of all times?");
puts("a)Foreman");
puts("b)Frazier");
puts("c)Ali");
puts("d)Bonavena");
puts("---------------------------------------");
scanf("%c", &block11->get);
scanf("%c", &block11->get);


(block11->get=='c')?
block11->res=true:false;

(block11->res==true)?
block11->note=5:0;

printf("Your score is %d out of 55\n",(block1->note)+(block2->note)+(block3->note)+(block4->note)+(block5->note)+(block6->note)+(block7->note)+(block8->note)+(block9->note)+(block10->note)+(block11->note));

puts("**************************************");
puts("**************************************");
/*12*/
puts("**************************************");

puts("12)Who defeated Ali for the first time? ");
puts("a)Foreman");
puts("b)Williams");
puts("c)Frazier");
puts("d)Holmes");
puts("---------------------------------------");
scanf("%c", &block12->get);
scanf("%c", &block12->get);


(block12->get=='c')?
block12->res=true:false;

(block12->res==true)?
block12->note=5:0;

printf("Your score is %d out of 60\n",(block1->note)+(block2->note)+(block3->note)+(block4->note)+(block5->note)+(block6->note)+(block7->note)+(block8->note)+(block9->note)+(block10->note)+(block11->note)+(block12->note));

puts("**************************************");
puts("**************************************");
/*13*/
puts("**************************************");

puts("13)Which two boxers fought 'The Rumble in the Jungle?'")
;
puts("a)Ali and Foreman");
puts("b)Frazier and Ali");
puts("c)Norton and Ali");
puts("d)Norton and Holmes");
puts("---------------------------------------");
scanf("%c", &block13->get);
scanf("%c", &block13->get);


(block13->get=='a')?
block13->res=true:false;

(block13->res==true)?
block13->note=5:0;

printf("Your score is %d out of 65\n",(block1->note)+(block2->note)+(block3->note)+(block4->note)+(block5->note)+(block6->note)+(block7->note)+(block8->note)+(block9->note)+(block10->note)+(block11->note)+(block12->note)+(block13->note));

puts("**************************************");

puts("**************************************");
/*14*/
puts("**************************************");

puts("14)Which boxer was the world champion?");
puts("a)Shavers");
puts("b)Bonavena");
puts("c)Holmes");
puts("d)Quarry");
puts("---------------------------------------");
scanf("%c", &block14->get);
scanf("%c", &block14->get);


(block14->get=='c')?
block14->res=true:false;

(block14->res==true)?
block14->note=5:0;
printf("Your score is %d out of 70\n",(block1->note)+(block2->note)+(block3->note)+(block4->note)+(block5->note)+(block6->note)+(block7->note)+(block8->note)+(block9->note)+(block10->note)+(block11->note)+(block12->note)+(block13->note)+(block14->note));

puts("**************************************");

puts("**************************************");
/*15*/
puts("**************************************");

puts("15)Who was Holmes defeated by?");
puts("a)Tyson");
puts("b)Norton");
puts("c)Martin");
puts("d)Frazier");
puts("---------------------------------------");
scanf("%c", &block15->get);
scanf("%c", &block15->get);


(block15->get=='a')?
block15->res=true:false;

(block15->res==true)?
block15->note=5:0;

printf("Your score is %d out of 75\n",(block1->note)+(block2->note)+(block3->note)+(block4->note)+(block5->note)+(block6->note)+(block7->note)+(block8->note)+(block9->note)+(block10->note)+(block11->note)+(block12->note)+(block13->note)+(block14->note)+(block15->note));

puts("**************************************");

puts("**************************************");

puts("**************************************");
/*16*/
puts("**************************************");

puts("16)Which boxer didn't win Tyson?");
puts("a)Douglas");
puts("b)Holyfield");
puts("c)Lewis");
puts("d)Williams");
puts("---------------------------------------");
scanf("%c", &block16->get);
scanf("%c", &block16->get);


(block16->get=='d')?
block16->res=true:false;

(block16->res==true)?
block16->note=5:0;


printf("Your score is %d out of 80\n",(block1->note)+(block2->note)+(block3->note)+(block4->note)+(block5->note)+(block6->note)+(block7->note)+(block8->note)+(block9->note)+(block10->note)+(block11->note)+(block12->note)+(block13->note)+(block14->note)+(block15->note)+(block16->note));

puts("**************************************");

puts("**************************************");
/*17*/
puts("**************************************");

puts("17)Where were Klitschkos from?");
puts("a)Russia");
puts("b)Ukrine");
puts("c)US");
puts("d)England");
puts("---------------------------------------");
scanf("%c", &block17->get);
scanf("%c", &block17->get);


(block17->get=='b')?
block17->res=true:false;

(block17->res==true)?
block17->note=5:0;


printf("Your score is %d out of 85\n",(block1->note)+(block2->note)+(block3->note)+(block4->note)+(block5->note)+(block6->note)+(block7->note)+(block8->note)+(block9->note)+(block10->note)+(block11->note)+(block12->note)+(block13->note)+(block14->note)+(block15->note)+(block16->note)+(block17->note));

puts("**************************************");

puts("**************************************");
/*18*/
puts("**************************************");

puts("18)Which boxer retired without defeat? ");
puts("a)Marciano");
puts("b)Ali");
puts("c)Johnson");
puts("d)Patterson");
puts("---------------------------------------");
scanf("%c", &block18->get);
scanf("%c", &block18->get);


(block18->get=='a')?
block18->res=true:false;

(block18->res==true)?
block18->note=5:0;

printf("Your score is %d out of 90\n",(block1->note)+(block2->note)+(block3->note)+(block4->note)+(block5->note)+(block6->note)+(block7->note)+(block8->note)+(block9->note)+(block10->note)+(block11->note)+(block12->note)+(block13->note)+(block14->note)+(block15->note)+(block16->note)+(block17->note)+(block18->note));

puts("**************************************");

puts("**************************************");
/*19*/
puts("**************************************");

puts("19)Which boxer did defend his title the most?");
puts("a)Louis");
puts("b)Lewis");
puts("c)Foreman");
puts("d)Ali");
puts("---------------------------------------");
scanf("%c", &block19->get);
scanf("%c", &block19->get);


(block19->get=='a')?
block19->res=true:false;

(block19->res==true)?
block19->note=5:0;

printf("Your score is %d out of 95\n",(block1->note)+(block2->note)+(block3->note)+(block4->note)+(block5->note)+(block6->note)+(block7->note)+(block8->note)+(block9->note)+(block10->note)+(block11->note)+(block12->note)+(block13->note)+(block14->note)+(block15->note)+(block16->note)+(block17->note)+(block18->note)+(block19->note));

puts("**************************************");

puts("**************************************");
/*20*/
puts("**************************************");

puts("20)Who had the best reach to hight ratio?");
puts("a)Fury");
puts("b)Liston");
puts("c)Marshal");
puts("d)Lewis");
puts("---------------------------------------");
scanf("%c", &block20->get);
scanf("%c", &block20->get);


(block20->get=='b')?
block20->res=true:false;

(block20->res==true)?
block20->note=5:0;

printf("Your score is %d out of 100\n",(block1->note)+(block2->note)+(block3->note)+(block4->note)+(block5->note)+(block6->note)+(block7->note)+(block8->note)+(block9->note)+(block10->note)+(block11->note)+(block12->note)+(block13->note)+(block14->note)+(block15->note)+(block16->note)+(block17->note)+(block18->note)+(block19->note)+(block20->note));



puts("**************************************");
puts("End of exam, your note is:");
puts("**************************************");


int score=(block1->note)+(block2->note)+(block3->note)+(block4->note)+(block5->note)+(block6->note)+(block7->note)+(block8->note)+
(block9->note)+(block10->note)+(block11->note)+(block12->note)+(block13->note)+(block14->note)+(block15->note)+(block16->note)+(block17->note)+(block18->note)+(block19->note)+(block20->note);
printf("%d out of 100\n", score);

/*************************************************
*                  Assessment           
***************************************************/

printf("\n\nAssessment of your result:\n");
if(score>=80 && score <=100)
   {
   puts("\nCongratulation, it's perfect");
   }
else if(score>=65 && score<80)
   {
   puts("pretty good, but not perfect.\n");
   }
else if( score>=50 && score <65)
  {
   puts("Just average, it can be better.");
  }
else if(score>=30 && score<50)
    {                    
   puts("Weak! please study and try it again later"
); 

    
}                                                 

else if(score<30)
  {
   puts("Totally unacceptable, please try it again later.");
  }
 

free(block1);
free(block2);
free(block3);
free(block4);
free(block5);
free(block6);
free(block7);
free(block8);
free(block9);
free(block10);
free(block11);
free(block12);
free(block13);
free(block14);
free(block15);
free(block16);
free(block17);
free(block18);
free(block19);
free(block20);

}







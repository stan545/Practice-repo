import java.util.Scanner;
import java.util.Random;

public class Quizmaster {

  
    public static void main(String[] args) {
        // TODO code application logic here
      int numOne, numTwo, result, answer, questionNumber, score;
      String selectOperator = "";
      String answerVal;
      score = 0;
      result = 0;
      
        
      Scanner input = new Scanner(System.in);
      Random randy = new Random();
      Random randOperator = new Random();
      int operator = randOperator.nextInt(3);
      
      System.out.println("Welcome To Quiz Arena \n I am QuizBoss and I will be drilling you with math questions \n PLEASE, NOTE THAT YOU ONLY HAVE 7 SECS TO ATTEMPT EACH QUESTION");
      System.out.println("");
      System.out.println("How many questions would you like to attempt?: ");
      questionNumber = input.nextInt();
      
      for(int i=0; i<questionNumber; i++){
          numOne = randy.nextInt(100);
          numTwo = randy.nextInt(100);
          

          switch(operator){
              case 0: selectOperator = "+";
              result = numOne + numTwo;
              break;
              
              case 1: selectOperator = "-";
              result = numOne - numTwo;
              break;
              default: 
                  throw new IllegalStateException("Invalid operator: "+ operator);
              
          }
          
          System.out.println("");
          System.out.println("What is " + numOne + selectOperator + numTwo + " ?");
//          answer = input.nextInt();
//          answerVal = Integer.toString(answer);
         long start = System.currentTimeMillis();
         long wait = 7000;
        
         
         while(System.currentTimeMillis() - start < wait && !input.hasNextInt()){
             
         }
         
//         try{
//             Thread.sleep(7000);
//         }catch(InterruptedException e){
//             Thread.currentThread().interrupt();
//         }

         if(input.hasNextInt()){
             answer = input.nextInt();
             answerVal = Integer.toString(answer);
 
            if(answer == result){
               System.out.println("Correct!");
               System.out.println("");
               score++;      
               break;
            }else{
               System.out.println("Incorrect! The right answer is: " + result);
                System.out.println("");
            }
        }else{
           System.out.println("Time Up! The correct answer is: " + result);
           input.next();
        }
         
         
             
      }
      System.out.println(" Congratulations for finishing! \n Your total score is: " + score + "/" + questionNumber);
        
        
    }
    
}

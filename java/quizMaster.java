public class quizMaster{
	public static void main(String[] args){
		String[] Operator = {"+", "-"};
		int operatorLength = Operator.length;
		int result = 0;

		int count = 0;
		while (count < 10){
			int randOp = (int) (Math.random() * operatorLength);
			int Operand1 = (int) (Math.random() * 100);
			int Operand2 = (int) (Math.random() * 100);
			String quizOp = Operator[randOp];
			if (quizOp == "+"){
			System.out.println(Operand1 + " " + Operator[randOp] + " " + Operand2);
			result = (Operand1 + Operand2);
			System.out.println(result);

			}
			else if (quizOp == "-"){
			System.out.println(Operand1 + " " + Operator[randOp] + " " + Operand2);
			result = (Operand1 - Operand2);
			System.out.println(result);
			}
		count++;
		}
	}
}

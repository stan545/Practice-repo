public class PhraseOMatic {
	public static void main (String[] args){
		String[] wordListOne = {"Frontend", "Backend", "Android developer", "IOS developer", "Data Analyst", "Data Scientist", "Cloud Engineer", "Software Engineer", "DevOps Engineer"};
		String[] wordListTwo = {"Web Design", "Web Development", "Graphic Design", "Product Design" , "Product Management", "Cloud Computing", "DevOps Engineering", "Android Development", "IOS App Development"};
		String[] wordListThree = {"Java", "Python", "Javascript", "C#","C++", "Dart", "Angular", "ReactNative", "NodeJs", "ReactJs"};

		//Find out how many words are in each list
		int oneLength = wordListOne.length;
		int twoLength = wordListTwo.length;
		int threeLength = wordListThree.length;

		// Generate three random numbers
		int rand1 = (int) (Math.random() * oneLength);
		int rand2 = (int) (Math.random() * twoLength);
		int rand3 = (int) (Math.random() * threeLength);

		// Build a Phrase
		String phrase = wordListOne[rand1] + " " + wordListTwo[rand2] + " " + wordListThree[rand3];

		//print out phrase
		System.out.println("Here is what we've got ... " + phrase); 
	}
}

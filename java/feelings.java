public class feelings{
    public static void main (String[] args){

	    String[] subject = {"I", "You", "We"};
	    String[] feeling = {"hate", " love "};
	    String[] object = {"you", "me"};

        int dict1, dict2 , dict3, count;
	
	count = 0;


	while (count != 15)
	{
		dict1 = (int) (Math.random() * subject.length);
		dict2 = (int) (Math.random() * feeling.length);
		dict3 = (int) (Math.random() * object.length);

		System.out.print(subject[dict1] + " " + feeling[dict2] + " " + object[dict3]);
		count++;
		System.out.println();
	}

    }
}
        

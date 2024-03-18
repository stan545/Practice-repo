class Movie {
	String title;
	String genre;
	int rating;

	void playit(){
		System.out.println("Playing " + title);
	}
}

public class MovieTestDrive{
	public static void main(String[] args){
		Movie one = new Movie();
		one.title = "Things fall apart";
		one.genre = "Tragicomedy";
		one.rating = 10;

		Movie two = new Movie();
		two.title = "The gods must be crazy";
		two.genre = "Comedy";
		two.rating = 125;
		
		Movie three = new Movie();
		three.title = "Mr Bones";
		three.genre = "Comedy";
		three.rating = 200;
		three.playit();
	}
}


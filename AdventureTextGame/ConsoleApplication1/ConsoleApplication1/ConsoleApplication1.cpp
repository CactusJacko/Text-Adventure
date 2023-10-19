#include <iostream>
#include <string>
#include <map>

using namespace std;

//variables
void Inventory();
void Wrong();
void shouts();

int main()
{

	// Welcomes the player into the game and rembers their name
	//cout << "WELCOME PLAYER TO ECHOES OF THE FOREST" << endl;
	string Title = R"(

 ________   ______   __    __   ______    ______          ______   ________                    
/        | /      \ /  |  /  | /      \  /      \        /      \ /        |                   
$$$$$$$$/ /$$$$$$  |$$ |  $$ |/$$$$$$  |/$$$$$$  |      /$$$$$$  |$$$$$$$$/                    
$$ |__    $$ |  $$/ $$ |__$$ |$$ |  $$ |$$ \__$$/       $$ |  $$ |$$ |__                       
$$    |   $$ |      $$    $$ |$$ |  $$ |$$      \       $$ |  $$ |$$    |                      
$$$$$/    $$ |   __ $$$$$$$$ |$$ |  $$ | $$$$$$  |      $$ |  $$ |$$$$$/                       
$$ |_____ $$ \__/  |$$ |  $$ |$$ \__$$ |/  \__$$ |      $$ \__$$ |$$ |                         
$$       |$$    $$/ $$ |  $$ |$$    $$/ $$    $$/       $$    $$/ $$ |                         
$$$$$$$$/  $$$$$$/  $$/   $$/  $$$$$$/   $$$$$$/         $$$$$$/  $$/                          
                                                                                               
                                                                                               
                                                                                               
 ________  __    __  ________        ________  ______   _______   ________   ______   ________ 
/        |/  |  /  |/        |      /        |/      \ /       \ /        | /      \ /        |
$$$$$$$$/ $$ |  $$ |$$$$$$$$/       $$$$$$$$//$$$$$$  |$$$$$$$  |$$$$$$$$/ /$$$$$$  |$$$$$$$$/ 
   $$ |   $$ |__$$ |$$ |__          $$ |__   $$ |  $$ |$$ |__$$ |$$ |__    $$ \__$$/    $$ |   
   $$ |   $$    $$ |$$    |         $$    |  $$ |  $$ |$$    $$< $$    |   $$      \    $$ |   
   $$ |   $$$$$$$$ |$$$$$/          $$$$$/   $$ |  $$ |$$$$$$$  |$$$$$/     $$$$$$  |   $$ |   
   $$ |   $$ |  $$ |$$ |_____       $$ |     $$ \__$$ |$$ |  $$ |$$ |_____ /  \__$$ |   $$ |   
   $$ |   $$ |  $$ |$$       |      $$ |     $$    $$/ $$ |  $$ |$$       |$$    $$/    $$ |   
   $$/    $$/   $$/ $$$$$$$$/       $$/       $$$$$$/  $$/   $$/ $$$$$$$$/  $$$$$$/     $$/    

)";

	cout << Title;
	cout << "what is your name" << endl;
	string name;
	cin >> name;

	cout << "Welcome " + name << endl;

	// Start of the game
	
	// IDEAS
	//could be can you remeber what your name is, adds you into the story more

	cout << "you wake in a forest, however you dont know how you got here, all you know is that you must escape the gloomy of darkness" << endl;
	cout << "you look to your LEFT and see some trees with a narrow dirt path, however on your RIGHT you see a path with some warped trees, what way will you go?" << endl;
	string DecisionOne;
	cin >> DecisionOne;

	if (DecisionOne == "LEFT") {
		cout << "You have gone down the narrow dirt path" << endl;
		cout << "You see a" << endl;
	}

	else if (DecisionOne == "RIGHT") {
		cout << "You have gone down the path with the warped trees" << endl;
	}

	else {
		Wrong();
	}


}


// Inventory is where the inventory will be held for the player, this can then be changed.
void Inventory() {
	map<string, int>storage = {
		{"Key", 0},
		{"TNT", 0}
	};
	

	
	//use this example to change the value of the key and the TNT
	//cars[0] = "Ferrari";
	//cout << "The first car is now: " << cars[0] << endl;
}

// shouts the players name for a random amount of times
void shouts(); {
	for (int i = 0; i < 5 i++) {
		cout << name << endl;
	}
	}
	
}


//Displayed if a player enters a wrong command
void Wrong() {
	cout << "not a valid command, please either choose LEFT or RIGHT" << endl;
}
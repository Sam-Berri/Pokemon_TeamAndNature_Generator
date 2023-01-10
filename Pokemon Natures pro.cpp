#include <iostream>
#include <cstdlib>
#include <vector>




std::string Nature(int, std::string);



int main() {

	std::vector <std::string> C_pokemon = { "Charmander", "Togpie", "Oddish", "dratini","Gastly", "Cubone", "Vulpix", "Sableye"};

	std::vector <std::string> R_pokemon = { "Charmeleon", "Shuckle", "Pikachu", "Pigioto", "Butterfree", "Croconok", "Syther"};

	std::vector <std::string> U_pokemon = { "Charizard", "Golem", "Dragonite", "Loucario", "Gengar","Machamp", "Exadrill"};

	std::vector <std::string> L_pokemon = { "Lugia", "Dialga", "Regirock", "Registeel", "Lateos", "Rayquarzar", "Deoxys" };




	srand(time(NULL));

	/*int N_selector = std::rand() % 23 + 1;
	std::string nature;*/
	std::string nature;


	std::cout << C_pokemon[std::rand() % 7];
	std::cout << "\n";
	std::cout << Nature(std::rand() % 23 + 1, "");
	std::cout << "\n\n";

	std::cout << R_pokemon[std::rand() % 7];
	std::cout << "\n";
	std::cout << Nature(std::rand() % 23 + 1, "");
	std::cout << "\n\n";

	std::cout << U_pokemon[std::rand() % 7];
	std::cout << "\n";
	std::cout << Nature(std::rand() % 23 + 1, "");
	std::cout << "\n\n";

	std::cout << L_pokemon[std::rand() % 7];
	std::cout << "\n";
	std::cout << Nature(std::rand() % 23 + 1, "");
	std::cout << "\n\n";


}

std::string Nature(int, std::string) {

	std::string nature;
	int selector = std::rand() % 23 + 1;




	if (selector == 1) {
		nature = "Adamant";

	}

	else if (selector == 2) {
		nature = "Bold";

	}

	else if (selector == 3) {
		nature = "Bashful";

	}

	else if (selector == 4) {
		nature = "Brave";

	}

	else if (selector == 5) {
		nature = "Calm";

	}

	else if (selector == 6) {
		nature = "Careful";

	}

	else if (selector == 7) {
		nature = "Docile";

	}

	else if (selector == 8) {
		nature = "Gentle";

	}

	else if (selector == 9) {
		nature = "Hardy";

	}

	else if (selector == 10) {
		nature = "Hasty";

	}

	else if (selector == 11) {
		nature = "Impish";

	}

	else if (selector == 12) {
		nature = "Jolly";

	}

	else if (selector == 13) {
		nature = "Lax";

	}

	else if (selector == 14) {
		nature = "Lonely";

	}
	else if (selector == 15) {
		nature = "Mild";

	}

	else if (selector == 16) {
		nature = "Modest";


	}

	else if (selector == 17) {
		nature = "Naive";

	}

	else if (selector == 18) {
		nature = "Naughty";

	}

	else if (selector == 19) {

		nature = "Quiet";

	}

	else if (selector == 20) {
		nature = "Quirky";

	}

	else if (selector == 21) {
		nature = "Rash";

	}

	else if (selector == 22) {
		nature = "Relaxed";

	}

	else if (selector == 23) {
		nature = "Sassy";

	}
	else {
		std::cout << "Error";
	}

	return nature;

	std::cout << "Error";
}

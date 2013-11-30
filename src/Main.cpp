#include "gtest/gtest.h"
#include "SelectableStoryPoint.h"

std::vector<SelectableStoryPoint*> story;

int storyLength = 5;
int storyVariations = 3;

std::string storyPoints[] = {
		"A dragon appears!", 		"A wolf appears!",			"A negro appears!",
		"You slash it!", 			"You rape it!", 			"You free it!",
		"It runs!",					"It's dying!",					"It rapes you!",
		"Your mother intervenes!",	"Your father intervenes!",	"Your dog intervenes!",
		"It's not very effective!",	"It stops!",				"It continues, but faster!"
};

void cleanUp();

void readInStory()
{
	for (int i = 0; i < storyLength; i++)
	{
		SelectableStoryPoint temp;
		for (int j = 0; j < 3; j++)
		{
			temp.AddStoryPoint(storyPoints[(storyVariations * i) + j]);
		}

		story.push_back(new SelectableStoryPoint(temp));
	}
}

void printRandomStory()
{
	std::cout << "You are in your village!" << std::endl;

	for (unsigned int i = 0; i < story.size(); i++)
	{
		std::cout << (*story[i])[rand() % storyVariations] << std::endl;
	}

	std::cout << "Movie over, motherfucker!" << std::endl;
}

int main(int argc, char *argv[])
{
//	::testing::InitGoogleTest(&argc, argv);
//
//	return RUN_ALL_TESTS();

	srand(time(NULL));

	readInStory();

	std::string input = "\n";


	while(input == "\n")
	{
		printRandomStory();

		std::cout << std::endl  << "Another story?" << std::endl;
//		std::cin >> input;
//		std::cin.ignore();

		input = std::cin.get();

	}

	cleanUp();


	return 0;
}


void cleanUp()
{
	for (unsigned int i = 0; i < story.size(); i++)
	{
			delete story[i];
	}
}

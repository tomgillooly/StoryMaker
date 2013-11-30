#include "gtest/gtest.h"
#include "SelectableStoryPoint.h"

int main(int argc, char *argv[])
{
//	::testing::InitGoogleTest(&argc, argv);
//
//	return RUN_ALL_TESTS();

	srand(time(NULL));

	SelectableStoryPoint storyPoint1;
	storyPoint1.AddStoryPoint("A dragon appears!");
	storyPoint1.AddStoryPoint("A wolf appears!");
	storyPoint1.AddStoryPoint("A negro appears!");

	SelectableStoryPoint storyPoint2;

	storyPoint2.AddStoryPoint("You kill it!");
	storyPoint2.AddStoryPoint("You rape it!");
	storyPoint2.AddStoryPoint("You free it!");

	std::cout << "You are in your village!" << std::endl;
	std::cout << storyPoint1[rand() % 3] << std::endl;
	std::cout << storyPoint2[rand() % 3] << std::endl;
	std::cout << "Movie over, motherfucker!" << std::endl;

	return 0;
}

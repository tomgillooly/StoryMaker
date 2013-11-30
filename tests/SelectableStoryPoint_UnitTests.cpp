#include "gtest/gtest.h"

#include <string>
#include <vector>
#include "SelectableStoryPoint.h"

class SelectableStoryPointTests : public ::testing::Test
{
protected:
	SelectableStoryPoint *sp;
	void setup()
	{
	}

	void tear_down ()
	{
	}

public:
	SelectableStoryPointTests()
	{
		std::vector<std::string> strings;
		strings.push_back("point1");
		strings.push_back("point2");
		strings.push_back("point3");

		sp = new SelectableStoryPoint(strings);
	}

	~SelectableStoryPointTests()
	{
		delete sp;
	}
};

TEST_F(SelectableStoryPointTests, GetSizeReturnsNumberofStoryPointsToSelectFrom)
{
	ASSERT_EQ(3, sp->GetSize());
}


TEST_F(SelectableStoryPointTests, SquareBracketsOverloadReturnString)
{
	std::string expected = "point1";
	ASSERT_EQ(expected, (*sp)[0]);
	expected = "point2";
	ASSERT_EQ(expected, (*sp)[1]);
	expected = "point3";
	ASSERT_EQ(expected, (*sp)[2]);
}

TEST_F(SelectableStoryPointTests, CanAddNewPoint)
{
	sp->AddStoryPoint("point4");

	ASSERT_EQ(4, sp->GetSize());
	ASSERT_EQ("point4", (*sp)[3]);
}

/*
 * StoryPointPrinter.h
 *
 *  Created on: 30/11/2013
 *      Author: Cody
 */

#ifndef SELECTABLESTORYPOINT_H_
#define SELECTABLESTORYPOINT_H_

#include <string>
#include <vector>

class SelectableStoryPoint
{
	std::vector<std::string> storyPoints;
public:
	SelectableStoryPoint(const std::vector<std::string> newStoryPoints)
	{
		storyPoints = newStoryPoints;
	};


	SelectableStoryPoint()
	{
	};

	std::string operator[](int index)
	{
		return storyPoints[index];
	}

	int GetSize()
	{
		return storyPoints.size();
	}

	void AddStoryPoint(std::string newStoryPoint)
	{
		storyPoints.push_back(newStoryPoint);
	}
};



#endif /* SELECTABLESTORYPOINT_H_ */

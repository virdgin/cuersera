/*Greed is a dice game played with five six-sided dice. Your mission, should you choose to accept it,
 is to score a throw according to these rules. You will always be given an array with five six-sided dice values.

 Three 1's => 1000 points
 Three 6's =>  600 points
 Three 5's =>  500 points
 Three 4's =>  400 points
 Three 3's =>  300 points
 Three 2's =>  200 points
 One   1   =>  100 points
 One   5   =>   50 point
A single die can only be counted once in each roll. For example, a given "5"
 can only count as part of a triplet (contributing to the 500 points) or as a single 50 points,
  but not both in the same roll.

Example scoring*/
#include <vector>

int score(const std::vector<int> &dice)
{
  int result[7] = {};
  for (auto i : dice)
  {
    result[i]++;
  }
  return result[1] / 3 * 1000 + result[1] % 3 * 100 + result[2] / 3 * 200 +
         result[3] / 3 * 300 + result[4] / 3 * 400 + result[5] / 3 * 500 +
         result[5] % 3 * 50 + result[6] / 3 * 600;
}
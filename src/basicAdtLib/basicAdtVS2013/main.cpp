#include <iostream>
#include <Training/basicAdt/basicAdt.hpp>
#include <Training/basicAdt/stringOperations.hpp>
#include <Training/basicAdt/matrixOperations.hpp>

#include <vector>


int main() {
  using basicAdt::AllUnique;
  using basicAdt::Reverse;
  using basicAdt::RemoveDuplicate;
  using basicAdt::IsPermutation;
  using basicAdt::encodeSpacesStringNoFindNoInsert;
  using basicAdt::encodeSpacesStringFind;
  using basicAdt::compressWord;
  using basicAdt::Rotate;

	/*std::string word("parangacutirimicuaro");
	std::string permutation("oraucimiritucagnarap");
	IsPermutation(word, permutation);

	word = "ooooooooooaaaaoooooooo";
	permutation = "ooaooooaooooaooooaoooo";
	IsPermutation(word, permutation);


	word = "ooooooooooaaaaooooooooooooooooooaaaaooooooooooooooooooaaaaooooooooooooooooooaaaaooooooooooooooooooaaaaooooooooooooooooooaaaaooooooooooooooooooaaaaooooooooooooooooooaaaaooooooooooooooooooaaaaooooooooooooooooooaaaaooooooooooooooooooaaaaoooooooo";
	permutation = "ooaooooaooooaooooaooooooaooooaooooaooooaooooooaooooaooooaooooaooooooaooooaooooaooooaooooooaooooaooooaooooaooooooaooooaooooaooooaooooooaooooaooooaooooaooooooaooooaooooaooooaooooooaooooaooooaooooaooooooaooooaooooaooooaooooooaooooaooooaooooaoooo";
	IsPermutation(word, permutation);

  encodeSpacesStringNoFindNoInsert(std::string("Mr   John Smith    "));
  encodeSpacesStringFind(std::string("Mr   John Smith    "));
  std::string test = compressWord(std::string("aabcccccaaa"));*/
  
  std::vector< std::vector<int> > intMatrix {
      { 1, 2, 3, 4 },
      { 5, 6, 7, 8 },
      { 9, 10, 11, 12 },
      { 13, 14, 15, 16 }
  };

  std::vector< std::vector<double> > doubleMatrix{
      { 1, 2, 3, 4 },
      { 5, 6, 7, 8 },
      { 9, 10, 11, 12 },
      { 13, 14, 15, 16 }
  };

  std::vector< std::vector<std::string> > stringMatrix{
      { "1", "2", "3", "4" },
      { "5", "6", "7", "8" },
      { "9", "10", "11", "12" },
      { "13", "14", "15", "16" }
  };


  Rotate<basicAdt::CW, int> rotateIntClockwise(intMatrix);
  Rotate<basicAdt::CCW, int> rotateIntCClockwise(intMatrix);

  Rotate<basicAdt::CW, double> rotateDblClockwise(doubleMatrix);
  Rotate<basicAdt::CCW, double> rotateDblCClockwise(doubleMatrix);

  Rotate<basicAdt::CW, std::string> rotateStringClockwise(stringMatrix);
  Rotate<basicAdt::CCW, std::string> rotateStringCClockwise(stringMatrix);

	return 0;
}
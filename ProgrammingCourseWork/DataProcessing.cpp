#include "DataProcessing.h"
//array generating function
vector<int> generate_random_array(int length, int min, int max) {
	vector<int> array;
	for (int i = 0; i < length; i++)
	{
		array.push_back(rand() % (max - min + 1) + min);
	}
	return array;
}
//writting in file function
int write_file(vector<int> arr, string path) {
	if (path.find(".") > path.length()) path += ".txt";
	ofstream resultFile(path, ios::app);
	if (&resultFile == nullptr) {
		return 1;
	}
	for (int i = 0; i < arr.size(); ++i) {
		resultFile << arr[i] << " ";
	}
	resultFile.close();
	return 0;
};

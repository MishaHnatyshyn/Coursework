#include "Sorting.h"
using namespace std;

int sort(string algorithm, int array_size, int min, int max, string file_path, int* comparison_ñount) {
	//File path validation
	if ((file_path.length() == 0) ||
		(file_path.find("<") < file_path.length()) ||
		(file_path.find(">") < file_path.length()) ||
		(file_path.find(":") < file_path.length()) ||
		(file_path.find("\\") < file_path.length()) ||
		(file_path.find("/") < file_path.length()) ||
		(file_path.find("*") < file_path.length()) ||
		(file_path.find("|") < file_path.length()) ||
		(file_path.find("?") < file_path.length()) ||
		(file_path[file_path.length() - 1] == '.') ||
		(file_path[file_path.length() - 1] == ' ') 
		) return 1;
	srand(time(NULL));
	vector<int> sort_arr;
	//array generating
	sort_arr = generate_random_array(array_size, min, max);
	//algorithm function calling
	if (algorithm == "quick") quick_sort(&sort_arr[0], 0, sort_arr.size(), comparison_ñount);
	else if (algorithm == "merge") merge_sort(&sort_arr[0], 0, sort_arr.size() - 1, comparison_ñount);
	else binary_sort(&sort_arr[0], sort_arr.size(), comparison_ñount);
	//writting result in file
	return write_file(sort_arr, file_path);;
}


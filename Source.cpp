#include <iostream>
#include <algorithm>
#include <vector>

bool isOdd(int num)
{
	bool rvalue = false;
	if (num % 2) {
		return rvalue;
	}
}

int main() {
	std::vector<int>V({2,3,4,2,1,11,223});
	///std::string("Avengers");
	/// This is a reverse iterator to travers from end.
	std::reverse_iterator<std::vector<int>::iterator> ritr;
	for (ritr = V.rbegin(); ritr != V.rend(); ++ritr) {
		std::cout << *ritr << std::endl;
	}

	//find the min element from the vector.
	std::vector<int>::iterator it = std::min_element(V.begin(), V.end());
	std::cout << "smallest no. " << *it<<std::endl;
	
	// sorting some part of Vector.
	//it points to 1 so sort will end at [ ..., 1).
	sort(V.begin(), it);  ///{2,2,3,4,1,11,223}

	/// Reversing the part of Vector 
	reverse(it, V.end()); //{2,2,3,4,223,11,1}  Now, it ->223
	
	//Lets Copy one vector to another.
	std::vector<int>vec_clone(10);
	copy(it,V.end(), vec_clone.begin());
	for (std::vector<int>::iterator i = vec_clone.begin(); i != vec_clone.end(); ++i) {
		std::cout << "vec_clone :"<<*i<<std::endl;
	}

	//write a vector which contains oonly odd no.

	std::vector<int>::iterator it_odd = find(V.begin(), V.end(), isOdd);
	for (it_odd = V.begin(); it_odd != V.end(); ++it_odd) {
		std::cout << "odd no. in V:" << *it_odd << std::endl;
	}

}
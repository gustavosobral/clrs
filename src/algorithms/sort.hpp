#include <vector>

namespace Algorithms {

	namespace Sort {

		template <class Object>
		static void insertion_sort(std::vector<Object> *A)
		{
			if(A->begin() == A->end()) return;

			Object key;

			typename std::vector<Object>::iterator i;
			typename std::vector<Object>::iterator j;

			for(j = (A->begin() + 1); j != A->end(); j++)
			{
				key = (*j);
				i = j - 1;
				for(; i >= A->begin() && (*i) > key; i--)
					(*(i + 1)) = (*i);

				(*(i + 1)) = key; 
			}
		}

	}
	
}
#include <iostream>
#include <string>
#include <unordered_set>
#include <queue>
#include <vector>
using namespace std;


string SeriesOrParallel(int edges[][2], int m) {

	return "yes";

}


int main(int argc, char const *argv[]) {
	
	int n, m;
	cin >> n >> m;

	std::vector<unordered_set<int>> edges(n);
	for (int i = 0; i < m; i++) {
		int temp1, temp2;
		cin >> temp1 >> temp2;
		cout << temp1 << " " << temp2 << endl;

		edges[temp1].insert(temp2);
		edges[temp2].insert(temp1);
	}

	queue<int>deg1;
	for (int i = 0; i < n; i++) {
		cout << edges[i].size() << endl;
		if (edges[i].size() == 1) {
			deg1.push(i);
		}
	}

	//while(!deg1.empty()) {
		//auto itr = deg1.front(); 
		cout << deg1.front() << endl;
	//}
	
}

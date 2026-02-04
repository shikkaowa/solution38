#include "logic.h"
int main() {
	int d;
	int n;
	int initialLikes;

	cout << "input initial Likes:";
	cin >> initialLikes;

	cout << "input d:";
	cin >> d;

	cout << "input n:";
	cin >> n;

	int fync = likes(d, n, initialLikes);

	cout << "rn post has: " << likes(d, n, initialLikes) << " likes";

	return 0;
}
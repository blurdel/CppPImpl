#include <iostream>
using namespace std;

#include "DdsPublisher.h"


int main() {
	cout << "pImpl running ..." << endl;

	DdsPublisher pub(123, "pImpl-Example");

	pub.publish("hello");
	pub.publish("world");

	return 0;
}

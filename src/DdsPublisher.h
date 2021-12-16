#ifndef DDSPUBLISHER_H_
#define DDSPUBLISHER_H_

#include <iostream>
#include <string>


class DdsPublisher {
public:
	DdsPublisher(int pDomainId, std::string pTopicName);
	virtual ~DdsPublisher();

	void publish(std::string data);

private:
	class DdsPublisherImpl;
	DdsPublisherImpl* pImpl;
};

#endif

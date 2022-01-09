#ifndef DDSPUBLISHER_H_
#define DDSPUBLISHER_H_

#include <iostream>
#include <string>
#include <memory>


class DdsPublisher {
public:
	DdsPublisher(int pDomainId, std::string pTopicName);
	virtual ~DdsPublisher();

	DdsPublisher(DdsPublisher&&);
	DdsPublisher& operator=(DdsPublisher&&);

	void publish(std::string data);

private:
	class DdsPublisherImpl;
//	DdsPublisherImpl* pImpl;
	std::unique_ptr<DdsPublisherImpl> uImpl;
};

#endif

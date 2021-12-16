#include "DdsPublisher.h"

#include "Topic.h"


class DdsPublisher::DdsPublisherImpl {
public:
	DdsPublisherImpl(int pDomainId, std::string pTopicName) :
		mDomainId(pDomainId),
		mTopicName(pTopicName),
		mTopic(mTopicName, mDomainId)
	{
		std::cout << "mDomainId=" << pDomainId
				<< ", mTopicName=" << pTopicName
				<< std::endl;
	}

	void publish(std::string data) {
		std::cout << "data=" << data << std::endl;
	}


private:
	int mDomainId;
	std::string mTopicName;
	Topic<std::string> mTopic;
};


DdsPublisher::DdsPublisher(int pDomainId, std::string pTopicName) :
	pImpl(new DdsPublisherImpl(pDomainId, pTopicName))
{
	std::cout << "pDomainId=" << pDomainId
			<< std::endl;
}

DdsPublisher::~DdsPublisher() {
	delete pImpl;
}

void DdsPublisher::publish(std::string data) {
	pImpl->publish(data);
}

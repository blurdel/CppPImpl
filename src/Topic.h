#ifndef TOPIC_H_
#define TOPIC_H_


template<class T>
class Topic {
public:
	Topic(T value, int pDomainId) : mValue(value), mDomainId(pDomainId) {};
	virtual ~Topic() {};

	T get() const { return mValue; }
	void set(T value) { this->mValue = value; }

private:
	T mValue;
	int mDomainId;
};

#endif

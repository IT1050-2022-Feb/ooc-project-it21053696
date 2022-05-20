#include"Payment.h"
class Offer
{
private:
	char offerId[10];
	char offerdescription[30];

	Payment* pay[3];
public:
	Offer();
	Offer(const char Oid[], const char Odesc[]);
	void setofferif(const char Oid[]);
	void setofferdescription(const char Odesc[]);
	void addoffer();
	void addpayment(Payment* p1, Payment*p2, Payment* p3);
	void updateoffer();
	void deleteoffer();
	void displayoffer();
	~Offer();
};

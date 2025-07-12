#include <msclr/marshal_cppstd.h>
#include "WrapperClass.h"

int WrapperClass::WrapperFunction1()
{
	GRPC::Class1^ wrapper = gcnew GRPC::Class1();
	return wrapper->Value();
}

std::wstring WrapperClass::WrapperFunction2()
{
    GRPC::Class1^ wrapper = gcnew GRPC::Class1();
    System::String^ keyCertPair = wrapper->GetKeyCertificatePair()->ToString();
	return msclr::interop::marshal_as<std::wstring>(keyCertPair);
}

std::wstring WrapperClass::WrapperFunction3()
{
	GRPC::Class1^ wrapper = gcnew GRPC::Class1();
	System::String^ attribute = wrapper->GetMessagePackFormatterAttribute()->ToString();
	return msclr::interop::marshal_as<std::wstring>(attribute);
}

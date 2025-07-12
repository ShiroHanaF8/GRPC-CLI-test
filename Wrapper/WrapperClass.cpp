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
	System::String^ typeStr = wrapper->GetMessagePackType().ToString();
	return msclr::interop::marshal_as<std::wstring>(typeStr);
}

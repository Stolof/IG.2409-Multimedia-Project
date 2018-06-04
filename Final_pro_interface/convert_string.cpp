/*#include <Windows.h>
#include <string>

#include <msclr\marshal_cppstd.h>

using namespace System;

int main(array<System::String ^> ^args)
{
	System::String^ managedString = "test";

	msclr::interop::marshal_context context;
	std::string standardString = context.marshal_as<std::string>(managedString);

	return 0;
}*/
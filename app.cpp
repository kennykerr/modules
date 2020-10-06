#ifdef IMPORT_WINRT
import winrt;
#else
#include <winrt/Windows.Foundation.h>
#endif

#pragma comment (lib, "oleaut32")
#pragma comment (lib, "ole32")

using namespace winrt;
using namespace Windows::Foundation;
using namespace std::literals;

IAsyncAction Run()
{
    co_await resume_after(1s);
    Uri uri(L"http://kennykerr.ca");
    printf("%ls\n", uri.Domain().c_str());
}

int main()
{
    Run().get();
}
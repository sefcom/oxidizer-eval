long long fish::common::wcs2string_appending(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    a0.reserve(a2);
    return fish::wcstringutil::wcs2string_callback(a1, a2, a0);
}

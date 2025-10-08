long long fish::wcstringutil::string_suffixes_string(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    return core::slice::<impl [T]>::ends_with(a2, a3, a0, a1);
}

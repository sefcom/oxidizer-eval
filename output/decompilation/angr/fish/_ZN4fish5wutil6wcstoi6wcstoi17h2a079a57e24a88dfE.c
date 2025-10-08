long long fish::wutil::wcstoi::wcstoi(unsigned long long a0, unsigned long long a1)
{
    void* v0;  // [bp-0x18]
    unsigned int v1;  // [bp-0xc]
    char v2;  // [bp-0x4]
    unsigned long long v4;  // rdx

    v2 = 0;
    v1 = 0;
    v0 = 0;
    return fish::wutil::wcstoi::wcstoi_impl(a0.into_iter(a1), v4, &v1, &v0);
}

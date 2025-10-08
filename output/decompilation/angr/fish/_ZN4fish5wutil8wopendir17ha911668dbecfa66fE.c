long long fish::wutil::wopendir(unsigned long long a0, unsigned long long a1)
{
    char *v1;  // rax
    unsigned long long v2;  // rax
    unsigned long long v3;  // rdx

    v1 = fish::common::wcs2zstring(a0, a1);
    v2 = opendir(v1);
    core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v1, v3);
    return v2;
}

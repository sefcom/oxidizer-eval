long long fish::wutil::waccess(unsigned long long a0, unsigned long long a1, unsigned int a2)
{
    char *v1;  // rax
    unsigned int v2;  // eax
    unsigned long long v3;  // rdx

    v1 = fish::common::wcs2zstring(a0, a1);
    v2 = access(v1, a2);
    core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v1, v3);
    return v2;
}

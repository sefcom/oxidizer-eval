long long fish::wutil::wunlink(unsigned long long a0, unsigned long long a1)
{
    char *v1;  // rax
    unsigned int v2;  // eax
    unsigned long long v3;  // rdx

    v1 = fish::common::wcs2zstring(a0, a1);
    v2 = unlink(v1);
    core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v1, v3);
    return v2;
}

long long fish::wutil::wrename(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x38]
    unsigned long long v2;  // rax
    char *v3;  // r14
    char *v4;  // rax
    unsigned int v5;  // eax
    unsigned long long v6;  // rdx

    v0 = v2;
    v3 = fish::common::wcs2zstring(a0, a1);
    v4 = fish::common::wcs2zstring(a2, a3);
    v5 = rename(v3, v4);
    core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v4, v6);
    core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v3, v6);
    return v5;
}

long long fish::fds::wopen_dir(unsigned long long a0, unsigned long long a1, unsigned int a2)
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned int v4;  // eax
    unsigned long long v5;  // rdx

    v0 = v2;
    v3 = fish::common::wcs2zstring(a0, a1);
    v4 = fish::fds::open_dir(v3, a1, a2);
    core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v3, v5);
    return v4;
}

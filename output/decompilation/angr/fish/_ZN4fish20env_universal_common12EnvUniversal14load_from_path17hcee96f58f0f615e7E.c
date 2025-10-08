long long fish::env_universal_common::EnvUniversal::load_from_path(unsigned long long a0, unsigned long long a1[5])
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rdx

    v0 = v2;
    v3 = fish::common::wcs2zstring(a1[1], a1[2]);
    core::ptr::drop_in_place<alloc::ffi::c_str::CString>(a1[3], a1[4]);
    a1[3] = v3;
    a1[4] = v4;
    return a0.load_from_path_narrow(a1);
}

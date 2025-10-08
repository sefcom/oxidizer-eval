long long uu_runcon::get_plain_context(void* a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x60], Other Possible Types: unsigned int
    unsigned int v1;  // [bp-0x5c]
    unsigned long long v2;  // [bp-0x58]
    char v3;  // [bp-0x50], Other Possible Types: unsigned long long
    char v4;  // [bp-0x48]
    char v5;  // [bp-0x40]
    char v6;  // [bp-0x38]
    unsigned long v7;  // [bp-0x30]
    char v8;  // [bp-0x28]
    int v10;  // xmm0
    int v11;  // xmm1
    int v12;  // xmm0

    if (!uucore::features::selinux::is_selinux_enabled())
    {
        *((unsigned int *)a0) = 11;
        return a0;
    }
    uu_runcon::os_str_to_c_string(&v0, a1, a2);
    if (v0 != 17)
    {
        v12 = *((int128_t *)&v2);
        *((int128_t *)&a0[24]) = *((int128_t *)&v4);
        *((int128_t *)&a0[40]) = *((int128_t *)&v6);
        *((int128_t *)&a0[56]) = *((int128_t *)&v8);
        *((unsigned int *)a0) = v0;
        *((unsigned int *)&a0[4]) = v1;
        a0[8] = v12;
        return a0;
    }
    v0.from_c_str(v2);
    if (v0 == 10)
    {
        *((unsigned long long *)&a0[8]) = v2;
        *((unsigned int *)a0) = 17;
    }
    else
    {
        *((unsigned long *)&a0[48]) = v7;
        v10 = *((int128_t *)&v0);
        v11 = *((int128_t *)&v3);
        *((int128_t *)&a0[32]) = *((int128_t *)&v5);
        a0[16] = v11;
        *(a0) = v10;
        *((char **)&a0[56]) = "Creating new contextSetting new security contextChecking security contextGetting security context of command fileGetting process security classComputing result of process transitionprocessgetfileconGetting security contextSetting security context userSetti";
        *((unsigned long long *)&a0[64]) = 20;
    }
    core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v2, v3);
    return a0;
}

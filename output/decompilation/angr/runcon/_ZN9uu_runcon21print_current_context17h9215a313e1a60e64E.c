long long uu_runcon::print_current_context(void* a0)
{
    char v0;  // [bp-0xd0], Other Possible Types: unsigned long
    unsigned int v1;  // [bp-0xcc]
    char v2;  // [bp-0xc8], Other Possible Types: unsigned long long
    char *v3;  // [bp-0xc0], Other Possible Types: char, unsigned long long
    char v4;  // [bp-0xbc]
    int v5;  // [bp-0xb8], Other Possible Types: char, unsigned long long
    void* v6;  // [bp-0xb0]
    unsigned int v7;  // [bp-0xac]
    char v8;  // [bp-0xa8]
    unsigned long v9;  // [bp-0xa0]
    int v10;  // [bp-0x98], Other Possible Types: unsigned long long
    int v11;  // [bp-0x90]
    int v12;  // [bp-0x68], Other Possible Types: char
    int v13;  // [bp-0x58], Other Possible Types: char
    unsigned int v14;  // [bp-0x48]
    int v15;  // [bp-0x38], Other Possible Types: char *
    unsigned long long v16;  // [bp-0x30]
    unsigned long long v17;  // [bp-0x28]
    unsigned long long v18;  // [bp-0x20]
    char v19;  // [bp-0x18]
    unsigned int v21;  // eax
    unsigned int v22;  // eax
    int v23;  // xmm0

    v0.current(0);
    v21 = *((int *)&v0);
    if (v21 != 10)
    {
        v14 = v7;
        memcpy(&v13, &v4, 16);
        memcpy(&v12, &v1, 16);
        *((int128_t *)&a0[40]) = *((int128_t *)&v8);
        v10 = v12;
        *((unsigned int *)&a0[36]) = v14;
        a0[20] = v13;
        a0[4] = v12;
        *((unsigned int *)a0) = v21;
        *((char **)&a0[56]) = "Getting security context of the current processCreating new contextSetting new security contextChecking security contextGetting security context of command fileGetting process security classComputing result of process transitionprocessgetfileconGetting sec";
        *((unsigned long long *)&a0[64]) = 47;
        return a0;
    }
    memcpy(&v12, &v2, 16);
    memcpy(&v13, &v5, 16);
    v0.to_c_string(&v12);
    v22 = *((int *)&v0);
    if (v22 == 10)
    {
        memcpy(&v19, &v3, 16);
        if (v2 == 2)
        {
            v0 = &g_4ebbe8;
            v2 = 1;
            v3 = 8;
            *((uint128_t *)&v5) = 0;
            std::io::stdio::_print(&v0);
            goto LABEL_4613c5;
        }
        else
        {
            v10 = v2;
            *((int128_t *)&v11) = *((int128_t *)&v19);
            v0.to_str((long long)v11, (long long)(&v11)[8]);
            if (*((int *)&v0) == 1)
            {
                *((unsigned int *)a0) = 12;
                *((unsigned long long *)&a0[8]) = v2;
                *((unsigned long long *)&a0[16]) = v3;
                core::ptr::drop_in_place<alloc::borrow::Cow<core::ffi::c_str::CStr>>(&v10);
            }
            else
            {
                v17 = v2;
                v18 = v3;
                v15 = &v17;
                v16 = <&T as core::fmt::Display>::fmt;
                v0 = &g_4ebc08;
                v2 = 2;
                v6 = 0;
                v3 = &v15;
                v5 = 1;
                std::io::stdio::_print(&v0);
                core::ptr::drop_in_place<alloc::borrow::Cow<core::ffi::c_str::CStr>>(&v10);
LABEL_4613c5:
                *((unsigned int *)a0) = 17;
            }
        }
    }
    else
    {
        memcpy(&(char)v10, &(char)v3, 16);
        *((unsigned long *)&a0[48]) = v9;
        *((int128_t *)&a0[32]) = *((int128_t *)&v6);
        v23 = *((int128_t *)&v10);
        v15 = v23;
        a0[16] = v23;
        *((unsigned int *)a0) = v22;
        *((unsigned int *)&a0[4]) = v1;
        *((unsigned long long *)&a0[8]) = v2;
        *((char **)&a0[56]) = "Getting security context of the current processCreating new contextSetting new security contextChecking security contextGetting security context of command fileGetting process security classComputing result of process transitionprocessgetfileconGetting sec";
        *((unsigned long long *)&a0[64]) = 47;
    }
    core::ptr::drop_in_place<selinux::SecurityContext>(&v12);
    return a0;
}

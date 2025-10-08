double uu_runcon::get_initial_custom_opaque_context(long long a0, long long a1, long long a2, long long a3)
{
    int v0;  // [bp-0xd8], Other Possible Types: unsigned long long
    int v1;  // [bp-0xd0], Other Possible Types: unsigned long long
    char v2;  // [bp-0xc8], Other Possible Types: unsigned long long
    unsigned int v3;  // [bp-0xb8]
    unsigned int v5;  // [bp-0xb0]
    char v6;  // [bp-0xac], Other Possible Types: unsigned int
    char v7;  // [bp-0xa8], Other Possible Types: unsigned long long
    int v8;  // [bp-0xa0]
    char v9;  // [bp-0x9c]
    char v10;  // [bp-0x98]
    char v11;  // [bp-0x90]
    unsigned int v12;  // [bp-0x8c]
    char v13;  // [bp-0x88]
    unsigned long v14;  // [bp-0x80]
    int v15;  // [bp-0x78]
    char v16;  // [bp-0x68]
    char v17;  // [bp-0x58]
    int v18;  // [bp-0x48], Other Possible Types: char
    int v19;  // [bp-0x38], Other Possible Types: char
    char *v21;  // rdi
    int v22;  // xmm0
    int v23;  // ymm0
    uint256_t v24;  // ymm0
    uint256_t v25;  // ymm0
    unsigned long long v26;  // rdx
    int v27;  // xmm0
    int v28;  // xmm1
    int v29;  // xmm0
    int v30;  // xmm0
    int v31;  // xmm0
    int v32;  // xmm0
    int v33;  // xmm1

    v21 = &(char)v5;
    if (a1)
    {
        uu_runcon::get_transition_context(v21, a2, a3);
        if (v5 != 17)
        {
            v3 = v12;
            memcpy(&v2, &v9, 16);
            *((int128_t *)&v0) = *((int128_t *)&v6);
            a0[56] = v15;
            *((int128_t *)&a0[40]) = *((int128_t *)&v13);
            *((unsigned int *)&a0[36]) = v3;
            v22 = (int128_t)v0;
            *((int128_t *)&a0[20]) = *((int128_t *)&v2);
            a0[4] = v22;
            *((unsigned int *)a0) = v5;
            return (unsigned long long)v22;
        }
    }
    else
    {
        v21.current(0);
        if (v5 != 10)
        {
            v3 = v12;
            memcpy(&v2, &v9, 16);
            *((int128_t *)&v0) = *((int128_t *)&v6);
            *((int128_t *)&a0[40]) = *((int128_t *)&v13);
            v32 = (int128_t)v0;
            v33 = *((int128_t *)&v2);
            *((unsigned int *)&a0[36]) = v3;
            a0[20] = v33;
            a0[4] = v32;
            *((unsigned int *)a0) = v5;
            *((char **)&a0[56]) = "Getting security context of the current processCreating new contextSetting new security contextChecking security contextGetting security context of command fileGetting process security classComputing result of process transitionprocessgetfileconGetting sec";
            *((unsigned long long *)&a0[64]) = 47;
            return (unsigned long long)v32;
        }
    }
    v24 = v23 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v7);
    memcpy(&v16, &v7, 16);
    memcpy(&v17, &v10, 16);
    (char)v5.to_c_string(&v16);
    if (v5 == 10)
    {
        v25 = v24 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (int128_t)v8;
        memcpy(&v18, &v8, 16);
        if (v7 == 2)
        {
            v1 = <alloc::ffi::c_str::CString as core::default::Default>::default();
            v2 = v26;
            v0 = 1;
        }
        else
        {
            v25 = v25 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v18;
            v1 = v18;
            v0 = v7;
        }
        (char)v5.from_c_str(v1);
        if (v5 == 10)
        {
            *((unsigned long long *)&a0[8]) = v7;
            *((unsigned int *)a0) = 17;
        }
        else
        {
            *((unsigned long *)&a0[48]) = v14;
            v27 = *((int128_t *)&v5);
            v25 = v25 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v27;
            v28 = (int128_t)v8;
            *((int128_t *)&a0[32]) = *((int128_t *)&v11);
            a0[16] = v28;
            *(a0) = v27;
            *((char **)&a0[56]) = "Creating new contextSetting new security contextChecking security contextGetting security context of command fileGetting process security classComputing result of process transitionprocessgetfileconGetting security contextSetting security context userSetti";
            *((unsigned long long *)&a0[64]) = 20;
        }
        core::ptr::drop_in_place<alloc::borrow::Cow<core::ffi::c_str::CStr>>(&v0);
    }
    else
    {
        v29 = (int128_t)v8;
        memcpy(&v19, &(char)v8, 16);
        *((unsigned long *)&a0[48]) = v14;
        v30 = *((int128_t *)&v11);
        a0[32] = v30;
        v31 = v19;
        v25 = ((v24 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v29) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v30) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v31;
        v18 = v31;
        a0[16] = v18;
        *((unsigned int *)a0) = v5;
        *((unsigned int *)&a0[4]) = v6;
        *((unsigned long long *)&a0[8]) = v7;
        *((char **)&a0[56]) = "Getting security contextSetting security context userSetting security context roleSetting security context typeSetting security context rangesrc/uu/runcon/src/runcon.rs";
        *((unsigned long long *)&a0[64]) = 24;
    }
    core::ptr::drop_in_place<selinux::SecurityContext>(&v16);
    return (unsigned long long)v25;
}

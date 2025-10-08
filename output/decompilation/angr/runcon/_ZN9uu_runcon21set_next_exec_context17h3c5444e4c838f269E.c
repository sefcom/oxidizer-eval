long long uu_runcon::set_next_exec_context(void* a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x88]
    unsigned long v1;  // [bp-0x80]
    unsigned long long v2;  // [bp-0x78]
    unsigned short v3;  // [bp-0x70]
    char v4;  // [bp-0x68], Other Possible Types: unsigned int
    unsigned int v5;  // [bp-0x64]
    unsigned long long v6;  // [bp-0x60]
    unsigned long long v7;  // [bp-0x58]
    char v8;  // [bp-0x50]
    char v9;  // [bp-0x48]
    char v10;  // [bp-0x40]
    int v11;  // [bp-0x38], Other Possible Types: char
    char v12;  // [bp-0x28]
    int v15;  // xmm0
    int v16;  // xmm1
    int v17;  // xmm0
    int v18;  // xmm1
    int v19;  // xmm2
    int v20;  // xmm0

    v4.to_c_string(a1);
    if (v4 != 10)
    {
        v20 = *((int128_t *)&v6);
        *((int128_t *)&a0[24]) = *((int128_t *)&v8);
        *((int128_t *)&a0[40]) = *((int128_t *)&v10);
        *((unsigned int *)a0) = v4;
        *((unsigned int *)&a0[4]) = v5;
        a0[8] = v20;
        *((char **)&a0[56]) = "Creating new contextSetting new security contextChecking security contextGetting security context of command fileGetting process security classComputing result of process transitionprocessgetfileconGetting security contextSetting security context userSetti";
        *((unsigned long long *)&a0[64]) = 20;
        return a0;
    }
    v2 = v6;
    v0 = 1;
    v1 = v7 - 1;
    v3 = 0;
    if (v0.check() != 2 && (v0.check() & 1))
    {
        v4.set_for_next_exec(&v0);
        if (v4 == 10)
        {
            *((unsigned int *)a0) = 17;
        }
        else
        {
            *((long long *)&a0[48]) = *((long long *)&v11);
            v15 = *((int128_t *)&v4);
            v16 = *((int128_t *)&v7);
            *((int128_t *)&a0[32]) = *((int128_t *)&v9);
            a0[16] = v16;
            *(a0) = v15;
            *((char **)&a0[56]) = "Setting new security contextChecking security contextGetting security context of command fileGetting process security classComputing result of process transitionprocessgetfileconGetting security contextSetting security context userSetting security context ";
            *((unsigned long long *)&a0[64]) = 28;
        }
        core::ptr::drop_in_place<selinux::SecurityContext>(&v0);
    }
    else
    {
        v4.from_io1("Checking security contextGetting security context of command fileGetting process security classComputing result of process transitionprocessgetfileconGetting security contextSetting security context userSetting security context roleSetting security context", 25, v6, v1, 85899345923);
        *((long long *)&a0[64]) = *((long long *)&v12);
        v17 = *((int128_t *)&v4);
        v18 = *((int128_t *)&v7);
        v19 = *((int128_t *)&v9);
        a0[48] = v11;
        a0[32] = v19;
        a0[16] = v18;
        *(a0) = v17;
        core::ptr::drop_in_place<selinux::SecurityContext>(&v0);
    }
    core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v6, v7);
    return a0;
}

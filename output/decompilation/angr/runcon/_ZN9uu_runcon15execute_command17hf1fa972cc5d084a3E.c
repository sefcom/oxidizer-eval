long long uu_runcon::execute_command(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long a3)
{
    char v0;  // [bp-0x170], Other Possible Types: unsigned long long
    char v1;  // [bp-0x16c], Other Possible Types: unsigned int
    char *v2;  // [bp-0x168], Other Possible Types: char
    unsigned long v3;  // [bp-0x168]
    unsigned long long v4;  // [bp-0x160]
    void* v5;  // [bp-0x160]
    unsigned long long v6;  // [bp-0x158]
    char v7;  // [bp-0x150]
    char v8;  // [bp-0x148]
    char v9;  // [bp-0x140]
    char v10;  // [bp-0x138]
    unsigned long long v11;  // [bp-0x130]
    int v12;  // [bp-0x128], Other Possible Types: unsigned int
    int v13;  // [bp-0x124]
    unsigned int v14;  // [bp-0x124]
    int v15;  // [bp-0x120]
    int v16;  // [bp-0x118]
    int v17;  // [bp-0x108]
    int v18;  // [bp-0x100]
    int v19;  // [bp-0xf8]
    unsigned long long v20;  // [bp-0xe8]
    unsigned int v21;  // [bp-0xe0]
    int v22;  // [bp-0xd8]
    unsigned long long v23;  // [bp-0xd0]
    unsigned long long v24;  // [bp-0xc8]
    int v25;  // [bp-0xb8]
    int v26;  // [bp-0x98]
    char v27;  // [bp-0x8c]
    int v28;  // [bp-0x78], Other Possible Types: char
    int v29;  // [bp-0x68]
    int v30;  // [bp-0x58]
    int v31;  // [bp-0x48]
    char v32;  // [bp-0x38]
    unsigned int v34;  // eax
    unsigned int v35;  // eax
    unsigned long v36;  // cc_ndep
    unsigned long v37;  // rdx
    unsigned long long v38;  // r13
    char v39;  // al
    unsigned long long v40;  // r15
    int v41;  // xmm2
    int v42;  // xmm3
    int v43;  // xmm0

    uu_runcon::os_str_to_c_string(&(char)v0, a0, a1);
    v34 = *((int *)&v0);
    if (v34 != 17)
    {
        v43 = *((int128_t *)&v3);
        memcpy(&(char)v19, &v10, 16);
        *((int128_t *)&v18) = *((int128_t *)&v8);
        memcpy(&(char)v16, &(char)v6, 16);
        v12 = v34;
        v14 = v1;
        v15 = v43;
        v21 = 1;
        return v12.new();
    }
    (char)v0.collect(a2, a2 + a3 * 24);
    v35 = *((int *)&v0);
    if (v35 == 17)
    {
        *((int128_t *)&v22) = *((int128_t *)&v2);
        v24 = v6;
        v0 = ((char)_ccall(3, 4, a3, 2, v36) ? a3 + 2 : 18446744073709551615).with_capacity_in(8, 8, &g_4ebe38);
        v3 = v37;
        v5 = 0;
        (char)v0.push(v2, &g_4ebe50);
        (char)v0.extend_trusted(v23, v24 * 16 + v23);
        (char)v0.push(0, &g_4ebe80);
        execvp(v2, v3);
        v38 = *(__errno_location()) * 0x100000000 | 2;
        v39 = (unsigned int)v38.kind();
        v28.from_io1("Executing commandCString::new() failed failed on No command is specifiedruncon may be used only on a SELinux kernelMissingCommandSELinuxNotEnabledCommandLineSELinuxIo1RunconErrorinner", 17, a0, a1, v38);
        v20 = *((long long *)&v32);
        v19 = v31;
        v17 = v30;
        v16 = v29;
        v12 = v28;
        v21 = 126 + (v39 < 1);
        v40 = (char)v12.new();
        core::ptr::drop_in_place<alloc::vec::Vec<*const i8>>(v0, v3);
        core::ptr::drop_in_place<alloc::vec::Vec<alloc::ffi::c_str::CString>>(&(char)v22);
    }
    else
    {
        v41 = *((int128_t *)&v7);
        v42 = *((int128_t *)&v9);
        memcpy(&v27, &v5, 16);
        *((int128_t *)&v26) = *((int128_t *)&v1);
        v20 = v11;
        v19 = v42;
        v17 = v41;
        *((int128_t *)&v25) = (int128_t)v26;
        memcpy(&(char)v25, &v26, 16);
        *((int128_t *)&v13) = (int128_t)v25;
        memcpy(&v13, &v25, 16);
        v12 = v35;
        v21 = 1;
        v40 = v12.new();
    }
    core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v2, v4);
    return v40;
}

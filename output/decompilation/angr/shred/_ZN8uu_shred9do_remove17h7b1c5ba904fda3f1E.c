long long uu_shred::do_remove::h7b1c5ba904fda3f1(unsigned long long a0, unsigned long a1, unsigned long long a2, unsigned long long a3, unsigned int a4, unsigned int a5)
{
    char *v0;  // [sp-0xc8]
    unsigned long long v1;  // [sp-0xc0]
    char v2;  // [bp-0xb8]
    unsigned long v3;  // [sp-0xb0]
    unsigned long long v4;  // [sp-0xa8]
    struct struct_0 **v5;  // [sp-0xa0]
    unsigned long long v6;  // [sp-0x98]
    void* v7;  // [sp-0x90]
    void* v8;  // [sp-0x80], Other Possible Types: unsigned long
    unsigned long long v9;  // [sp-0x78]
    unsigned long long v10;  // [sp-0x70]
    char v11;  // [sp-0x68]
    char *v12;  // [sp-0x60]
    unsigned long long v13;  // [sp-0x58]
    unsigned long long v14;  // [sp-0x50]
    int v15;  // [sp-0x48]
    unsigned long long v16;  // [sp-0x38]
    unsigned long long v18;  // r13
    unsigned long long v19;  // rbp
    unsigned long long v20;  // rdx
    unsigned long v21;  // rdx
    unsigned long v22;  // rax
    void* v23;  // rax
    char *v25;  // rax

    v18 = a5;
    v19 = a4;
    v20 = a1;
    if (a4)
    {
        v14 = a1;
        v8 = uucore::util_name::h60d842bf27b05e82();
        v9 = v21;
        v0 = &v8;
        v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h264c667d1212e3ad;
        v3 = &g_538698;
        v4 = 2;
        v7 = 0;
        v5 = &v0;
        v6 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v3);
        v8 = 0;
        v9 = a2;
        v10 = a3;
        v11 = 0;
        v0 = &v8;
        v1 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        v3 = &g_538928;
        v4 = 2;
        v7 = 0;
        v5 = &v0;
        v6 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v3);
        v20 = v14;
    }
    if ((char)v18 != 1)
        uu_shred::wipe_name::hcce9bfbf2150b71e(&v0, a0, v20, v19 & 4294967295, v18 & 4294967295);
    else
        std::path::Path::with_file_name::hc341ca2068d6c4b9(&v0, a0, v20, a2, a3);
    if (v22 != 0x8000000000000000)
    {
        v16 = *((long long *)&v2);
        *((int128_t *)&v15) = *((int128_t *)&v0);
        v23 = std::fs::remove_file::h876d9142090ac2ab(&v15);
        if (v23)
            return v23;
    }
    v22 = v0;
    v25 = v22;
    if ((char)v19)
    {
        v8 = uucore::util_name::h60d842bf27b05e82();
        v9 = v21;
        v12 = &v8;
        v13 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h264c667d1212e3ad;
        v3 = &g_538698;
        v4 = 2;
        v7 = 0;
        v5 = &v12;
        v6 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v3);
        v8 = 0;
        v9 = a2;
        v10 = a3;
        v11 = 0;
        v12 = &v8;
        v13 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        v3 = &g_538948;
        v4 = 2;
        v7 = 0;
        v5 = &v12;
        v6 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v3);
        v25 = v0;
    }
    if (v22 == 0x8000000000000000 && v25 != 0x8000000000000000)
        ::0x4baef0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha6413bedadae7a14(&v0);
    return 0;
}

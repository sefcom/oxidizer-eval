long long uu_shred::do_remove::h7b1c5ba904fda3f1(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned int a4, unsigned int a5)
{
    char *v0;  // [sp-0xc8]
    unsigned long long v1;  // [sp-0xc0]
    char v2;  // [bp-0xb8]
    unsigned long v3;  // [sp-0xb0], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0xa8]
    struct struct_0 **v5;  // [sp-0xa0]
    unsigned long long v6;  // [sp-0x98]
    void* v7;  // [sp-0x90]
    void* v8;  // [sp-0x80], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v9;  // [sp-0x78]
    unsigned long long v10;  // [sp-0x70]
    char v11;  // [sp-0x68]
    char *v12;  // [sp-0x60]
    unsigned long long v13;  // [sp-0x58]
    int v14;  // [sp-0x48]
    unsigned long long v15;  // [sp-0x38]
    unsigned long long v17;  // r13
    unsigned long long v18;  // rbp
    unsigned long long v19;  // rdx
    unsigned long long v20;  // rsi
    unsigned long long v21;  // rsi
    char *v22;  // r12
    void* v23;  // rax
    char *v24;  // r12

    v17 = a5;
    v18 = a4;
    if (a4)
    {
        v8 = uucore::util_name::h60d842bf27b05e82();
        v9 = v19;
        v0 = &v8;
        v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h264c667d1212e3ad;
        v3 = &g_538698;
        v4 = 2;
        v7 = 0;
        v5 = &v0;
        v6 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v3, v20, v19);
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
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v3, v20, v19);
    }
    if ((char)v17 != 1)
        uu_shred::wipe_name::hcce9bfbf2150b71e(&v0, a0, a1, v18 & 4294967295, v17 & 4294967295);
    else
        std::path::Path::with_file_name::hc341ca2068d6c4b9(&v0, a0, a1, a2, a3);
    v22 = v0;
    if (v22 != 0x8000000000000000)
    {
        v15 = *((long long *)&v2);
        *((int128_t *)&v14) = *((int128_t *)&v0);
        v23 = std::fs::remove_file::h876d9142090ac2ab(&v14, v21, v19);
        if (v23)
            return v23;
    }
    v24 = v22;
    if ((char)v18)
    {
        v8 = uucore::util_name::h60d842bf27b05e82();
        v9 = v19;
        v12 = &v8;
        v13 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h264c667d1212e3ad;
        v3 = &g_538698;
        v4 = 2;
        v7 = 0;
        v5 = &v12;
        v6 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v3, v20, v19);
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
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v3, v20, v19);
        v24 = v0;
    }
    if (v22 == 0x8000000000000000 && v24 != 0x8000000000000000)
        ::0x4baef0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha6413bedadae7a14(&v0);
    return 0;
}

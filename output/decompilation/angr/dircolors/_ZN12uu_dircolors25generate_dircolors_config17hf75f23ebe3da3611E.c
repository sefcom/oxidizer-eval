double uu_dircolors::generate_dircolors_config::hf75f23ebe3da3611(long long a0)
{
    unsigned long v0;  // [sp-0x108]
    unsigned long long v1;  // [sp-0x100]
    unsigned long v2;  // [sp-0xf8]
    void* v3;  // [sp-0xf0]
    unsigned long long v4;  // [sp-0xe8]
    void* v5;  // [sp-0xe0]
    int v6;  // [bp-0xd8], Other Possible Types: unsigned long
    unsigned long long v7;  // [sp-0xd0]
    struct struct_0 **v8;  // [sp-0xc8], Other Possible Types: unsigned long long
    unsigned long long v9;  // [sp-0xc0]
    void* v10;  // [sp-0xb8]
    unsigned long v11;  // [sp-0xa8]
    char *v12;  // [sp-0xa0]
    unsigned long long v13;  // [sp-0x98]
    char *v14;  // [sp-0x90]
    unsigned long long v15;  // [sp-0x88]
    char v16;  // [bp-0x78]
    char v17;  // [bp-0x68]
    char v18;  // [bp-0x60]
    char v19;  // [bp-0x50]
    char v20;  // [bp-0x48]
    char v21;  // [bp-0x38]
    unsigned long long v23;  // rax
    int v24;  // ymm0
    int v25;  // xmm0
    unsigned long long v26;  // rdx
    unsigned long long v27;  // rax
    int v28;  // xmm0
    unsigned long long v29;  // rax
    int v30;  // xmm0
    int v31;  // xmm0

    v3 = 0;
    v4 = 1;
    v5 = 0;
    ::0x4bb630::alloc::vec::Vec$LT$T$C$A$GT$::append_elements::hcb56fdf4dd160d69(&v3, "# Configuration file for dircolors, a utility to help you set the\n# LS_COLORS environment variable used by GNU ls with the --color option.\n# The keywords COLOR, OPTIONS, and EIGHTBIT (honored by the\n# slackware version of dircolors) are recognized but ignored.\n# Global config options can be specified before TERM or COLORTERM entries\n# Below are TERM or COLORTERM entries, which can be glob patterns, which\n# restrict following config to systems with matching environment variables.\n", 484);
    ::0x4bb630::alloc::vec::Vec$LT$T$C$A$GT$::append_elements::hcb56fdf4dd160d69(&v3, "COLORTERM ?*\n", 13);
    v0 = &anon.84df56382e2e566cd8a063a5d0153d3b.47.llvm.4004663911042702431;
    v1 = &anon.84df56382e2e566cd8a063a5d0153d3b.97.llvm.4004663911042702431;
    v23 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hc9446a1cf5340f63(&v0);
    if (v23)
    {
        do
        {
            v2 = v23;
            v12 = &v2;
            v13 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h58765c92fea73f10;
            v6 = &g_527238;
            v7 = 2;
            v10 = 0;
            v8 = &v12;
            v9 = 1;
            ::0x4bb450::core::option::Option$LT$T$GT$::map_or_else::h443112b6ce900918(&v16, &v6);
            v25 = *((int128_t *)&v16);
            v24 = v24 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v25;
            v6 = v25;
            v8 = *((long long *)&v17);
            ::0x4bb630::alloc::vec::Vec$LT$T$C$A$GT$::append_elements::hcb56fdf4dd160d69(&v3, ::0x4bb440::core::slice::iter::Iter$LT$T$GT$::make_slice::h25769b8f6cfce2a9(v7, v8 + v7), v26);
            ::0x4ba5e0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h201e2b6c2cdf2ea1(&v6);
            v23 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hc9446a1cf5340f63(&v0);
        } while (v23);
    }
    ::0x4bb630::alloc::vec::Vec$LT$T$C$A$GT$::append_elements::hcb56fdf4dd160d69(&v3, ::0x4bb440::core::slice::iter::Iter$LT$T$GT$::make_slice::h25769b8f6cfce2a9("# Below are the color init strings for the basic file types.\n# One can use codes for 256 or more colors supported by modern terminals.\n# The default color codes use the capabilities of an 8 color terminal\n# with some additional attributes as per the following codes:\n# Attribute codes:\n# 00=none 01=bold 04=underscore 05=blink 07=reverse 08=concealed\n# Text color codes:\n# 30=black 31=red 32=green 33=yellow 34=blue 35=magenta 36=cyan 37=white\n# Background color codes:\n# 40=black 41=red 42=green 43=yellow 44=blue 45=magenta 46=cyan 47=white\n#NORMAL 00 # no color code at all\n#FILE 00 # regular file: use no color at all\n", "TERM "), v26);
    v0 = &anon.84df56382e2e566cd8a063a5d0153d3b.97.llvm.4004663911042702431;
    v1 = &anon.84df56382e2e566cd8a063a5d0153d3b.231.llvm.4004663911042702431;
    v27 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h65b3907fb5e0e3d7(&v0);
    if (v27)
    {
        do
        {
            v11 = v27;
            v2 = v27 + 32;
            v12 = &v11;
            v13 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h58765c92fea73f10;
            v14 = &v2;
            v15 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h58765c92fea73f10;
            v6 = &g_527258;
            v7 = 3;
            v10 = 0;
            v8 = &v12;
            v9 = 2;
            ::0x4bb450::core::option::Option$LT$T$GT$::map_or_else::h443112b6ce900918(&v18, &v6);
            v28 = *((int128_t *)&v18);
            v24 = v24 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v28;
            v6 = v28;
            v8 = *((long long *)&v19);
            ::0x4bb630::alloc::vec::Vec$LT$T$C$A$GT$::append_elements::hcb56fdf4dd160d69(&v3, ::0x4bb440::core::slice::iter::Iter$LT$T$GT$::make_slice::h25769b8f6cfce2a9(v7, v8 + v7), v26);
            ::0x4ba5e0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h201e2b6c2cdf2ea1(&v6);
            v27 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h65b3907fb5e0e3d7(&v0);
        } while (v27);
    }
    ::0x4bb630::alloc::vec::Vec$LT$T$C$A$GT$::append_elements::hcb56fdf4dd160d69(&v3, ::0x4bb440::core::slice::iter::Iter$LT$T$GT$::make_slice::h25769b8f6cfce2a9("# List any file extensions like '.gz' or '.tar' that you would like ls\n", " "), v26);
    ::0x4bb630::alloc::vec::Vec$LT$T$C$A$GT$::append_elements::hcb56fdf4dd160d69(&v3, ::0x4bb440::core::slice::iter::Iter$LT$T$GT$::make_slice::h25769b8f6cfce2a9("# to color below. Put the extension, a space, and the color init string.\n", "# Subsequent TERM or COLORTERM entries, can be used to add / override\n"), v26);
    v0 = &anon.84df56382e2e566cd8a063a5d0153d3b.231.llvm.4004663911042702431;
    v1 = &g_5291b8;
    v29 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h61adeb40505b726f(&v0);
    if (!v29)
    {
        ::0x4bb630::alloc::vec::Vec$LT$T$C$A$GT$::append_elements::hcb56fdf4dd160d69(&v3, "# Subsequent TERM or COLORTERM entries, can be used to add / override\n", 70);
        ::0x4bb630::alloc::vec::Vec$LT$T$C$A$GT$::append_elements::hcb56fdf4dd160d69(&v3, ::0x4bb440::core::slice::iter::Iter$LT$T$GT$::make_slice::h25769b8f6cfce2a9("# config specific to those matching environment variables.", &g_423aa4), v26);
        a0->field_10 = v5;
        v31 = *((int128_t *)&v3);
        *((void*)&a0->field_0) = v31;
        return (unsigned long long)(v24 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v31);
    }
    do
    {
        v11 = v29;
        v2 = v29 + 16;
        v12 = &v11;
        v13 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h58765c92fea73f10;
        v14 = &v2;
        v15 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h58765c92fea73f10;
        v6 = &g_527258;
        v7 = 3;
        v10 = 0;
        v8 = &v12;
        v9 = 2;
        ::0x4bb450::core::option::Option$LT$T$GT$::map_or_else::h443112b6ce900918(&v20, &v6);
        v30 = *((int128_t *)&v20);
        v24 = v24 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v30;
        v6 = v30;
        v8 = *((long long *)&v21);
        ::0x4bb630::alloc::vec::Vec$LT$T$C$A$GT$::append_elements::hcb56fdf4dd160d69(&v3, ::0x4bb440::core::slice::iter::Iter$LT$T$GT$::make_slice::h25769b8f6cfce2a9(v7, v8 + v7), v26);
        ::0x4ba5e0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h201e2b6c2cdf2ea1(&v6);
        v29 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h61adeb40505b726f(&v0);
    } while (v29);
}

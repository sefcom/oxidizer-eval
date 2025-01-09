long long uu_dircolors::generate_ls_colors::h07b798e699c26892(struct_0 *a0, char *a1, unsigned long long a2, unsigned long long a3)
{
    void* v0;  // [sp-0x278], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v1;  // [sp-0x270]
    void* v2;  // [sp-0x268], Other Possible Types: unsigned long
    char v3;  // [bp-0x25f]
    char v4;  // [bp-0x25c]
    int v5;  // [sp-0x258], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v6;  // [sp-0x250]
    struct struct_1 **v7;  // [sp-0x248]
    void* v8;  // [sp-0x240], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v9;  // [sp-0x238]
    void* v10;  // [sp-0x230]
    char *v11;  // [bp-0x228], Other Possible Types: unsigned long long
    unsigned long long v12;  // [sp-0x220]
    struct struct_1 **v13;  // [sp-0x218], Other Possible Types: char *
    unsigned long long v14;  // [sp-0x210]
    void* v15;  // [sp-0x208], Other Possible Types: char *
    unsigned long long v16;  // [sp-0x200]
    int v17;  // [sp-0x1f8], Other Possible Types: unsigned long long
    unsigned long long v18;  // [sp-0x1f0]
    unsigned long long v19;  // [sp-0x1e8]
    int v20;  // [bp-0x1d8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v21;  // [sp-0x1d0]
    struct struct_1 **v22;  // [sp-0x1c8]
    int v23;  // [bp-0x1b8], Other Possible Types: char, unsigned long long
    unsigned long long v24;  // [sp-0x1b0]
    struct struct_1 **v25;  // [sp-0x1a8], Other Possible Types: unsigned long long
    unsigned long long v26;  // [sp-0x1a0]
    struct struct_1 **v27;  // [sp-0x198]
    unsigned long long v28;  // [sp-0x190]
    char *v29;  // [bp-0x170]
    unsigned long long v30;  // [sp-0x168]
    char *v31;  // [sp-0x160], Other Possible Types: struct struct_1 **, unsigned long long
    unsigned long long v32;  // [sp-0x158]
    char *v33;  // [sp-0x150], Other Possible Types: void*
    unsigned long v34;  // [sp-0x148], Other Possible Types: unsigned long long
    char *v35;  // [sp-0x140], Other Possible Types: char
    unsigned int v36;  // [bp-0x13f]
    unsigned int v37;  // [sp-0x13c]
    unsigned long long v38;  // [sp-0x138]
    unsigned long long v39;  // [sp-0x128]
    unsigned long long v40;  // [sp-0x118]
    unsigned long long v41;  // [sp-0x110]
    char v42;  // [sp-0x108]
    unsigned long long v43;  // [sp-0x100]
    unsigned long long v44;  // [sp-0xf0]
    unsigned long long v45;  // [sp-0xe0]
    unsigned long long v46;  // [sp-0xd8]
    char v47;  // [sp-0xd0]
    unsigned long long v48;  // [sp-0xc8]
    unsigned long long v49;  // [sp-0xb8]
    void* v50;  // [sp-0xa8]
    unsigned long long v51;  // [sp-0xa0]
    char v52;  // [sp-0x98]
    unsigned int v53;  // [bp-0x97]
    unsigned int v54;  // [sp-0x94]
    char v55;  // [bp-0x90]
    char v56;  // [bp-0x80]
    char v57;  // [bp-0x78]
    char v58;  // [bp-0x60]
    char v59;  // [bp-0x48]
    unsigned long long v61;  // 4140
    struct_2 *v62;  // rax
    struct_2 *v63;  // rax
    struct struct_1 **v64;  // rbx
    char *v65;  // r15
    int v66;  // ymm0
    int v67;  // xmm0
    unsigned long long v68;  // rdx
    char v69;  // al
    int v71;  // xmm0
    int v72;  // ymm0
    int v73;  // xmm0
    unsigned long long v74;  // rdx
    char v75;  // al
    struct_0 *v77;  // r15
    char *v78;  // rdi

    v61 = *(a1);
    if ((char)v61 == 2)
    {
        v0 = 0;
        v1 = 8;
        v2 = 0;
        uu_dircolors::generate_type_output::h9c6833319feecf38(&v57, a1);
        alloc::vec::Vec$LT$T$C$A$GT$::push::h7d8f0025391e3f05(&v0, &v57);
        v8 = &anon.84df56382e2e566cd8a063a5d0153d3b.231.llvm.4004663911042702431;
        v9 = &g_5291b8;
        v63 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h61adeb40505b726f(&v8);
        if (v63)
        {
            do
            {
                v5 = v63->field_0;
                v6 = v63->field_8;
                v73 = v63->field_10;
                v72 = v72 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v73;
                v17 = v73;
                *((int *)&v29) = 0;
                v75 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::he3aceff540041b05(v5, v6, ::0x4bb2d0::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(42, &v29), v74);
                *((int *)&v20) = (v75 ? 1 : "*");
                v21 = v75 ^ 1;
                v11 = &v17;
                v12 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb1e31a3548e14da4;
                v13 = &v20;
                v14 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb1e31a3548e14da4;
                v15 = &v5;
                v16 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb1e31a3548e14da4;
                v29 = 2;
                v31 = 2;
                v33 = 0;
                v34 = 32;
                v35 = 3;
                v37 = *((int *)&v4);
                v36 = *((int *)&v3);
                v38 = 2;
                v39 = 2;
                v40 = 1;
                v41 = 32;
                v42 = 3;
                v43 = 2;
                v44 = 2;
                v45 = 2;
                v46 = 32;
                v47 = 3;
                v48 = 2;
                v49 = 2;
                v50 = 0;
                v51 = 32;
                v52 = 3;
                v54 = *((int *)&(&v3)[3]);
                v53 = *((int *)&v3);
                v23 = &g_527158;
                v24 = 5;
                v27 = &v29;
                v28 = 4;
                v25 = &v11;
                v26 = 3;
                ::0x4bb450::core::option::Option$LT$T$GT$::map_or_else::h443112b6ce900918();
                alloc::vec::Vec$LT$T$C$A$GT$::push::h7d8f0025391e3f05(&v0, &v58);
                v63 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h61adeb40505b726f(&v8);
            } while (v63);
        }
        alloc::str::join_generic_copy::hc84b2afb154a6337(&v29, v1, v2, "\n", 1);
        v77 = a0;
        v77->field_10 = v31;
        v77->field_0 = *((int128_t *)&v29);
        v78 = &v0;
    }
    else
    {
        v8 = 0;
        v9 = 8;
        v10 = 0;
        v5 = &anon.84df56382e2e566cd8a063a5d0153d3b.231.llvm.4004663911042702431;
        v6 = &g_5291b8;
        v62 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h61adeb40505b726f(&v5);
        if (v62)
        {
            v64 = &v11;
            v65 = &v23;
            do
            {
                v17 = v62->field_0;
                v18 = v62->field_8;
                v67 = v62->field_10;
                v20 = v67;
                *((int *)&v29) = 0;
                v65 = v65;
                v64 = v64;
                v69 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::he3aceff540041b05(v17, v18, ::0x4bb2d0::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(42, &v29), v68);
                *((int *)&v0) = (v69 ? 1 : "*");
                v1 = v69 ^ 1;
                v11 = &v0;
                v12 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb1e31a3548e14da4;
                v13 = &v17;
                v14 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb1e31a3548e14da4;
                v29 = &g_41bbd8;
                v30 = 2;
                v33 = 0;
                v31 = v64;
                v32 = 2;
                ::0x4bb450::core::option::Option$LT$T$GT$::map_or_else::h443112b6ce900918();
                v71 = *((int128_t *)&v55);
                v66 = v66 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v67 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v71;
                v23 = v71;
                v25 = *((long long *)&v56);
                v11 = v65;
                v12 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v13 = &v20;
                v14 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb1e31a3548e14da4;
                v29 = &g_5270f8;
                v30 = 2;
                v33 = 0;
                v31 = v64;
                v32 = 2;
                ::0x4bb450::core::option::Option$LT$T$GT$::map_or_else::h443112b6ce900918();
                alloc::vec::Vec$LT$T$C$A$GT$::push::h7d8f0025391e3f05(&v8, &v59);
                ::0x4ba5e0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h201e2b6c2cdf2ea1(v65);
                v62 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h61adeb40505b726f(&v5);
            } while (v62);
        }
        uu_dircolors::get_colors_format_strings::h3d385b99c9468f76(&v29, a1);
        v77 = a0;
        v7 = v31;
        *((int128_t *)&v5) = *((int128_t *)&v29);
        v19 = v34;
        *((int128_t *)&v17) = *((int128_t *)&v32);
        alloc::str::join_generic_copy::hc84b2afb154a6337(&v29, v9, v10, a2, a3);
        v22 = v31;
        *((int128_t *)&v20) = *((int128_t *)&v29);
        uu_dircolors::generate_type_output::h9c6833319feecf38(&v23, a1);
        v29 = &v5;
        v30 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v31 = &v23;
        v32 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v33 = &v20;
        v34 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v35 = &v17;
        v38 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v11 = &g_527118;
        v12 = 4;
        v15 = 0;
        v13 = &v29;
        v14 = 4;
        ::0x4bb450::core::option::Option$LT$T$GT$::map_or_else::h443112b6ce900918();
        ::0x4ba5e0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h201e2b6c2cdf2ea1(&v23);
        v77->field_10 = v2;
        v77->field_0 = *((int128_t *)&v0);
        ::0x4ba5e0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h201e2b6c2cdf2ea1(&v20);
        ::0x4ba5e0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h201e2b6c2cdf2ea1(&v17);
        ::0x4ba5e0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h201e2b6c2cdf2ea1(&v5);
        v78 = &v8;
    }
    ::0x4babc0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h344034719bce8318(v78);
    return v77;
}

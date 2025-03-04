long long uu_cat::cat_files::h6abdb7a5d8f0206f(unsigned long a0, unsigned long a1, void* a2)
{
    char *v0;  // [sp-0x248]
    unsigned long long v1;  // [sp-0x240]
    struct struct_0 **v2;  // [sp-0x238], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x230]
    void* v4;  // [sp-0x220], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v5;  // [sp-0x218]
    unsigned long long v6;  // [sp-0x210]
    char v7;  // [sp-0x208]
    void* v8;  // [sp-0x200]
    unsigned long long v9;  // [sp-0x1f8]
    void* v10;  // [sp-0x1f0]
    unsigned long long v11;  // [sp-0x1e8]
    unsigned short v12;  // [sp-0x1e0]
    char v13;  // [sp-0x1de]
    unsigned long v14;  // [sp-0x1d8]
    unsigned long long v15;  // [sp-0x1d0]
    char *v16;  // [sp-0x1c8]
    unsigned long long v17;  // [sp-0x1b8]
    char v18;  // [bp-0x1b0]
    char v19;  // [bp-0x1a0]
    char *v20;  // [bp-0x198], Other Possible Types: unsigned long
    char v21;  // [sp-0x190], Other Possible Types: unsigned long long
    struct struct_0 **v22;  // [sp-0x188], Other Possible Types: unsigned long long
    char *v23;  // [bp-0x180], Other Possible Types: unsigned int, unsigned long long
    void* v24;  // [sp-0x178]
    char v25;  // [bp-0xf8]
    char v26;  // [bp-0xe8]
    char v27;  // [bp-0xe0]
    char *v28;  // [sp-0xc8]
    char v29;  // [bp-0xc0]
    unsigned long long v31[3];  // rax
    int v32;  // ymm0
    unsigned long long v33;  // r15
    unsigned long long v34;  // r12
    char *v35;  // r9
    char *v36;  // xmm0
    void* v37;  // rbx
    unsigned long v38;  // rdx
    unsigned long long v39;  // rbx

    v4 = std::io::stdio::stdout::h077da66234850927();
    uucore::features::fs::FileInformation::from_file::h44cb74378482ad19(&v20);
    if (!v20)
    {
        memcpy(&v29, &v21, 144);
        v28 = 1;
    }
    else
    {
        v28 = 0;
        core::ptr::drop_in_place$LT$core..result..Result$LT$uucore..features..fs..FileInformation$C$std..io..error..Error$GT$$GT$::h88aced0ed65ad377(&v20);
    }
    v11 = 1;
    v12 = 1;
    v13 = 0;
    v8 = 0;
    v9 = 8;
    v10 = 0;
    v14 = a0;
    v15 = a0 + a1 * 24;
    v31 = ::0x4ae060::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0f5f6c5f762ec4b9(&v14);
    if (v31)
    {
        do
        {
            v33 = v31[1];
            v34 = v31[2];
            v35 = v28;
            if (v35)
                v35 = &v29;
            uu_cat::cat_path::h3f1de2b8bdfd86c8(&v18, v33, v34, a2, &v11, v35);
            if (*((long long *)&v18) != 9223372036854775814)
            {
                v17 = *((long long *)&v19);
                v36 = *((int128_t *)&v18);
                v32 = v32 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v36;
                v16 = v36;
                v4 = 0;
                v5 = v33;
                v6 = v34;
                v7 = 0;
                v0 = &v4;
                v1 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                v2 = &v16;
                v3 = _$LT$uu_cat..CatError$u20$as$u20$core..fmt..Display$GT$::fmt::h57a85781e439a5e8;
                v20 = &g_5185e8;
                v21 = 2;
                v24 = 0;
                v22 = &v0;
                v23 = 2;
                core::option::Option$LT$T$GT$::map_or_else::h4b4049542ff9b626(&v27, &v20);
                alloc::vec::Vec$LT$T$C$A$GT$::push::hf1bb32e3c1651b49(&v8, &v27);
                core::ptr::drop_in_place$LT$uu_cat..CatError$GT$::hfbd18e323f720f0a(&v16);
            }
            v31 = ::0x4ae060::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0f5f6c5f762ec4b9(&v14);
        } while (v31);
        if (*((char *)&v12 + 1))
        {
            v20 = &g_518608;
            v21 = 1;
            v22 = 8;
            *((uint128_t *)&v23) = 0;
            std::io::stdio::_print::he918bceb0c89db46(&v20);
        }
    }
    if (!v10)
    {
        v37 = 0;
    }
    else
    {
        v4 = uucore::util_name::h60d842bf27b05e82();
        v5 = v38;
        v0 = &v4;
        v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h59ee80d913007d2d;
        v20 = &g_518618;
        v21 = 2;
        v24 = 0;
        v22 = &v0;
        v23 = 1;
        core::option::Option$LT$T$GT$::map_or_else::h4b4049542ff9b626(&v25, &v20);
        *((int128_t *)&v0) = *((int128_t *)&v25);
        v2 = *((long long *)&v26);
        v39 = v10;
        alloc::str::join_generic_copy::h1c39acc797b18d82(&v4, v9, v39, v1, *((long long *)&v26));
        v22 = v6;
        *((int128_t *)&v20) = *((int128_t *)&v4);
        v23 = v39;
        v37 = alloc::boxed::Box$LT$T$GT$::new::hb263d7b6b0ccd5df(&v20);
        ::0x4ad2b0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3711f10ec472aa2e(&v0);
    }
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h407b6df26ef1b321(&v8);
    return v37;
}

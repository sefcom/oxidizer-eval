int uu_mv::move_files_into_dir::h3b78fcc83acf4690()
{
    char v0;  // [sp-0x371]
    struct struct_4 **v1;  // [sp-0x370]
    void* v2;  // [sp-0x358]
    unsigned long long v3;  // [sp-0x350]
    void* v4;  // [sp-0x348], Other Possible Types: struct struct_1 **
    void* v11;  // [bp-0x318], Other Possible Types: struct_1 *, char, unsigned long long, unsigned long
    unsigned int v12;  // [sp-0x310]
    char v13;  // [sp-0x30c]
    void* v14;  // [bp-0x308], Other Possible Types: struct struct_1 **
    struct struct_1 **v17;  // [bp-0x2f8], Other Possible Types: unsigned long
    unsigned long long v19;  // [sp-0x2f0]
    unsigned long long v20;  // [sp-0x2e8]
    char v21;  // [bp-0x2e0]
    char v33;  // [bp-0x230], Other Possible Types: unsigned int, unsigned long, unsigned long long
    char v34;  // [sp-0x22c]
    struct_1 *v35;  // [bp-0x228], Other Possible Types: char, unsigned int
    char v36;  // [sp-0x224]
    unsigned long long v37;  // [bp-0x223]
    char v38;  // [bp-0x220]
    unsigned int v40;  // [sp-0x21c]
    unsigned long long v41;  // [sp-0x218]
    char v42;  // [bp-0x210]
    unsigned long v44;  // [sp-0x200]
    void* v54;  // [bp-0x158], Other Possible Types: struct_1 *
    unsigned long long v55;  // [sp-0x148]
    int v59;  // [bp-0x108], Other Possible Types: struct_1 *, char
    unsigned long long v60;  // [sp-0xf8]
    struct_1 *v62;  // [sp-0xe8]
    struct_1 *v63;  // [sp-0xd8]
    struct struct_1 **v64;  // [sp-0xc8]
    unsigned long long v65;  // [sp-0xc0]
    unsigned long long v69;  // [sp-0xa0]
    struct struct_7 **v83;  // fs
    struct_5 *v84;  // rax
    struct struct_1 **v85;  // r14
    unsigned long long v86;  // r15
    struct_5 *v87;  // rax
    unsigned long long v88;  // rsi
    struct_1 *v89;  // xmm0
    int v90;  // ymm0
    int v91;  // ymm0
    struct_1 *v92;  // xmm1
    int v93;  // ymm1
    int v94;  // ymm1
    struct_1 *v95;  // rdx
    unsigned long long v96;  // rcx
    struct struct_1 **v97;  // rbp
    struct_1 *v99;  // xmm0
    struct_3 *v100;  // rax
    unsigned long long v101;  // rdx
    unsigned long long v102;  // rsi
    unsigned long long v103;  // rdi
    char v104[55];  // r8
    struct_1 *v105;  // xmm0
    struct_1 *v106;  // xmm1
    unsigned long long v107;  // rdx
    unsigned int v108;  // ecx
    char v109;  // al
    unsigned int v110;  // ecx
    char v111;  // al
    struct_1 *v112;  // xmm0
    struct_1 *v113;  // xmm0
    struct_6 *v114;  // r14
    struct struct_4 **v216;  // rax

    if (*((long long *)&*(v83)->padding_-28[40]))
    {
        v84 = &*(v83)->padding_-28[40];
        v85 = v84->field_8;
        v86 = v84->field_10;
    }
    else
    {
        v85 = std::sys::pal::unix::rand::hashmap_random_keys::h37536acea0ea3646();
        v87 = &*(v83)->padding_-28[40];
        v87->field_0 = 1;
        v87->field_8 = v85;
        v87->field_10 = v86;
    }
    *((struct struct_1 ***)&*(v83)->padding_-28[32]) = (char *)v85 + 1;
    hashbrown::raw::RawTable$LT$T$C$A$GT$::with_capacity_in::hd6a0adbd076dc13e(&v11, v88);
    v17 = v85;
    v19 = v86;
    v89 = *((int128_t *)&v11);
    v91 = v90 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v89;
    v92 = *((int128_t *)&v14);
    v94 = v93 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v92;
    v62 = v89;
    v63 = v92;
    v64 = v17;
    v65 = v19;
    if (!(char)std::path::Path::is_dir::h9ac0db933706da51(v95, v96))
    {
        v2 = 0;
        v3 = 1;
        v4 = 0;
        v20 = 32;
        v21 = 3;
        v11 = 0;
        v14 = 0;
        v17 = &v2;
        v19 = &g_530620;
        std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&v33, v95, v96);
        if ((!*((long long *)&v33) ? (char)_ZN10os_display4unix5write17hdefd8f6d04dd5fe6E.llvm.2548367946977071697(&v11, *((long long *)&v35), *((long long *)&v38), 1) : (char)_ZN10os_display4unix13write_escaped17hb8cc7986a1b70e05E.llvm.2548367946977071697(&v11, v95, v96)))
            core::result::unwrap_failed::h39784290e544308e(); /* do not return */
        *((int128_t *)&v35) = *((int128_t *)&v2);
        v41 = v4;
        v33 = 7;
        v100 = __rust_alloc(56, 8);
        if (!v100)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        v100->field_30 = v44;
        v105 = *((int128_t *)&v33);
        v106 = *((int128_t *)&(&v35)[1]);
        v100->field_20 = *((int128_t *)&v42);
        *((struct_1 **)&v100->field_10) = v106;
        *((struct_1 **)&v100->field_0) = v105;
        _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h8780a5458d26b795(&v62);
        goto LABEL_4a5a84;
        goto LABEL_4a5a84;
    }
    v97 = &v11;
    std::sys::pal::unix::fs::canonicalize::hd88c363c78336f06(&v11, v95, v96);
    if (v11 != 0x8000000000000000)
    {
        v60 = v14;
        v99 = *((int128_t *)&v11);
        v91 = v91 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v99;
        v59 = v99;
    }
    else
    {
        v33 = *((long long *)&(&v11)[8]);
        std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&v59, v95, v96);
        ::0x49ec20::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h5905b32231466f9a(&v33);
    }
    if (!v104[51])
    {
        v1 = 0;
        goto LABEL_4a48c9;
    }
    v1 = _$LT$indicatif..multi..MultiProgress$u20$as$u20$core..default..Default$GT$::default::hc3e7c383b854c247(v103, v102, v101);
    if (v88 <= 1)
    {
LABEL_4a48c9:
        v54 = 0;
        if (!v88)
        {
            v216 = v1;
            if (v216)
            {
LABEL_4a5a45:
                *(v216) = vvar_2112 - 1;
                if (CasCmpNE(*(v216), vvar_2112))
                    goto LABEL_4a5a45;
                if ((Not ((vvar_2112 - 0x1<64>) == 0x0<64>))) { Goto None } else { Goto None }
                alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h1ea9576450e109ad(&v1);
            }
            if ((long long)v59)
                __rust_dealloc((&v59)[1]);
            _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h8780a5458d26b795(&v62);
LABEL_4a5a84:
            return;
        }
        goto LABEL_4a48de;
    }
    indicatif::draw_target::ProgressDrawTarget::stderr::h4a66a105bd7b0684(&v11, v88, v95);
    indicatif::progress_bar::ProgressBar::with_draw_target::h56a557ce18c94842(&v2, 1, v88, &v11);
    _ZN9indicatif5style8Template8from_str17h5ab5ab07129954d3E.llvm.7449428882404917472(&v11, "moving {msg} {wide_bar} {pos}/{len}will not overwrite just-created ''cannot move 'not replacing ?", 35);
    v107 = v11;
    v108 = v12;
    v109 = v13;
    if (v107 == 0x8000000000000000)
    {
        v12 = v108;
        v13 = v109;
        v11 = 0x8000000000000000;
        goto LABEL_4a5bd5;
    }
    else
    {
        v40 = *((int *)((char *)&v14 + 4));
        v37 = *((long long *)&(&v11)[13]);
        v33 = v107;
        v35 = v108;
        v36 = v109;
        _ZN9indicatif5style13ProgressStyle3new17he63c0f651a0a86f8E.llvm.7449428882404917472(&v11, &v33);
        if (v11 == 0x8000000000000000)
        {
            v110 = v12;
            v111 = v13;
LABEL_4a5bd5:
            v33 = v110;
            v34 = v111;
            core::result::unwrap_failed::h39784290e544308e(); /* do not return */
        }
        memcpy(&v33, &v11, 136);
        indicatif::progress_bar::ProgressBar::set_style::ha2f60e08e54542c2(&v2, &v33);
        v14 = v4;
        v112 = *((int128_t *)&v2);
        v11 = v112;
        _ZN9indicatif5multi13MultiProgress11internalize17h03a75050af0b4f55E.llvm.3185967499565818134(&v33, v1, 0, v96, &v11);
        v113 = *((int128_t *)&v33);
        v91 = v91 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v112 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v113;
        v54 = v113;
        v55 = *((long long *)((char *)&v37 + 3));
LABEL_4a48de:
        v69 = &v114[v88];
        v0 = v104[54];
    }
}

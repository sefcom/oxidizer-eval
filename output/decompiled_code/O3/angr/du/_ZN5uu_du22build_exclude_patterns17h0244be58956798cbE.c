long long uu_du::build_exclude_patterns::h0244be58956798cb(unsigned long long a0[3], unsigned long long a1)
{
    char v0;  // [bp-0x2e8], Other Possible Types: unsigned long long, unsigned long
    unsigned long long v1;  // [sp-0x2e0]
    struct struct_1 **v2;  // [bp-0x2d8], Other Possible Types: char, unsigned long
    unsigned long long v3;  // [sp-0x2d0]
    void* v4;  // [bp-0x2c8], Other Possible Types: char, unsigned long
    char v5;  // [bp-0x2b8]
    char v6;  // [bp-0x2b0]
    void* v7;  // [sp-0x2a0]
    unsigned long long v8;  // [sp-0x298]
    void* v9;  // [sp-0x290]
    int v10;  // [sp-0x288]
    unsigned long long v11;  // [sp-0x278]
    struct struct_0 **v12;  // [sp-0x268], Other Possible Types: unsigned long long
    int v13;  // [bp-0x260], Other Possible Types: unsigned long
    unsigned long long v14;  // [sp-0x250]
    char *v15;  // [sp-0x248]
    char v16;  // [bp-0x238]
    char v17;  // [bp-0x230]
    char v18;  // [bp-0x220]
    int v19;  // [sp-0x218]
    unsigned long long v20;  // [sp-0x208]
    unsigned long v21;  // [sp-0x1f8], Other Possible Types: unsigned long long
    unsigned long long v22;  // [sp-0x1f0]
    int v23;  // [sp-0x1e8]
    int v24;  // [sp-0x1d8]
    unsigned long long v25;  // [sp-0x1c8]
    unsigned long long v26;  // [sp-0x1c0]
    int v27;  // [sp-0x1b8]
    int v28;  // [sp-0x1a8]
    int v29;  // [sp-0x198]
    unsigned long long v30;  // [sp-0x188]
    unsigned long v31;  // [sp-0x178], Other Possible Types: unsigned long long
    unsigned long long v32;  // [sp-0x170]
    int v33;  // [sp-0x168]
    int v34;  // [sp-0x158]
    unsigned long long v35;  // [sp-0x148]
    unsigned long long v36;  // [sp-0x140]
    void* v37;  // [sp-0x138]
    void* v38;  // [sp-0x118]
    char v39;  // [bp-0xf8]
    char v40;  // [bp-0x70]
    unsigned long long v42;  // rax
    int v43;  // xmm1
    int v44;  // ymm1
    int v45;  // ymm1
    int v46;  // xmm0
    int v47;  // ymm0
    int v48;  // ymm0
    unsigned long long v50;  // rdx
    int v51;  // ymm0
    int v52;  // ymm1
    unsigned long long v54;  // rax
    int v55;  // xmm1
    int v56;  // ymm1
    int v57;  // xmm0
    int v58;  // ymm0
    unsigned long long v60;  // rdx
    unsigned long long v62;  // rdx
    int v63;  // ymm2
    int v64;  // xmm0
    unsigned long long v65;  // rsi
    unsigned long long v66;  // rdx
    int v67;  // xmm0
    int v68;  // xmm1
    int v69;  // xmm2
    unsigned long long v70[3];  // rbx

    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h953ea969162f50f8(&v39, a1, "exclude-from", 12);
    clap_builder::parser::error::MatchesError::unwrap::hb780f1080a7373fe(&v0, "exclude-from", 12, &v39);
    v42 = v0;
    if (!v42)
    {
        v48 = v51 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
        v45 = v52 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | &_ZN105_$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..default..Default$GT$7default5EMPTY17h09c5f4cd0790faa8E;
        v42 = core::ops::function::FnOnce::call_once::h72c1b05cc1f9fa6c;
        v50 = 0;
    }
    else
    {
        v43 = *((int128_t *)&v2);
        v45 = v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v43;
        v46 = *((int128_t *)&v4);
        v48 = v47 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v46;
        v50 = *((long long *)&v6);
    }
    v31 = v42;
    v32 = "a Display implementation returned an error unexpectedly/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/string.rs";
    v33 = v43;
    v34 = v46;
    v35 = *((long long *)&v5);
    v36 = v50;
    v37 = 0;
    v38 = 0;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h953ea969162f50f8(&v39, a1, "excludeadding  to the exclude list \n", 7);
    clap_builder::parser::error::MatchesError::unwrap::hb780f1080a7373fe(&v0, "excludeadding  to the exclude list \n", 7, &v39);
    v54 = v0;
    if (!v54)
    {
        v58 = v48 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
        v56 = v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | &_ZN105_$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..default..Default$GT$7default5EMPTY17h09c5f4cd0790faa8E;
        v54 = core::ops::function::FnOnce::call_once::h72c1b05cc1f9fa6c;
        v60 = 0;
    }
    else
    {
        v55 = *((int128_t *)&v2);
        v56 = v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v55;
        v57 = *((int128_t *)&v4);
        v58 = v48 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v57;
        v60 = *((long long *)&v6);
    }
    v21 = v54;
    v22 = "a Display implementation returned an error unexpectedly/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/string.rs";
    v23 = v55;
    v24 = v57;
    v25 = *((long long *)&v5);
    v26 = v60;
    v7 = 0;
    v8 = 8;
    v9 = 0;
    core::iter::traits::iterator::Iterator::chain::h824cd8d0da99cd57(&v39, &v21, &v31);
    while (true)
    {
        core::iter::adapters::chain::and_then_or_clear::h7b1f33d6297e46cc(&v0, &v40, v62);
        core::option::Option$LT$T$GT$::or_else::h579344e00d3a2941(&v17, &v0, &v39);
        if (*((long long *)&v17) == 0x8000000000000000)
        {
            core::ptr::drop_in_place$LT$core..iter..adapters..chain..Chain$LT$core..iter..adapters..cloned..Cloned$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$alloc..string..String$GT$$GT$$C$core..iter..adapters..flatten..FlatMap$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$alloc..string..String$GT$$C$alloc..vec..Vec$LT$alloc..string..String$GT$$C$uu_du..file_as_vec$LT$$RF$alloc..string..String$GT$$GT$$GT$$GT$::h744c40be5be13de6(&v39);
            v70 = a0;
            v70[2] = v9;
            *((int128_t *)&v70[0]) = *((int128_t *)&v7);
            return v70;
        }
        v11 = *((long long *)&v18);
        v64 = *((int128_t *)&v17);
        v10 = v64;
        if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "verbose: \n\ttotal\t: read error: Is a directorycannot open '' for reading: No such file or directory:", 7))
        {
            v15 = &v10;
            v12 = &v15;
            v13 = _$LT$$RF$T$u20$as$u20$core..fmt..Debug$GT$::fmt::h8051b657d9275cd0;
            v0 = &g_584500;
            v1 = 2;
            v4 = 0;
            v2 = &v12;
            v3 = 1;
            std::io::stdio::_print::he918bceb0c89db46(&v0, v65, v66);
        }
        uucore::parser::parse_glob::from_str::h2653254823aa606f(&v0, (long long)(&v10)[8], v11);
        if (v0 == 0x8000000000000000)
        {
            v20 = v3;
            *((int128_t *)&v19) = *((int128_t *)&v1);
            _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h9c7f10ebc418a7a6(&v15, &v19);
            v14 = *((long long *)&v16);
            *((int128_t *)&v13) = *((int128_t *)&v15);
            v12 = 4;
            v70 = a0;
            *((double *)&v70[1]) = alloc::boxed::Box$LT$T$GT$::new::h19aedf1648b3dc3b(&v12);
            v70[2] = &g_584558;
            v70[0] = 0x8000000000000000;
            ::0x4ef6e0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5d86c71ca1632ad3(&v10);
            core::ptr::drop_in_place$LT$core..iter..adapters..chain..Chain$LT$core..iter..adapters..cloned..Cloned$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$alloc..string..String$GT$$GT$$C$core..iter..adapters..flatten..FlatMap$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$alloc..string..String$GT$$C$alloc..vec..Vec$LT$alloc..string..String$GT$$C$uu_du..file_as_vec$LT$$RF$alloc..string..String$GT$$GT$$GT$$GT$::h744c40be5be13de6(&v39);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$glob..Pattern$GT$$GT$::h2295170400e3c987(&v7);
            return v70;
        }
        v30 = *((long long *)&v5);
        v67 = *((int128_t *)&v0);
        v58 = v58 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v64 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v67;
        v68 = *((int128_t *)&v2);
        v56 = v56 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v68;
        v69 = *((int128_t *)&v4);
        v63 = v63 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v69;
        v29 = v69;
        v28 = v68;
        v27 = v67;
        alloc::vec::Vec$LT$T$C$A$GT$::push::hac7bdcf882db601a(&v7, &v27, v66);
        ::0x4ef6e0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5d86c71ca1632ad3(&v10);
    }
}

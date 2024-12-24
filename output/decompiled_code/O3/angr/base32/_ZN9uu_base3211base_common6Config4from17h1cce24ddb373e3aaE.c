long long uu_base32::base_common::Config::from::h1cce24ddb373e3aa(struct_0 *a0, unsigned long long a1)
{
    unsigned long v0;  // [sp-0x1c0], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x1b8]
    char v2;  // [sp-0x1b0], Other Possible Types: unsigned long long
    char v3;  // [bp-0x1a0]
    void* v4;  // [sp-0x198], Other Possible Types: unsigned long long
    int v5;  // [bp-0x190], Other Possible Types: unsigned long long
    unsigned long long v6;  // [sp-0x188]
    char v7;  // [sp-0x180]
    char v8;  // [bp-0x178]
    unsigned int v9;  // [sp-0x160]
    char v10;  // [bp-0x158], Other Possible Types: unsigned long, unsigned long long
    unsigned long v11;  // [sp-0x150], Other Possible Types: unsigned long long
    unsigned long long v12;  // [sp-0x148]
    unsigned long long v13;  // [sp-0x140]
    void* v14;  // [sp-0x138]
    int v15;  // [sp-0xa8]
    int v16;  // [sp-0x98]
    int v17;  // [sp-0x88]
    int v18;  // [sp-0x78]
    char v19;  // [bp-0x68]
    char v20;  // [bp-0x58]
    char v21;  // [bp-0x48]
    char v22;  // [bp-0x38]
    unsigned long long v24;  // r15
    unsigned long long v25;  // rsi
    unsigned long long v26;  // rdx
    unsigned long long v27[3];  // rax
    unsigned long long v28[3];  // r15
    struct_1 *v29;  // rax
    unsigned long long v30;  // r12
    unsigned long long v31;  // rax
    unsigned long long v33;  // rsi
    unsigned long long v34[3];  // rax
    unsigned long long v35;  // r12
    unsigned long long v36;  // rax

    v24 = "filei128";
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h47ec63c0ddb7fece(&v10, a1, "filei128", 4);
    clap_builder::parser::error::MatchesError::unwrap::h31172c0f33dba623(&v19, "filei128", 4, &v10);
    if (*((long long *)&v19))
    {
        *((int128_t *)&v18) = *((int128_t *)&v22);
        *((int128_t *)&v17) = *((int128_t *)&v21);
        *((int128_t *)&v16) = *((int128_t *)&v20);
        *((int128_t *)&v15) = *((int128_t *)&v19);
        v27 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hdfbefd116ffa6ed0(&v15, v25, v26);
        if (!v27)
            core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
        v28 = v27;
        v29 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hdfbefd116ffa6ed0(&v15, v25, v26);
        if (v29)
        {
            v4 = 0;
            *((int128_t *)&v5) = *((int128_t *)&(&v29->padding_0)[1]);
            v7 = 1;
            v0 = &v4;
            v1 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
            v10 = &g_54a228;
            v11 = 1;
            v14 = 0;
            v12 = &v0;
            v13 = 1;
            core::option::Option$LT$T$GT$::map_or_else::h7c2a51b30d484005(&v8, &v10);
            v9 = 1;
            v31 = alloc::boxed::Box$LT$T$GT$::new::h83f51b5d4253ce73(&v8);
            a0->field_8 = v31;
            a0->field_10 = &g_54a270;
            a0->field_0 = 2;
            return a0;
        }
        v30 = v28[1];
        v24 = v28[2];
        if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h6feb5577dd020ba2(v30, v24, "-: No such file or directoryinvalid wrap size: ", 1))
        {
            std::fs::metadata::h07be8a9f86a14298(&v10, v30, v24);
            v33 = v11;
            if (v10 == 2)
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h67874064de7ffc10(2, v33);
                v4 = 1;
                v5 = v30;
                v6 = v24;
                v7 = 0;
                v0 = &v4;
                v1 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                v10 = &g_54a2e0;
                v11 = 2;
                v14 = 0;
                v12 = &v0;
                v13 = 1;
                core::option::Option$LT$T$GT$::map_or_else::h7c2a51b30d484005(&v8, &v10);
                v9 = 1;
                v31 = alloc::boxed::Box$LT$T$GT$::new::h24a68ea56b0c4508(&v8);
                a0->field_8 = v31;
                a0->field_10 = &g_54a338;
                a0->field_0 = 2;
                return a0;
            }
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h67874064de7ffc10(v10, v33);
            std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&v2, v30, v24);
LABEL_4c13c1:
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hc8e9943e8f663b30(&v10, a1, "wrap", 4);
            v34 = clap_builder::parser::error::MatchesError::unwrap::h623db79eb3cda0a4("wrap", 4, &v10);
            if (!v34)
            {
                v35 = 0;
            }
            else
            {
                uu_base32::base_common::Config::from::_$u7b$$u7b$closure$u7d$$u7d$::he9e50606a9a9c47b(&v10, v34[1], v34[2]);
                v36 = v10;
                v24 = v11;
                if (v36)
                {
                    a0->field_8 = v36;
                    a0->field_10 = v24;
                    a0->field_0 = 2;
                    core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h44d0de4942a2e05b(&v2);
                    return a0;
                }
                v35 = 1;
            }
            a0->field_20 = *((long long *)&v3);
            *((int128_t *)&a0->field_10) = *((int128_t *)&v2);
            a0->field_0 = v35;
            a0->field_8 = v24;
            a0->field_28 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a1, "decodeignore-garbagecapacity overflow/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/spec_from_iter_nested.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/mod.rs/home/34r7hm4n/.cargo/registry/src/index.crates.i", 6);
            a0->field_29 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a1, "ignore-garbagecapacity overflow/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/spec_from_iter_nested.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/mod.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/z85-3.0.5/src/lib.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/pattern.rsmid > len/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/slice/iter.rs", 14);
            return a0;
        }
    }
    v2 = 0x8000000000000000;
    goto LABEL_4c13c1;
}

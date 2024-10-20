long long uu_mkdir::uumain::h415d20c812fd0d85(unsigned long long a0, unsigned long long a1)
{
    uint128_t v0[2];  // [bp-0x6a0], Other Possible Types: char
    struct_1 *v1;  // [sp-0x698]
    char v2;  // [bp-0x690]
    unsigned long long v3;  // [sp-0x688]
    unsigned long v4;  // [sp-0x680], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0x678]
    int v6;  // [sp-0x670]
    int v7;  // [sp-0x660]
    unsigned long long v8;  // [sp-0x650]
    char v9;  // [bp-0x648], Other Possible Types: unsigned long, unsigned long long
    unsigned long v10;  // [sp-0x640], Other Possible Types: unsigned long long
    char v11;  // [bp-0x638]
    char v12;  // [bp-0x628]
    char v13;  // [bp-0x618]
    unsigned long long v14;  // [sp-0x610]
    int v15;  // [sp-0x608]
    int v16;  // [sp-0x5f8]
    char v17;  // [bp-0x5e0]
    char v18;  // [bp-0x5d0]
    int v19;  // [bp-0x5c8], Other Possible Types: char, unsigned long long
    unsigned long long v20;  // [sp-0x5c0]
    int v21;  // [sp-0x5b8], Other Possible Types: struct struct_3 **, unsigned long, unsigned long long
    unsigned int v22;  // [bp-0x5b0], Other Possible Types: unsigned long long
    int v23;  // [bp-0x5a8], Other Possible Types: void*
    unsigned long long v24;  // [sp-0x598]
    unsigned long long v25;  // [sp-0x590]
    int v26;  // [bp-0x2f8], Other Possible Types: struct struct_2 **, char, unsigned long
    unsigned long v27;  // [sp-0x2f0], Other Possible Types: unsigned long long
    char v28;  // [bp-0x2e8], Other Possible Types: unsigned long, unsigned long long
    char v29;  // [bp-0x2d8]
    char v30;  // [bp-0x2c8]
    char v31;  // [bp-0x2c0]
    int v34;  // xmm0
    int v35;  // xmm0
    uint128_t v36[2];  // r12
    unsigned long long v37;  // r14
    unsigned long long v38;  // r15
    int v39;  // ymm0
    unsigned long long v42;  // rdx
    int v43;  // xmm0
    unsigned int v45;  // eax
    unsigned long long v46;  // rdx
    unsigned long long v47;  // rsi
    uint128_t v48[2];  // r14
    struct_1 *v49;  // r15
    struct struct_0 **v50;  // rax

    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h257b0611d66f5590(&v0, a0, a1);
    uu_mkdir::uu_app::hb29a56ce8060721b(&v19);
    clap_builder::builder::command::Command::after_help::hf5a6f3678ca5eb0b(&v26, &v19, "Each MODE is of the form '[ugoa]*([-+=]([rwxXst]*|[ugo]))+|[-+=]?[0-7]+'.verboseparentscapacity overflow/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/spec_from_iter_nested.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/al", 73);
    v21 = *((long long *)&v2);
    v34 = *((int128_t *)&v0);
    v19 = v34;
    clap_builder::builder::command::Command::try_get_matches_from::h5d9adf32cb1d7cd0(&v9, &v26, &v19);
    if (v4 == 0x8000000000000000)
    {
        v36 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0cdf31ef837cc412(v5);
        if (!(!v36))
            goto LABEL_4380e4;
    }
    else
    {
        v8 = *((long long *)&v13);
        v35 = *((int128_t *)&v11);
        *((int128_t *)&v7) = *((int128_t *)&v12);
        v6 = v35;
        v4 = v9;
        v5 = v10;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h229fc054d8f96f52(&v19, &v4, &g_410630, 4);
        clap_builder::parser::error::MatchesError::unwrap::hd78ba40ffe568c0a(&v26, &g_410630, 4, &v19);
        v37 = v26;
        if (!v37)
        {
            *((int128_t *)&v16) = 0;
            *((uint128_t *)&v15) = v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v35 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | &_ZN105_$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..default..Default$GT$7default5EMPTY17h6966785369e74fefE;
            v3 = "&";
            v37 = core::ops::function::FnOnce::call_once::h251d1ce689f653ef;
            v38 = 0;
        }
        else
        {
            v3 = v27;
            *((int128_t *)&v15) = *((int128_t *)&v28);
            *((int128_t *)&v16) = *((int128_t *)&v29);
            v14 = *((long long *)&v30);
            v38 = *((long long *)&v31);
        }
        uu_mkdir::get_mode::h658ab6c2b70dc631(&v26, &v4, (unsigned int)uu_mkdir::strip_minus_from_mode::h40c5bb821f0b6458(&v0));
        if (v26 == 0x8000000000000000)
        {
            v42 = (unsigned int)v27;
            v19 = v37;
            v20 = v3;
            v21 = v15;
            v23 = v16;
            v24 = v14;
            v25 = v38;
            v36 = uu_mkdir::exec::h4014525a0abbacf8(&v19, (unsigned int)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v4, "parentscapacity overflow/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/spec_from_iter_nested.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/mod.rsError flushing stdout: \n/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/util/flat_map.rsMismatch between definition and access of ``. /home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/parser/error.rs", 7), v42, (unsigned int)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v4, "verboseparentscapacity overflow/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/spec_from_iter_nested.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/mod.rsError flushing stdout: \n/home/34r7hm4n/.cargo/registry/", 7));
        }
        else
        {
            v21 = v28;
            *((int128_t *)&v19) = *((int128_t *)&v26);
            v22 = 1;
            v36 = __rust_alloc(32, 8);
            if (!v36)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            v43 = (int128_t)v19;
            v36[1] = *((int128_t *)&v21);
            *((void*)&v36[0]) = v43;
        }
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h47be9ca37be7cabe(&v4);
        if (v36)
        {
LABEL_4380e4:
            *((uint128_t *[2])&v0[0]) = v36;
            v1 = &g_4e27c8.field_0;
            v26 = &v0;
            v27 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h16b76fdec6d19d46;
            v19 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
            v20 = 1;
            v23 = 0;
            v21 = &v26;
            v22 = 1;
            alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v17, &v19);
            *((int128_t *)&v26) = *((int128_t *)&v17);
            v28 = *((long long *)&v18);
            if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hd24211c28ba802b5(v27, *((long long *)&v18), 1, 0))
            {
                v9 = uucore::util_name::h359eff083fe53467();
                v10 = v46;
                v4 = &v9;
                v5 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hd6728571d1033c0e;
                v19 = &g_4e2730;
                v20 = 2;
                v23 = 0;
                v21 = &v4;
                v22 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v19, v47, v46);
                v9 = &v26;
                v10 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v19 = &g_4e2750;
                v20 = 2;
                v23 = 0;
                v21 = &v9;
                v22 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v19, v47, v46);
            }
            if ((char)v1->field_68(v0))
            {
                v9 = uucore::execution_phrase::hded5ccd87df1fcab();
                v10 = v46;
                v4 = &v9;
                v5 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hd6728571d1033c0e;
                v19 = &g_4e2770;
                v20 = 2;
                v23 = 0;
                v21 = &v4;
                v22 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v19, v47, v46);
            }
            v45 = v1->field_60(v0);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h6211dac8c8fceeef();
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h2dc565339c5296be(&v26);
            v48 = v0;
            v49 = v1;
            if (v49->field_0)
                v50(v48);
            if (v49->field_8)
            {
                __rust_dealloc(v48);
                return v45;
            }
            return v45;
        }
    }
    v45 = uucore::mods::error::get_exit_code::hf050de69600a682c();
    return v45;
}

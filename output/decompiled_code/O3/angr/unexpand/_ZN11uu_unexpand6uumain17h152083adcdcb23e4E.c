long long uu_unexpand::uumain::h152083adcdcb23e4(unsigned long long a0, unsigned long long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    struct_2 *v0;  // [bp-0x3c0], Other Possible Types: char
    struct_1 *v1;  // [sp-0x3b8], Other Possible Types: unsigned long long
    char v2;  // [bp-0x3b0]
    int v3;  // [bp-0x3a8], Other Possible Types: char, unsigned long long
    unsigned long long v4;  // [sp-0x3a0]
    unsigned long long v5;  // [sp-0x398]
    int v6;  // [bp-0x388], Other Possible Types: struct struct_2 **, char, unsigned long, unsigned long long
    int v7;  // [sp-0x380], Other Possible Types: unsigned long, unsigned long long
    char v8;  // [bp-0x378], Other Possible Types: unsigned long long
    unsigned long long v9;  // [sp-0x370]
    int v10;  // [sp-0x368]
    unsigned long v11;  // [sp-0x358], Other Possible Types: unsigned long long
    unsigned long v12;  // [sp-0x348], Other Possible Types: unsigned long long
    unsigned long long v13;  // [sp-0x340]
    int v14;  // [sp-0x338]
    int v15;  // [sp-0x328]
    unsigned long long v16;  // [sp-0x318]
    char v17;  // [bp-0x310]
    char v18;  // [bp-0x300]
    int v19;  // [bp-0x2f8], Other Possible Types: char, unsigned long, unsigned long long
    char v20;  // [bp-0x2f0], Other Possible Types: unsigned long long
    struct struct_3 **v21;  // [sp-0x2e8], Other Possible Types: unsigned long long
    unsigned long v22;  // [sp-0x2e0], Other Possible Types: unsigned long long
    void* v23;  // [bp-0x2d8], Other Possible Types: char
    char v24;  // [bp-0x2c8]
    struct_2 *v26;  // r12
    struct_2 *v27;  // rax
    unsigned long long v28;  // rsi
    unsigned long long v29;  // rdx
    unsigned long long v30;  // r8
    unsigned long long v31;  // r9
    unsigned int v33;  // eax
    struct_2 *v34;  // r14
    struct_1 *v35;  // r15
    struct struct_0 **v36;  // rax

    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h7de2cc84d25c4f70(&v0, a0, a1);
    uu_unexpand::uu_app::h421bde2452c4a490(&v19);
    uu_unexpand::expand_shortcuts::h9eafad101c3f6e03(&v3, v1, *((long long *)&v2));
    clap_builder::builder::command::Command::try_get_matches_from::h20ea592a9dac6518(&v6, &v19, &v3);
    if (v12 == 0x8000000000000000)
    {
        v26 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0cdf31ef837cc412(v13);
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h6fa2a0b0e181e309(&v0);
        _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h913965720d63ec12(&v0);
        if (!(!v26))
            goto LABEL_439eae;
    }
    else
    {
        v16 = v11;
        v15 = v10;
        *((int128_t *)&v14) = *((int128_t *)&v8);
        v12 = v6;
        v13 = v7;
        uu_unexpand::Options::new::hdff57e00de1903b4(&v19, &v12);
        *((int128_t *)&v3) = *((int128_t *)&v20);
        v5 = v22;
        if (v6 != 0x8000000000000000)
        {
            v11 = *((long long *)&v24);
            *((int128_t *)&v10) = *((int128_t *)&v23);
            *((int128_t *)&v7) = (int128_t)v3;
            v9 = v5;
            v6 = v19;
            v26 = uu_unexpand::unexpand::hcbf341a5ca36046d(&v6, v28, v29, v5, v30, v31);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hc72808a277bf8831(&v12);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h6fa2a0b0e181e309(&v0);
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h913965720d63ec12(&v0);
            core::ptr::drop_in_place$LT$uu_unexpand..Options$GT$::h87fd9d7a58416999(&v6);
            if (!(!v26))
                goto LABEL_439eae;
        }
        else
        {
            v21 = v5;
            *((int128_t *)&v19) = (int128_t)v3;
            v27 = __rust_alloc(24, 8);
            if (!v27)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            v26 = v27;
            v26->field_10 = v21;
            v26->field_0 = (int128_t)v19;
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hc72808a277bf8831(&v12);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h6fa2a0b0e181e309(&v0);
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h913965720d63ec12(&v0);
LABEL_439eae:
            v0 = v26;
            v1 = &g_4e42d8.field_0;
            v6 = &v0;
            v7 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hc02948e286bdcae0;
            v19 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
            v20 = 1;
            v23 = 0;
            v21 = &v6;
            v22 = 1;
            alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v17, &v19);
            *((int128_t *)&v6) = *((int128_t *)&v17);
            v8 = *((long long *)&v18);
            if (v8)
            {
                v12 = uucore::util_name::h359eff083fe53467();
                v13 = v29;
                v3 = &v12;
                v4 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::haa9dfeb8c152cc38;
                v19 = &g_4e4240;
                v20 = 2;
                v23 = 0;
                v21 = &v3;
                v22 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v19, v28, v29);
                v12 = &v6;
                v13 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v19 = &g_4e4260;
                v20 = 2;
                v23 = 0;
                v21 = &v12;
                v22 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v19, v28, v29);
            }
            if ((char)v1->field_68(v0))
            {
                v12 = uucore::execution_phrase::hded5ccd87df1fcab();
                v13 = v29;
                v3 = &v12;
                v4 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::haa9dfeb8c152cc38;
                v19 = &g_4e4280;
                v20 = 2;
                v23 = 0;
                v21 = &v3;
                v22 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v19, v28, v29);
            }
            v33 = v1->field_60(v0);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he6b8c26b0599ba52();
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h4c6567589919c035(&v6);
            v34 = v0;
            v35 = v1;
            if (v35->field_0)
                v36(v34);
            if (v35->field_8)
            {
                __rust_dealloc(v34);
                return v33;
            }
            return v33;
        }
    }
    v33 = uucore::mods::error::get_exit_code::hf050de69600a682c();
    return v33;
}

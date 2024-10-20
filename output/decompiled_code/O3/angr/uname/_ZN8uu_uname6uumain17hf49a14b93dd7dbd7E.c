long long uu_uname::uumain::hf49a14b93dd7dbd7(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [sp-0x452]
    char v1;  // [sp-0x451]
    unsigned long v2;  // [sp-0x450], Other Possible Types: unsigned long long
    struct_1 *v3;  // [sp-0x448], Other Possible Types: unsigned long long
    char v4;  // [bp-0x440], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0x438]
    char v6;  // [bp-0x430]
    unsigned long v7;  // [sp-0x428], Other Possible Types: unsigned long long
    unsigned long long v8;  // [sp-0x420]
    int v9;  // [sp-0x418]
    int v10;  // [sp-0x408]
    unsigned long long v11;  // [sp-0x3f8]
    unsigned long v12;  // [sp-0x3f0], Other Possible Types: unsigned long long
    char v13;  // [sp-0x3e8]
    unsigned long v14;  // [sp-0x3e0], Other Possible Types: unsigned long long
    unsigned long long v15;  // [sp-0x3d8]
    char v16;  // [bp-0x3d0]
    char v17;  // [bp-0x3c0]
    int v18;  // [bp-0x3b8], Other Possible Types: char, unsigned long, unsigned long long
    unsigned long v19;  // [sp-0x3b0], Other Possible Types: unsigned long long
    struct_1 *v20;  // [bp-0x3a8], Other Possible Types: char, unsigned long long
    char v21;  // [bp-0x398]
    char v22;  // [bp-0x388]
    char v23;  // [bp-0x2f8], Other Possible Types: unsigned long, unsigned long long
    unsigned long v24;  // [sp-0x2f0], Other Possible Types: unsigned long long
    struct_1 *v25;  // [sp-0x2e8], Other Possible Types: unsigned long long
    char v26;  // [bp-0x2e0], Other Possible Types: unsigned long long
    void* v27;  // [sp-0x2d8]
    int v29;  // xmm0
    unsigned long long v30;  // rbx
    int v35;  // ymm0
    unsigned long long v36;  // r15
    struct_1 *v37;  // r14
    unsigned long long v38;  // rdx
    unsigned long long v39;  // rsi
    unsigned long long v40;  // rdx
    unsigned long long v41;  // rsi
    unsigned int v42;  // eax
    unsigned long long v43;  // r14
    struct_1 *v44;  // r15
    struct struct_0 **v45;  // rax

    uu_uname::uu_app::hf2dd9b094c21bbfa(&v23);
    clap_builder::builder::command::Command::try_get_matches_from::hee06ad101758372b(&v18, &v23, a0, a1);
    if (v7 == 0x8000000000000000)
    {
        v30 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0cdf31ef837cc412(v8);
        if (!(!v30))
            goto LABEL_4354b5;
    }
    else
    {
        v11 = *((long long *)&v22);
        v29 = *((int128_t *)&v20);
        *((int128_t *)&v10) = *((int128_t *)&v21);
        v9 = v29;
        v7 = v18;
        v8 = v19;
        v1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v7, _ZN8uu_uname7options3ALL17h9e733a02f0465268E, g_4d9c50);
        v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v7, _ZN8uu_uname7options11KERNEL_NAME17h4dfb35041740eec8E, g_4d9c60);
        v12 = (unsigned long long)(v35 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v29 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (int)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v7, _ZN8uu_uname7options14KERNEL_VERSION17h0a1b80891da530c7E, g_4d9c80) * 0x1000000 | (int)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v7, _ZN8uu_uname7options8NODENAME17h4d57610222f981d4E, g_4d9c70) * 0x10000 | v0 * 0x100 | v1 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (0 CONCAT (((int)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v7, _ZN8uu_uname7options7MACHINE17h95985fff9d1d586eE, g_4d9ca0) * 0x100 | (int)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v7, _ZN8uu_uname7options14KERNEL_RELEASE17h8995550ea89cb407E, g_4d9c90)) & 65535) * 0x100000000) | ((int)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v7, _ZN8uu_uname7options14KERNEL_VERSION17h0a1b80891da530c7E, g_4d9c80) * 0x1000000 | (int)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v7, _ZN8uu_uname7options8NODENAME17h4d57610222f981d4E, g_4d9c70) * 0x10000 | v0 * 0x100 | v1) & 340282366920938463463374325961086468095 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (0 CONCAT (((int)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v7, _ZN8uu_uname7options17HARDWARE_PLATFORM17h37b0cfd550e9f9beE, g_4d9cc0) * 0x100 | (int)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v7, _ZN8uu_uname7options9PROCESSOR17hd413409d301ee357E, g_4d9cb0)) & 65535) * 0x1000000000000) | ((0 CONCAT (((int)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v7, _ZN8uu_uname7options7MACHINE17h95985fff9d1d586eE, g_4d9ca0) * 0x100 | (int)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v7, _ZN8uu_uname7options14KERNEL_RELEASE17h8995550ea89cb407E, g_4d9c90)) & 65535) * 0x100000000) | ((int)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v7, _ZN8uu_uname7options14KERNEL_VERSION17h0a1b80891da530c7E, g_4d9c80) * 0x1000000 | (int)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v7, _ZN8uu_uname7options8NODENAME17h4d57610222f981d4E, g_4d9c70) * 0x10000 | v0 * 0x100 | v1) & 340282366920938463463374325961086468095) & 340282366920938463444928144833035370495);
        v13 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v7, _ZN8uu_uname7options2OS17hc3f491bb544dea67E, g_4d9cd0);
        uu_uname::UNameOutput::new::h40859a61b39bf5fb(&v23, &v12);
        v36 = v23;
        v30 = v24;
        v37 = v25;
        if (v36 != 9223372036854775809)
        {
            memcpy(&v20, &v26, 168);
            v18 = v36;
            v19 = v30;
            v20 = v37;
            uu_uname::UNameOutput::display::hbb993df1cc5e1531(&v4, &v18);
            v2 = core::str::_$LT$impl$u20$str$GT$::trim_end_matches::h98a6d2f9e151736f(v5, *((long long *)&v6));
            v3 = v38;
            v14 = &v2;
            v15 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hde133ae903241d6e;
            v23 = &g_4d75a0;
            v24 = 2;
            v27 = 0;
            v25 = &v14;
            v26 = 1;
            std::io::stdio::_print::he918bceb0c89db46(&v23, v39, v38);
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h2b2b071c198e6e9b(&v4);
            core::ptr::drop_in_place$LT$uu_uname..UNameOutput$GT$::h5bd61271f8138799(&v18);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h7b6682e24c3dd2e1(&v7);
        }
        else
        {
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h7b6682e24c3dd2e1(&v7);
            if (v30)
            {
LABEL_4354b5:
                v2 = v30;
                v3 = v37;
                v18 = &v2;
                v19 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h04085f4eaaaecf2f;
                v23 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
                v24 = 1;
                v27 = 0;
                v25 = &v18;
                v26 = 1;
                alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v16, &v23);
                *((int128_t *)&v18) = *((int128_t *)&v16);
                v20 = *((long long *)&v17);
                if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h7daa6bbcf829b7d0(v19, *((long long *)&v17), 1, 0))
                {
                    v7 = uucore::util_name::h359eff083fe53467();
                    v8 = v40;
                    v4 = &v7;
                    v5 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hde133ae903241d6e;
                    v23 = &g_4d7580;
                    v24 = 2;
                    v27 = 0;
                    v25 = &v4;
                    v26 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v23, v41, v40);
                    v7 = &v18;
                    v8 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    v23 = &g_4d75a0;
                    v24 = 2;
                    v27 = 0;
                    v25 = &v7;
                    v26 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v23, v41, v40);
                }
                if ((char)v3->field_68(v2))
                {
                    v7 = uucore::execution_phrase::hded5ccd87df1fcab();
                    v8 = v40;
                    v4 = &v7;
                    v5 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hde133ae903241d6e;
                    v23 = &g_4d75c0;
                    v24 = 2;
                    v27 = 0;
                    v25 = &v4;
                    v26 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v23, v41, v40);
                }
                v42 = v3->field_60(v2);
                _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h2b2b071c198e6e9b(&v18);
                v43 = v2;
                v44 = v3;
                if (v44->field_0)
                    v45(v43);
                if (v44->field_8)
                {
                    __rust_dealloc(v43);
                    return v42;
                }
                return v42;
            }
        }
    }
    v42 = uucore::mods::error::get_exit_code::hf050de69600a682c();
    return v42;
}

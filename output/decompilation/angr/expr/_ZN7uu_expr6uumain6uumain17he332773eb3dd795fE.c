long long uu_expr::uumain::uumain::he332773eb3dd795f(unsigned long long a0, unsigned long long a1)
{
    void* v0;  // [sp-0x3f0], Other Possible Types: unsigned long, unsigned long long
    int v1;  // [sp-0x3e8], Other Possible Types: unsigned long, unsigned long long
    void* v2;  // [sp-0x3e0], Other Possible Types: unsigned long
    int v3;  // [bp-0x3d8], Other Possible Types: char
    char v4;  // [bp-0x3d0]
    int v5;  // [sp-0x3c8]
    char *v6;  // [sp-0x3b8], Other Possible Types: unsigned long
    char *v7;  // [sp-0x3b8], Other Possible Types: unsigned long
    unsigned long v8;  // [sp-0x3b0], Other Possible Types: unsigned long long
    char v9;  // [bp-0x3a8]
    char v10;  // [bp-0x398]
    char v11;  // [bp-0x388]
    int v12;  // [sp-0x378]
    int v13;  // [sp-0x368]
    char v14;  // [bp-0x358]
    char v15;  // [bp-0x348]
    unsigned long v16;  // [sp-0x340]
    unsigned long long v17;  // [sp-0x338]
    int v18;  // [sp-0x330]
    int v19;  // [sp-0x320]
    unsigned long long v20;  // [sp-0x310]
    int v21;  // [sp-0x308]
    int v22;  // [sp-0x2f8]
    int v23;  // [bp-0x2e8], Other Possible Types: char, unsigned long long, unsigned long
    int v24;  // [sp-0x2e0], Other Possible Types: unsigned long long
    struct struct_0 **v25;  // [bp-0x2d8], Other Possible Types: int
    unsigned long long v26;  // [sp-0x2d0]
    int v27;  // [bp-0x2c8], Other Possible Types: void*
    int v28;  // [sp-0x2b8]
    void* v30;  // rbx
    int v31;  // xmm0
    int v32;  // xmm1
    unsigned long long v33;  // rsi
    void* v34;  // rdx
    unsigned long long v35;  // rax
    unsigned long long v36;  // 4098
    unsigned long long v37;  // 4098

    uu_expr::uu_app::hc20cc991bc2caa88(&v23);
    clap_builder::builder::command::Command::try_get_matches_from::h3341692c1e135144(&v6, &v23, a0, a1);
    if (v16 == 0x8000000000000000)
    {
        v30 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(v17);
        return v30;
    }
    v20 = *((long long *)&v11);
    *((int128_t *)&v19) = *((int128_t *)&v10);
    *((int128_t *)&v18) = *((int128_t *)&v9);
    v16 = v6;
    v17 = v8;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h49af73bbc3b34fea(&v23, &v16, "expressionError flushing stdout: Mismatch between definition and access of ``. /home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/parser/error.rs", 10);
    clap_builder::parser::error::MatchesError::unwrap::hf35f627069fc413d(&v6, "expressionError flushing stdout: Mismatch between definition and access of ``. /home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/parser/error.rs", 10, &v23);
    if (!v7)
    {
        v0 = 0;
        v1 = 8;
        v2 = 0;
        v33 = 8;
        v34 = 0;
    }
    else
    {
        v31 = *((int128_t *)&v6);
        v32 = *((int128_t *)&v9);
        *((int128_t *)&v28) = *((int128_t *)&v11);
        *((int128_t *)&v27) = *((int128_t *)&v10);
        v25 = v32;
        v23 = v31;
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h9b1781b5ffa40da4(&v3, &v23);
        v35 = *((long long *)&v3);
        *((int128_t *)&v1) = *((int128_t *)&v4);
        v0 = v35;
        v33 = v1;
        v34 = v2;
    }
    uu_expr::syntax_tree::AstNode::parse::h8fc5e56b2d3adf65(&v23, v33, v34);
    v36 = v23;
    *((int128_t *)&v3) = (int128_t)(&v23)[8];
    *((int128_t *)&v5) = (int128_t)(&v25)[8];
    if (v36)
    {
        v25 = v5;
        v23 = v3;
        v30 = alloc::boxed::Box$LT$T$GT$::new::h9793020a81d80a2f(&v23);
        goto LABEL_4b93b9;
    }
    else
    {
        v13 = v5;
        v12 = v3;
        uu_expr::syntax_tree::AstNode::eval::h0e7cef87b1c8bd3f(&v6, &v12);
        v37 = v7;
        *((int128_t *)&v21) = *((int128_t *)&(&v6)[1]);
        *((int128_t *)&v22) = *((int128_t *)&(&v9)[8]);
        if (!v37)
        {
            uu_expr::syntax_tree::NumOrStr::eval_as_string::h2669c68487e16a4d(&v14, &v21);
            core::ptr::drop_in_place$LT$uu_expr..syntax_tree..AstNode$GT$::hb5763514b279a259(&v12);
            v7 = &v14;
            v8 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v23 = &g_59f158;
            v24 = 2;
            v27 = 0;
            v25 = &v6;
            v26 = 1;
            std::io::stdio::_print::he918bceb0c89db46(&v23);
            v26 = *((long long *)&v15);
            *((int128_t *)&v24) = *((int128_t *)&v14);
            v23 = 0x8000000000000000;
            if ((char)uu_expr::syntax_tree::is_truthy::hbc2e5d0622d8ecb0(&v23))
            {
                core::ptr::drop_in_place$LT$uu_expr..syntax_tree..NumOrStr$GT$::h03ce987334fde789(&v23);
                ::0x4b7dd0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h9cc8147b558a6216(&v0);
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h690b48a34d1b9253(&v16);
                return 0;
            }
            core::ptr::drop_in_place$LT$uu_expr..syntax_tree..NumOrStr$GT$::h03ce987334fde789(&v23);
            v30 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0b17f6d5d891df77(1);
        }
        else
        {
            v25 = v22;
            v23 = v21;
            v30 = alloc::boxed::Box$LT$T$GT$::new::h9793020a81d80a2f(&v23);
            core::ptr::drop_in_place$LT$uu_expr..syntax_tree..AstNode$GT$::hb5763514b279a259(&v12);
LABEL_4b93b9:
        }
        ::0x4b7dd0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h9cc8147b558a6216(&v0);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h690b48a34d1b9253(&v16);
        return v30;
    }
}

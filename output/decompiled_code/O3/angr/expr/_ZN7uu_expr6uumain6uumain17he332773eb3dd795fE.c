long long uu_expr::uumain::uumain::he332773eb3dd795f(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    void* v0;  // [sp-0x3f0], Other Possible Types: unsigned long, unsigned long long
    int v1;  // [sp-0x3e8], Other Possible Types: unsigned long long
    void* v2;  // [sp-0x3e0]
    int v3;  // [bp-0x3d8], Other Possible Types: char
    char v4;  // [bp-0x3d0]
    int v5;  // [sp-0x3c8]
    char *v6;  // [bp-0x3b8], Other Possible Types: unsigned long
    unsigned long v7;  // [sp-0x3b0], Other Possible Types: unsigned long long
    char v8;  // [bp-0x3a8]
    char v9;  // [bp-0x398]
    char v10;  // [bp-0x388]
    int v11;  // [sp-0x378]
    int v12;  // [sp-0x368]
    char v13;  // [bp-0x358]
    char v14;  // [bp-0x348]
    unsigned long v15;  // [sp-0x340], Other Possible Types: unsigned long long
    unsigned long long v16;  // [sp-0x338]
    int v17;  // [sp-0x330]
    int v18;  // [sp-0x320]
    unsigned long long v19;  // [sp-0x310]
    int v20;  // [sp-0x308]
    int v21;  // [sp-0x2f8]
    int v22;  // [bp-0x2e8], Other Possible Types: char, unsigned long long
    int v23;  // [sp-0x2e0], Other Possible Types: unsigned long long
    struct struct_0 **v24;  // [bp-0x2d8], Other Possible Types: int
    unsigned long long v25;  // [sp-0x2d0]
    int v26;  // [bp-0x2c8], Other Possible Types: void*
    int v27;  // [sp-0x2b8]
    unsigned long long v29;  // r8
    unsigned long long v30;  // r9
    void* v31;  // rax
    int v32;  // xmm0
    int v33;  // xmm1
    unsigned long long v34;  // rdx
    unsigned long long v37;  // rax
    unsigned long long v38;  // 4098
    unsigned long long v39;  // 4098
    unsigned long long v40;  // rsi

    uu_expr::uu_app::hc20cc991bc2caa88(&v22, a1, a2);
    clap_builder::builder::command::Command::try_get_matches_from::h3341692c1e135144(&v6, &v22, a0, a1, v29, v30);
    if (v15 == 0x8000000000000000)
    {
        v31 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(v16);
        return v31;
    }
    v19 = *((long long *)&v10);
    *((int128_t *)&v18) = *((int128_t *)&v9);
    *((int128_t *)&v17) = *((int128_t *)&v8);
    v15 = v6;
    v16 = v7;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h49af73bbc3b34fea(&v22, &v15, "expressionError flushing stdout: Mismatch between definition and access of ``. /home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/parser/error.rs", 10);
    clap_builder::parser::error::MatchesError::unwrap::hf35f627069fc413d(&v6, "expressionError flushing stdout: Mismatch between definition and access of ``. /home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/parser/error.rs", 10, &v22);
    if (!v6)
    {
        v0 = 0;
        v1 = 8;
        v2 = 0;
    }
    else
    {
        v32 = *((int128_t *)&v6);
        v33 = *((int128_t *)&v8);
        *((int128_t *)&v27) = *((int128_t *)&v10);
        *((int128_t *)&v26) = *((int128_t *)&v9);
        v24 = v33;
        v22 = v32;
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h9b1781b5ffa40da4(&v3, &v22, v34);
        v37 = *((long long *)&v3);
        *((int128_t *)&v1) = *((int128_t *)&v4);
        v0 = v37;
    }
    uu_expr::syntax_tree::AstNode::parse::h8fc5e56b2d3adf65(&v22, 8, 0);
    v38 = v22;
    *((int128_t *)&v3) = (int128_t)(&v22)[8];
    *((int128_t *)&v5) = (int128_t)(&v24)[8];
    if (v38)
    {
        v24 = v5;
        v22 = v3;
        v31 = alloc::boxed::Box$LT$T$GT$::new::h9793020a81d80a2f(&v22);
        goto LABEL_4b93b9;
    }
    else
    {
        v12 = v5;
        v11 = v3;
        uu_expr::syntax_tree::AstNode::eval::h0e7cef87b1c8bd3f(&v6, &v11);
        v39 = v6;
        *((int128_t *)&v20) = *((int128_t *)&(&v6)[1]);
        *((int128_t *)&v21) = *((int128_t *)&(&v8)[8]);
        if (!v39)
        {
            uu_expr::syntax_tree::NumOrStr::eval_as_string::h2669c68487e16a4d(&v13, &v20);
            core::ptr::drop_in_place$LT$uu_expr..syntax_tree..AstNode$GT$::hb5763514b279a259(&v11);
            v6 = &v13;
            v7 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v22 = &g_59f158;
            v23 = 2;
            v26 = 0;
            v24 = &v6;
            v25 = 1;
            std::io::stdio::_print::he918bceb0c89db46(&v22, v40, v34);
            v25 = *((long long *)&v14);
            *((int128_t *)&v23) = *((int128_t *)&v13);
            v22 = 0x8000000000000000;
            if ((char)uu_expr::syntax_tree::is_truthy::hbc2e5d0622d8ecb0(&v22))
            {
                core::ptr::drop_in_place$LT$uu_expr..syntax_tree..NumOrStr$GT$::h03ce987334fde789(&v22);
                ::0x4b7dd0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h9cc8147b558a6216(&v0);
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h690b48a34d1b9253(&v15);
                return 0;
            }
            core::ptr::drop_in_place$LT$uu_expr..syntax_tree..NumOrStr$GT$::h03ce987334fde789(&v22);
            v31 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0b17f6d5d891df77(1);
        }
        else
        {
            v24 = v21;
            v22 = v20;
            v31 = alloc::boxed::Box$LT$T$GT$::new::h9793020a81d80a2f(&v22);
            core::ptr::drop_in_place$LT$uu_expr..syntax_tree..AstNode$GT$::hb5763514b279a259(&v11);
LABEL_4b93b9:
        }
        ::0x4b7dd0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h9cc8147b558a6216(&v0);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h690b48a34d1b9253(&v15);
        return v31;
    }
}

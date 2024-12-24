long long uu_expr::uumain::uumain::h1c05c1ca4d575a0a(unsigned long long a0, unsigned long long a1)
{
    void* v0;  // [sp-0x3f8], Other Possible Types: int
    unsigned long long v1;  // [sp-0x3f0]
    void* v2;  // [sp-0x3e8], Other Possible Types: unsigned long long
    int v3;  // [bp-0x3d8], Other Possible Types: char
    int v4;  // [bp-0x3c8], Other Possible Types: char
    char v5;  // [bp-0x3b8], Other Possible Types: unsigned long long, unsigned long
    unsigned long v6;  // [sp-0x3b0], Other Possible Types: unsigned long long
    char v7;  // [bp-0x3a8]
    char v8;  // [bp-0x398]
    char v9;  // [bp-0x388]
    int v10;  // [sp-0x378]
    int v11;  // [sp-0x368]
    char v12;  // [bp-0x358]
    char v13;  // [bp-0x348]
    unsigned long v14;  // [sp-0x340], Other Possible Types: unsigned long long
    unsigned long long v15;  // [sp-0x338]
    int v16;  // [sp-0x330]
    int v17;  // [sp-0x320]
    unsigned long long v18;  // [sp-0x310]
    int v19;  // [sp-0x308]
    int v20;  // [sp-0x2f8]
    int v21;  // [bp-0x2e8], Other Possible Types: char, unsigned long long
    int v22;  // [sp-0x2e0], Other Possible Types: unsigned long long
    int v23;  // [bp-0x2d8], Other Possible Types: unsigned long long
    unsigned long long v24;  // [sp-0x2d0]
    int v25;  // [bp-0x2c8], Other Possible Types: void*
    int v26;  // [sp-0x2b8]
    unsigned long long v28;  // rdx
    void* v29;  // rax
    int v30;  // xmm0
    int v31;  // xmm1
    unsigned long long v33;  // rdx
    unsigned long long v34;  // 4098
    unsigned long long v35;  // 4098
    unsigned long long v36;  // rsi

    uu_expr::uu_app::hc3897bd94a70c888(&v21, a1, v28);
    clap_builder::builder::command::Command::try_get_matches_from::ha802150699f055ba(&v5, &v21, a0, a1);
    if (v14 == 0x8000000000000000)
    {
        v29 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7cfa18d1f977710c(v15);
        return v29;
    }
    v18 = *((long long *)&v9);
    *((int128_t *)&v17) = *((int128_t *)&v8);
    *((int128_t *)&v16) = *((int128_t *)&v7);
    v14 = v5;
    v15 = v6;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h3565096828fda5ef(&v21, &v14, "expressionError flushing stdout: ", 10);
    clap_builder::parser::error::MatchesError::unwrap::hf4e1b0f7191a2025(&v5, "expressionError flushing stdout: ", 10, &v21);
    if (!v5)
    {
        v0 = 0;
        v1 = 8;
        v2 = 0;
        v33 = 0;
    }
    else
    {
        v30 = *((int128_t *)&v5);
        v31 = *((int128_t *)&v7);
        *((int128_t *)&v26) = *((int128_t *)&v9);
        *((int128_t *)&v25) = *((int128_t *)&v8);
        v23 = v31;
        v21 = v30;
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h7a3ffd0628cc9b74(&v3, &v21, v28);
        v0 = v3;
        v33 = *((long long *)&v4);
        v2 = v33;
    }
    uu_expr::syntax_tree::AstNode::parse::hb1a62ed73aca29bf(&v21, 8, v33);
    v34 = v21;
    *((int128_t *)&v3) = (int128_t)(&v21)[8];
    *((int128_t *)&v4) = (int128_t)(&v23)[8];
    if (v34)
    {
        v23 = v4;
        v21 = v3;
        v29 = alloc::boxed::Box$LT$T$GT$::new::h7144c2feca9362c5(&v21);
        goto LABEL_4bca22;
    }
    else
    {
        v11 = v4;
        v10 = v3;
        uu_expr::syntax_tree::AstNode::eval::h53a202b5ea478805(&v5, &v10);
        v35 = v5;
        *((int128_t *)&v19) = *((int128_t *)&(&v5)[1]);
        *((int128_t *)&v20) = *((int128_t *)&(&v7)[8]);
        if (!v35)
        {
            uu_expr::syntax_tree::NumOrStr::eval_as_string::h1c3b2a0a503ebe8c(&v12, &v19);
            core::ptr::drop_in_place$LT$uu_expr..syntax_tree..AstNode$GT$::h6ffa238802106cdc(&v10);
            v5 = &v12;
            v6 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v21 = &g_59f1e8;
            v22 = 2;
            v25 = 0;
            v23 = &v5;
            v24 = 1;
            std::io::stdio::_print::he918bceb0c89db46(&v21, v36, v28);
            v24 = *((long long *)&v13);
            *((int128_t *)&v22) = *((int128_t *)&v12);
            v21 = 0x8000000000000000;
            if ((char)uu_expr::syntax_tree::is_truthy::h3bc5a3a2ec0c770e(&v21))
            {
                core::ptr::drop_in_place$LT$uu_expr..syntax_tree..NumOrStr$GT$::h4140d316b9ce7e05(&v21);
                ::0x4bb460::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h1008c259eb30f111(&v0);
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hd96191e846f7ced3(&v14);
                return 0;
            }
            core::ptr::drop_in_place$LT$uu_expr..syntax_tree..NumOrStr$GT$::h4140d316b9ce7e05(&v21);
            v29 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h42be6d6e2087a7b3(1);
        }
        else
        {
            v23 = v20;
            v21 = v19;
            v29 = alloc::boxed::Box$LT$T$GT$::new::h7144c2feca9362c5(&v21);
            core::ptr::drop_in_place$LT$uu_expr..syntax_tree..AstNode$GT$::h6ffa238802106cdc(&v10);
LABEL_4bca22:
        }
        ::0x4bb460::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h1008c259eb30f111(&v0);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hd96191e846f7ced3(&v14);
        return v29;
    }
}

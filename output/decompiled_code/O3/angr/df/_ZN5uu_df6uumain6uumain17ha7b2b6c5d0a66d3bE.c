long long uu_df::uumain::uumain::ha7b2b6c5d0a66d3b(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    unsigned long v0;  // [bp-0x450], Other Possible Types: unsigned long long
    unsigned int v1;  // [sp-0x448], Other Possible Types: unsigned long long
    unsigned int v2;  // [sp-0x440], Other Possible Types: unsigned long long
    int v3;  // [bp-0x438], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v4;  // [sp-0x430]
    int v5;  // [bp-0x428], Other Possible Types: unsigned long
    unsigned long long v6;  // [sp-0x418]
    unsigned long long v7;  // [sp-0x410]
    unsigned long long v8;  // [sp-0x408]
    char v9;  // [bp-0x3f8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v10;  // [sp-0x3f0]
    char v11;  // [bp-0x3e8], Other Possible Types: unsigned long long
    unsigned long long v12;  // [sp-0x3e0]
    void* v13;  // [bp-0x3d8], Other Possible Types: char
    char v14;  // [bp-0x3c8]
    char v15;  // [bp-0x3b8], Other Possible Types: unsigned long, unsigned long long
    int v16;  // [bp-0x3b0], Other Possible Types: char
    char v17;  // [bp-0x3a8]
    int v18;  // [sp-0x3a0]
    char v19;  // [bp-0x398]
    int v20;  // [sp-0x390]
    char v21;  // [bp-0x388]
    int v22;  // [sp-0x380]
    int v23;  // [sp-0x370]
    unsigned long v24;  // [sp-0x360], Other Possible Types: unsigned long long
    unsigned long long v25;  // [sp-0x358]
    int v26;  // [sp-0x350]
    int v27;  // [sp-0x340]
    unsigned long long v28;  // [sp-0x330]
    int v29;  // [sp-0x328]
    int v30;  // [sp-0x318]
    int v31;  // [sp-0x308]
    int v32;  // [sp-0x2f8]
    unsigned long long v33[3];  // [bp-0x2e8], Other Possible Types: int
    char v34;  // [bp-0x2e0]
    int v35;  // [bp-0x2d8], Other Possible Types: unsigned long long, unsigned long
    char v36;  // [bp-0x2d0], Other Possible Types: unsigned int
    char v37;  // [bp-0x2c0]
    char v38;  // [bp-0x2b0]
    char v39;  // [bp-0x2a0]
    void* v42;  // rax
    unsigned long long v43;  // rax
    int v44;  // xmm0
    int v45;  // xmm1
    int v46;  // xmm0
    int v47;  // xmm1
    unsigned long long v48;  // rdx
    unsigned int v49;  // r8
    unsigned int v50;  // r9
    unsigned long long v55;  // rsi
    unsigned long long v56;  // rsi

    uu_df::uu_app::h436a536e7991f583(v33, a1, a2);
    clap_builder::builder::command::Command::try_get_matches_from::h79cb87c2c0c52dbd(&v15, v33, a0, a1);
    if (v24 == 0x8000000000000000)
    {
        v42 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7cfa18d1f977710c(v25);
        return v42;
    }
    v28 = *((long long *)&v21);
    *((int128_t *)&v27) = *((int128_t *)&v19);
    *((int128_t *)&v26) = *((int128_t *)&v17);
    v24 = v15;
    v25 = *((long long *)&v16);
    uu_df::Options::from::h0074efa4151d398c(v33, &v24);
    v43 = v33[0];
    if (v15 == 0x8000000000000000)
    {
        core::ops::function::FnOnce::call_once::h0d58f32f07a3ed04(&v9, &v34);
        v46 = *((int128_t *)&v9);
        v47 = *((int128_t *)&v11);
        v3 = v46;
        v5 = v47;
        v35 = v47;
        v33 = v46;
        v42 = alloc::boxed::Box$LT$T$GT$::new::h9a29a55e2148dff1(v33);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h9b3a0f159a0a3a44(&v24);
        return v42;
    }
    v44 = *((int128_t *)&v34);
    v45 = *((int128_t *)&v36);
    *((int128_t *)&v20) = *((int128_t *)&v37);
    *((int128_t *)&v22) = *((int128_t *)&v38);
    *((int128_t *)&v23) = *((int128_t *)&v39);
    v3 = v44;
    v16 = v44;
    v18 = v45;
    v15 = v43;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hd6281058875baa4d(v33, &v24, _ZN5uu_df9OPT_PATHS17h855dc56a7d86c290E, g_542638);
    clap_builder::parser::error::MatchesError::unwrap::h25f3f3b89f037d50(&v9, _ZN5uu_df9OPT_PATHS17h855dc56a7d86c290E, g_542638, v33);
    if (!v9)
    {
        uu_df::get_all_filesystems::ha3607c97a6992c95(v33, &v15);
        if (v0 == 0x8000000000000000)
        {
            v42 = uu_df::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::h29ced0134f3c6b15(v1, v2);
        }
        else
        {
            v0 = v33[0];
            v1 = *((long long *)&v34);
            v2 = v35;
            if (v2)
            {
                v8 = v2;
                v6 = v0;
                v7 = v1;
LABEL_4741c5:
                v11 = v8;
                v9 = v6;
                v10 = v7;
                uu_df::table::Table::new::h351af9100cef177c(v33, &v15, &v9);
                *((unsigned long long [3])&v3) = v33;
                v4 = _$LT$uu_df..table..Table$u20$as$u20$core..fmt..Display$GT$::fmt::h9b1beefbe7f4b1d0;
                v9 = &g_53f7a8;
                v10 = 2;
                v13 = 0;
                v11 = &v3;
                v12 = 1;
                std::io::stdio::_print::he918bceb0c89db46(&v9, v56, v48);
                core::ptr::drop_in_place$LT$uu_df..table..Table$GT$::hc4c97ed64615bdcf(v33);
                core::ptr::drop_in_place$LT$uu_df..Options$GT$::he2fff1a6c2a2b5e2(&v15);
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h9b3a0f159a0a3a44(&v24);
                return 0;
            }
            ::0x4733f0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h2f2ec410dfc5cc88(&v3);
            v35 = v5;
            *((int128_t *)&v33) = (int128_t)v3;
            v36 = 1;
            v42 = alloc::boxed::Box$LT$T$GT$::new::h935c2253c3071cbb(v33);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_df..filesystem..Filesystem$GT$$GT$::h0e07717ba0c99bd0(&v0);
        }
    }
    else
    {
        *((int128_t *)&v32) = *((int128_t *)&v14);
        *((int128_t *)&v31) = *((int128_t *)&v13);
        *((int128_t *)&v30) = *((int128_t *)&v11);
        *((int128_t *)&v29) = *((int128_t *)&v9);
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h6036eac8811489d2(&v0, &v29, v48);
        uu_df::get_named_filesystems::h0138c5780db6d0fd(v33, v1, v2, &v15, v49, v50);
        v55 = v35;
        if (v3 == 0x8000000000000000)
        {
            v42 = uu_df::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::h29ced0134f3c6b15(v4, v55);
            goto LABEL_47428e;
        }
        v3 = v33[0];
        v4 = *((long long *)&v34);
        v5 = v55;
        if (v55)
        {
            v8 = v5;
            v6 = v3;
            v7 = v4;
            ::0x473010::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$alloc..string..String$GT$$GT$::h1fc5b0e511476336(&v0);
            goto LABEL_4741c5;
        }
        else
        {
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_df..filesystem..Filesystem$GT$$GT$::h0e07717ba0c99bd0(&v3);
            v42 = 0;
LABEL_47428e:
            ::0x473010::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$alloc..string..String$GT$$GT$::h1fc5b0e511476336(&v0);
        }
    }
    core::ptr::drop_in_place$LT$uu_df..Options$GT$::he2fff1a6c2a2b5e2(&v15);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h9b3a0f159a0a3a44(&v24);
    return v42;
}

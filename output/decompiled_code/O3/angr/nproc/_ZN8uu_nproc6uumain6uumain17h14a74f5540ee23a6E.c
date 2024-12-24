long long uu_nproc::uumain::uumain::h14a74f5540ee23a6(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x410], Other Possible Types: unsigned long
    int v1;  // [bp-0x408], Other Possible Types: void*, char, unsigned long, unsigned long long
    unsigned long v2;  // [sp-0x400], Other Possible Types: unsigned long long
    char v3;  // [bp-0x3f8], Other Possible Types: unsigned long long
    char v4;  // [sp-0x3f0]
    char v5;  // [bp-0x3e8]
    char v6;  // [bp-0x3d8]
    char v7;  // [bp-0x3c8]
    char v8;  // [bp-0x3c7]
    char v9;  // [bp-0x3c0]
    int v10;  // [sp-0x3b8], Other Possible Types: char, unsigned long, unsigned long long
    unsigned long v11;  // [sp-0x3b0], Other Possible Types: unsigned long long
    unsigned long long v12;  // [sp-0x3a8]
    unsigned long long v13;  // [sp-0x3a0]
    unsigned long v14;  // [sp-0x390], Other Possible Types: unsigned long long
    unsigned long long v15;  // [sp-0x388]
    int v16;  // [sp-0x380]
    int v17;  // [sp-0x370]
    unsigned long long v18;  // [sp-0x360]
    char v19;  // [bp-0x358]
    char v20;  // [bp-0x348]
    void* v21;  // [sp-0x340]
    unsigned long long v22;  // [sp-0x338]
    int v23;  // [sp-0x330]
    int v24;  // [sp-0x320]
    int v25;  // [sp-0x310]
    unsigned short v26;  // [sp-0x300]
    int v27;  // [bp-0x2f8], Other Possible Types: char, unsigned long, unsigned long long
    unsigned long long v28[2];  // [sp-0x2f0], Other Possible Types: unsigned long long
    unsigned long v29;  // [sp-0x2e8], Other Possible Types: unsigned long long
    unsigned int v30;  // [bp-0x2e0], Other Possible Types: unsigned long long
    void* v31;  // [sp-0x2d8]
    void* v33;  // rax
    unsigned long long v34[3];  // rax
    unsigned long long v35;  // r14
    unsigned long long v36;  // r15
    unsigned long long v37;  // r12
    unsigned long long v38;  // rdx
    unsigned long long v39;  // r14
    unsigned long long v40;  // rdx
    unsigned long long v42;  // rdi
    unsigned long long v43;  // rsi
    unsigned long long v44;  // rax
    unsigned long long v45;  // rdi
    unsigned long long v46;  // rdi
    unsigned long long v47;  // rdi
    unsigned long long v48;  // rax
    unsigned long long v49;  // rax

    uu_nproc::uu_app::h328822479a5b7555(&v27, a1, a2);
    clap_builder::builder::command::Command::try_get_matches_from::h0894ea22249378d7(&v1, &v27, a0, a1);
    if (v14 == 0x8000000000000000)
    {
        v33 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7cfa18d1f977710c(v15);
        return v33;
    }
    v18 = *((long long *)&v6);
    *((int128_t *)&v17) = *((int128_t *)&v5);
    *((int128_t *)&v16) = *((int128_t *)&v3);
    v14 = v1;
    v15 = v2;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h064c1f80c0e5c2f0(&v27, &v14, _ZN8uu_nproc10OPT_IGNORE17h65421709b30f4879E, g_511390);
    v34 = clap_builder::parser::error::MatchesError::unwrap::hbf87aa92c87a0880(_ZN8uu_nproc10OPT_IGNORE17h65421709b30f4879E, g_511390, &v27);
    if (!v34)
    {
        v37 = 0;
    }
    else
    {
        v35 = v34[1];
        v36 = v34[2];
        core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&v7, core::str::_$LT$impl$u20$str$GT$::trim_matches::h481bf5a9492464c3(v35, v36), v38);
        if (v7)
        {
            v0 = v8;
            v1 = 0;
            v2 = v35;
            v3 = v36;
            v4 = 1;
            v10 = &v1;
            v11 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
            v12 = &v0;
            v13 = _$LT$core..num..error..ParseIntError$u20$as$u20$core..fmt..Display$GT$::fmt::h98d79d8d19892e5a;
            v27 = &g_50eba8;
            v28 = 2;
            v31 = 0;
            v29 = &v10;
            v30 = 2;
            core::option::Option$LT$T$GT$::map_or_else::h72d83fd7de698fb0(&v19, &v27);
            v30 = 1;
            *((int128_t *)&v27) = *((int128_t *)&v19);
            v29 = *((long long *)&v20);
            v33 = alloc::boxed::Box$LT$T$GT$::new::hf1295e4f110e8c77(&v27);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h1b94d8c27050d96e(&v14);
            return v33;
        }
        v37 = *((long long *)&v9);
    }
    std::env::var::ha0426b017d3f13c1(&v27, "OMP_THREAD_LIMITconnection reset", 16);
    v39 = -1;
    if (v27)
    {
LABEL_4641d5:
        core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h15ce0305c448079a(&v27);
    }
    else
    {
        v40 = *((long long *)&v30);
        v3 = *((long long *)&v30);
        *((int128_t *)&v1) = *((int128_t *)&v28);
        core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&v10, v2, v40);
        ::0x462ce0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hecae5582b3b5fd46(&v1);
        v39 = -(0 < v10) | -(v11 < 1) | v11;
        if (!(!v27))
            goto LABEL_4641d5;
    }
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v14, _ZN8uu_nproc7OPT_ALL17h6f487ac68b9e1233E, g_511380))
    {
        v44 = uu_nproc::num_cpus_all::h2a8f39fb3f12da4a(v42, v43, v38);
    }
    else
    {
        std::env::var::ha0426b017d3f13c1(&v1, "OMP_NUM_THREADS is not a valid number: ", 15);
        if (v1)
        {
            v44 = uu_nproc::available_parallelism::h4619c9691f49919a(v45, v43, v38);
            v0 = v44;
        }
        else
        {
            v12 = v22;
            *((int128_t *)&v10) = (int128_t)(&v1)[8];
            ::0x462ff0::_$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h77b0cfb9226a3587(&v27, v11, v12);
            *((int128_t *)&v25) = *((int128_t *)&v31);
            *((int128_t *)&v24) = *((int128_t *)&(&v28)[1]);
            *((int128_t *)&v23) = *((int128_t *)&v27);
            v21 = 0;
            v22 = v12;
            v26 = 0;
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::hb9ad520accf11756(&v27, &v21, v38);
            if (!v29)
            {
                v44 = uu_nproc::available_parallelism::h4619c9691f49919a(v46, v43, v38);
                goto LABEL_464311;
            }
            else
            {
                core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&v7, v28[0], v28[1]);
                if (v7 || (v44 = *((long long *)&v9), !v44))
                {
                    v44 = uu_nproc::available_parallelism::h4619c9691f49919a(v47, v43, v38);
LABEL_464311:
                }
            }
            v0 = v44;
            ::0x462d40::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h86babf95a7a26d13(&v27);
            ::0x462ce0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hecae5582b3b5fd46(&v10);
        }
        if (v1)
            core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h15ce0305c448079a(&v1);
    }
    v48 = core::cmp::min_by::h3318c5f8a0f8235f(v39, v44);
    v49 = v48 - v37;
    if (v48 <= v37)
        v49 = 1;
    v0 = v49;
    v1 = &v0;
    v2 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
    v27 = &g_50eb68;
    v28 = 2;
    v31 = 0;
    v29 = &v1;
    v30 = 1;
    std::io::stdio::_print::he918bceb0c89db46(&v27, v43, v38);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h1b94d8c27050d96e(&v14);
    return 0;
}

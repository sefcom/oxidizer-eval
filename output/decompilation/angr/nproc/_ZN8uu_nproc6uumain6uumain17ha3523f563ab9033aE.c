long long uu_nproc::uumain::uumain::ha3523f563ab9033a(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x410], Other Possible Types: unsigned long
    struct struct_0 **v1;  // [sp-0x408], Other Possible Types: unsigned long
    unsigned long v2;  // [sp-0x400], Other Possible Types: unsigned long long
    char v3;  // [sp-0x3f8], Other Possible Types: unsigned long long
    char v4;  // [sp-0x3f0]
    char v5;  // [bp-0x3e8]
    char v6;  // [bp-0x3d8]
    char v7;  // [bp-0x3c8]
    char v8;  // [bp-0x3c7]
    char v9;  // [bp-0x3c0]
    struct struct_0 **v10;  // [sp-0x3b8]
    unsigned long v11;  // [sp-0x3b0], Other Possible Types: unsigned long long
    struct struct_0 **v12;  // [sp-0x3a8], Other Possible Types: unsigned long long
    unsigned long long v13;  // [sp-0x3a0]
    unsigned long v14;  // [sp-0x390]
    unsigned long long v15;  // [sp-0x388]
    struct struct_0 **v16;  // [sp-0x380]
    struct struct_0 **v17;  // [sp-0x370]
    unsigned long long v18;  // [sp-0x360]
    char v19;  // [bp-0x358]
    char v20;  // [bp-0x348]
    void* v21;  // [sp-0x340]
    unsigned long long v22;  // [sp-0x338]
    struct struct_0 **v23;  // [sp-0x330]
    struct struct_0 **v24;  // [sp-0x320]
    struct struct_0 **v25;  // [sp-0x310]
    unsigned short v26;  // [sp-0x300]
    struct struct_0 **v27;  // [bp-0x2f8], Other Possible Types: unsigned long
    unsigned long long v28[2];  // [sp-0x2f0], Other Possible Types: char, unsigned long long
    struct struct_0 **v29;  // [sp-0x2e8], Other Possible Types: unsigned long, unsigned long long
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
    unsigned long long v42;  // r15
    unsigned long long v43;  // rax
    unsigned long long v44;  // rax
    unsigned long long v45;  // rcx

    uu_nproc::uu_app::h3da9a545ae06046a(&v27);
    clap_builder::builder::command::Command::try_get_matches_from::h4a07ba778773b710(&v1, &v27, a0, a1);
    if (v14 == 0x8000000000000000)
    {
        v33 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(v15);
        return v33;
    }
    v18 = *((long long *)&v6);
    *((int128_t *)&v17) = *((int128_t *)&v5);
    *((int128_t *)&v16) = *((int128_t *)&v3);
    v14 = v1;
    v15 = v2;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::he1bfe3f05eac1902(&v27, &v14, _ZN8uu_nproc10OPT_IGNORE17h5eebb41ffec4ffcbE, g_510d08);
    v34 = clap_builder::parser::error::MatchesError::unwrap::he7da396e8269390d(_ZN8uu_nproc10OPT_IGNORE17h5eebb41ffec4ffcbE, g_510d08, &v27);
    if (!v34)
    {
        v37 = 0;
    }
    else
    {
        v35 = v34[1];
        v36 = v34[2];
        core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&v7, core::str::_$LT$impl$u20$str$GT$::trim_matches::h293a8678a37ef744(v35, v36), v38);
        if (v7)
        {
            v0 = v8;
            v1 = 0;
            v2 = v35;
            v3 = v36;
            v4 = 1;
            v10 = &v1;
            v11 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            v12 = &v0;
            v13 = _$LT$core..num..error..ParseIntError$u20$as$u20$core..fmt..Display$GT$::fmt::h98d79d8d19892e5a;
            v27 = &g_50e4b8;
            v28 = 2;
            v31 = 0;
            v29 = &v10;
            v30 = 2;
            core::option::Option$LT$T$GT$::map_or_else::h3b8854d416b71613(&v19, &v27);
            v30 = 1;
            *((int128_t *)&v27) = *((int128_t *)&v19);
            v29 = *((long long *)&v20);
            v33 = alloc::boxed::Box$LT$T$GT$::new::ha1ebd3061cf9b985(&v27);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::he8c9c7239af95834(&v14);
            return v33;
        }
        v37 = *((long long *)&v9);
    }
    std::env::var::h2318c396540c8104(&v27, "OMP_THREAD_LIMITconnection reset", 16);
    v39 = 18446744073709551615;
    if (v27)
    {
LABEL_462d15:
        core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h02690b1027f9de22(&v27);
    }
    else
    {
        v40 = *((long long *)&v30);
        v3 = *((long long *)&v30);
        *((int128_t *)&v1) = *((int128_t *)&v28);
        core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&v10, v2, v40);
        ::0x461820::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb6387026a6809cd4(&v1);
        v39 = -(0 < (char)v10) | -(v11 < 1) | v11;
        if (!(!v27))
            goto LABEL_462d15;
    }
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v14, _ZN8uu_nproc7OPT_ALL17hda6848154e8c5b80E, g_510cf8))
    {
        v42 = uu_nproc::num_cpus_all::h7340e3b3a8ccdb85();
    }
    else
    {
        std::env::var::h2318c396540c8104(&v1, "OMP_NUM_THREADS", 15);
        if (v1)
        {
            v42 = uu_nproc::available_parallelism::h0a12aac02eb8d812();
            v0 = v42;
        }
        else
        {
            v12 = v22;
            *((int128_t *)&v10) = *((int128_t *)&(&v1)[1]);
            ::0x461b30::_$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h77b0cfb9226a3587(&v27, v11, v12);
            *((int128_t *)&v25) = *((int128_t *)&v31);
            *((int128_t *)&v24) = *((int128_t *)&(&v28)[8]);
            *((int128_t *)&v23) = *((int128_t *)&v27);
            v21 = 0;
            v22 = v12;
            v26 = 0;
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h10fc9985799e9278(&v27, &v21);
            if (!v29)
            {
                v43 = uu_nproc::available_parallelism::h0a12aac02eb8d812();
                goto LABEL_462e51;
            }
            else
            {
                core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&v7, v28[0], v28[1]);
                if (v7 || (v42 = *((long long *)&v9), !v42))
                {
                    v43 = uu_nproc::available_parallelism::h0a12aac02eb8d812();
LABEL_462e51:
                    v42 = v43;
                }
            }
            v0 = v42;
            ::0x461880::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::hd7cebb54887ea04d(&v27);
            ::0x461820::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb6387026a6809cd4(&v10);
        }
        if (v1)
            core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h02690b1027f9de22(&v1);
    }
    v44 = core::cmp::min_by::hf28b4cdfe3eabc55(v39, v42);
    v45 = (!(v44 <= v37) ? v44 - v37 : 1);
    v0 = v45;
    v1 = &v0;
    v2 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
    v27 = &g_50e460;
    v28 = 2;
    v31 = 0;
    v29 = &v1;
    v30 = 1;
    std::io::stdio::_print::he918bceb0c89db46(&v27);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::he8c9c7239af95834(&v14);
    return 0;
}

long long uu_factor::uumain::uumain::h8a5b39c1daa0c762(unsigned long long a0, unsigned long long a1)
{
    unsigned long v0;  // [sp-0x408]
    char v1;  // [sp-0x400]
    struct struct_0 **v2;  // [sp-0x3f8]
    unsigned long long v3;  // [sp-0x3f0]
    unsigned long long v4;  // [sp-0x3e8]
    unsigned long v5;  // [sp-0x3e0]
    struct struct_0 **v6;  // [bp-0x3d8], Other Possible Types: char, unsigned long
    char *v7;  // [sp-0x3c0], Other Possible Types: unsigned long
    unsigned long v8;  // [sp-0x3b8], Other Possible Types: unsigned long long
    char v9;  // [bp-0x3b0]
    char v10;  // [bp-0x3a0]
    char v11;  // [bp-0x390]
    unsigned long long v12;  // [sp-0x380]
    unsigned long v13;  // [sp-0x378]
    unsigned long v14;  // [sp-0x370]
    struct struct_1 **v15;  // [sp-0x368]
    unsigned long long v16;  // [sp-0x360]
    unsigned long v17;  // [sp-0x358]
    unsigned long long v18;  // [sp-0x350]
    int v19;  // [sp-0x348]
    int v20;  // [sp-0x338]
    unsigned long long v21;  // [sp-0x328]
    unsigned long long v22[3];  // [bp-0x320]
    int v23;  // [bp-0x2f8], Other Possible Types: void*, char, unsigned long
    unsigned long long v24;  // [sp-0x2f0]
    int v25;  // [bp-0x2e8], Other Possible Types: struct struct_0 **, struct struct_2 **, struct struct_1 **, char
    unsigned long long v26;  // [sp-0x2e0]
    int v27;  // [bp-0x2d8], Other Possible Types: void*
    int v28;  // [bp-0x2c8]
    unsigned short v29;  // [sp-0x2c0]
    char v30;  // [bp-0x2b8]
    void* v32;  // r15
    unsigned int v33;  // ebp
    int v34;  // xmm0
    int v35;  // xmm1
    int v36;  // xmm2
    unsigned long long v37[3];  // rax
    struct struct_0 **v38;  // rax
    unsigned long long v39;  // rax
    unsigned long long v40;  // rdx
    unsigned long long v41;  // rax

    uu_factor::uu_app::h680fb957320d0cf8(&v23);
    clap_builder::builder::command::Command::try_get_matches_from::h356928954ce19a97(&v7, &v23, a0, a1);
    if (v17 == 0x8000000000000000)
    {
        v32 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(v18);
        return v32;
    }
    v21 = *((long long *)&v11);
    *((int128_t *)&v20) = *((int128_t *)&v10);
    *((int128_t *)&v19) = *((int128_t *)&v9);
    v17 = v7;
    v18 = v8;
    v33 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v17, _ZN9uu_factor7options9EXPONENTS17he776d04d341a4ac5E, g_58ddd8);
    v13 = std::io::stdio::stdout::h077da66234850927();
    std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::h65001697dc742481(v22, 0x1000, std::io::stdio::Stderr::lock::h890f7962a170fc90(&v13));
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::ha0ed1229838b49f0(&v23, &v17, _ZN9uu_factor7options6NUMBER17hef2df56071e79773E, g_58dde8);
    clap_builder::parser::error::MatchesError::unwrap::h077ff7a07b830d8b(&v7, _ZN9uu_factor7options6NUMBER17hef2df56071e79773E, g_58dde8, &v23);
    if (!v7)
    {
        v14 = std::io::stdio::stdin::h7215cc131abb55d8();
        v0 = std::io::stdio::Stdin::lock::h161a36d857331d7f(&v14);
        *((unsigned long long *)&v1) = v40 & 1;
        v12 = 9223372036854775809;
        while (true)
        {
            _$LT$std..io..Lines$LT$B$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hcbb0d6e1edcb0826(&v6, &v0);
            v38 = v6;
            if (v38 == v12)
            {
                core::ptr::drop_in_place$LT$std..io..Lines$LT$std..io..stdio..StdinLock$GT$$GT$::h55ca6e1999776e14(v0, *((int *)&v1));
LABEL_4a48cc:
                v41 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::hea36ead84b054e88(v22);
                if (v41)
                {
                    v6 = v41;
                    v7 = uucore::util_name::h60d842bf27b05e82();
                    v8 = v40;
                    v2 = &v7;
                    v3 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h60e20a2526965720;
                    v23 = &g_58af30;
                    v24 = 2;
                    v27 = 0;
                    v25 = &v2;
                    v26 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v23);
                    v7 = &v6;
                    v8 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                    v23 = &g_58af50;
                    v24 = 2;
                    v27 = 0;
                    v25 = &v7;
                    v26 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v23);
                    ::0x4a2440::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hfc16f546d6f9e628(v6);
                }
                core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::h7af400aa75a34036(v22);
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h6f0186b4e8ff4b47(&v17);
                return 0;
            }
            if (v38 == 0x8000000000000000)
                break;
            v2 = v38;
            v3 = v5;
            v4 = v24;
            _$LT$core..str..pattern..MultiCharEqPattern$LT$C$GT$$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::hf2619fac8d2a8106(&v25, v3, v4);
            v23 = 0;
            v24 = v4;
            v29 = 1;
            while (true)
            {
                v39 = core::iter::traits::iterator::Iterator::try_fold::h40e02e54eaed34f1(&v23, &v30);
                if (!v39)
                    break;
                v32 = uu_factor::print_factors_str::he132e712a0bda753(v39, v40, v22, v33);
                if (v32)
                {
                    ::0x4a2430::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h0c60f8fdd24455a3(&v2);
                    goto LABEL_4a488e;
                }
            }
            ::0x4a2430::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h0c60f8fdd24455a3(&v2);
        }
        v5 = v3;
        uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
        v2 = uucore::util_name::h60d842bf27b05e82();
        v3 = v40;
        v15 = &v2;
        v16 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h60e20a2526965720;
        v23 = &g_58af30;
        v24 = 2;
        v27 = 0;
        v25 = &v15;
        v26 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v23);
        v2 = &v5;
        v3 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
        v23 = &g_58afa8;
        v24 = 2;
        v27 = 0;
        v25 = &v2;
        v26 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v23);
        ::0x4a2440::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hfc16f546d6f9e628(v5);
        v32 = 0;
LABEL_4a488e:
        core::ptr::drop_in_place$LT$std..io..Lines$LT$std..io..stdio..StdinLock$GT$$GT$::h55ca6e1999776e14(v0, *((int *)&v1));
    }
    else
    {
        v34 = *((int128_t *)&v7);
        v35 = *((int128_t *)&v9);
        v36 = *((int128_t *)&v10);
        *((int128_t *)&v28) = *((int128_t *)&v11);
        v27 = v36;
        v25 = v35;
        v23 = v34;
        do
        {
            v37 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9e00d23760fea2f1(&v23);
            if (!v37)
                goto LABEL_4a48cc;
        } while ((v32 = uu_factor::print_factors_str::he132e712a0bda753(v37[1], v37[2], v22, (unsigned long long)v33), !v32));
    }
    core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::h7af400aa75a34036(v22);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h6f0186b4e8ff4b47(&v17);
    return v32;
}

long long uu_factor::uumain::uumain::h752c90c4c845a00a(unsigned long long a0, unsigned long long a1)
{
    unsigned long v0;  // [sp-0x408], Other Possible Types: unsigned long long
    char v1;  // [sp-0x400]
    unsigned long v2;  // [sp-0x3f8], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x3f0]
    unsigned long long v4;  // [sp-0x3e8]
    unsigned long v5;  // [sp-0x3e0], Other Possible Types: unsigned long long
    char v6;  // [bp-0x3d8], Other Possible Types: unsigned long, unsigned long long
    char v7;  // [bp-0x3c0], Other Possible Types: unsigned long, unsigned long long
    unsigned long v8;  // [sp-0x3b8], Other Possible Types: unsigned long long
    char v9;  // [bp-0x3b0]
    char v10;  // [bp-0x3a0]
    char v11;  // [bp-0x390]
    unsigned long long v12;  // [sp-0x380]
    unsigned long v13;  // [sp-0x378], Other Possible Types: unsigned long long
    unsigned long v14;  // [sp-0x370], Other Possible Types: unsigned long long
    unsigned long v15;  // [sp-0x368], Other Possible Types: unsigned long long
    unsigned long long v16;  // [sp-0x360]
    unsigned long v17;  // [sp-0x358], Other Possible Types: unsigned long long
    unsigned long long v18;  // [sp-0x350]
    int v19;  // [sp-0x348]
    int v20;  // [sp-0x338]
    unsigned long long v21;  // [sp-0x328]
    unsigned long long v22[3];  // [bp-0x320]
    int v23;  // [bp-0x2f8], Other Possible Types: void*, char, unsigned long long
    unsigned long long v24;  // [sp-0x2f0]
    int v25;  // [bp-0x2e8], Other Possible Types: char, unsigned long long
    unsigned long long v26;  // [sp-0x2e0]
    int v27;  // [bp-0x2d8], Other Possible Types: void*
    int v28;  // [bp-0x2c8]
    unsigned short v29;  // [sp-0x2c0]
    char v30;  // [bp-0x2b8]
    unsigned long long v32;  // rdx
    void* v33;  // rax
    unsigned int v34;  // ebp
    unsigned long long v35;  // rsi
    int v36;  // xmm0
    int v37;  // xmm1
    int v38;  // xmm2
    unsigned long long v39;  // rsi
    unsigned long long v40;  // rdx
    unsigned long long v41[3];  // rax
    unsigned long long v43;  // rax
    unsigned long long v44;  // rdx
    unsigned long long v45;  // rax
    unsigned long long v46;  // rax

    uu_factor::uu_app::he10222539793326c(&v23, a1, v32);
    clap_builder::builder::command::Command::try_get_matches_from::h9e5050b2fe751ed1(&v7, &v23, a0, a1);
    if (v17 == 0x8000000000000000)
    {
        v33 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7cfa18d1f977710c(v18);
        return v33;
    }
    v21 = *((long long *)&v11);
    *((int128_t *)&v20) = *((int128_t *)&v10);
    *((int128_t *)&v19) = *((int128_t *)&v9);
    v17 = v7;
    v18 = v8;
    v34 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v17, _ZN9uu_factor7options9EXPONENTS17hb6053a3601130180E, g_58dec8);
    v13 = std::io::stdio::stdout::h077da66234850927();
    std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::h159bc7a2a5f80490(v22, 0x1000, std::io::stdio::Stderr::lock::h890f7962a170fc90(&v13, v35, v32));
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::heba85ce1a21b9076(&v23, &v17, _ZN9uu_factor7options6NUMBER17hf8aa9b1766dbccc5E, g_58ded8);
    clap_builder::parser::error::MatchesError::unwrap::h49c91513f792646a(&v7, _ZN9uu_factor7options6NUMBER17hf8aa9b1766dbccc5E, g_58ded8, &v23);
    if (!v7)
    {
        v14 = std::io::stdio::stdin::h7215cc131abb55d8();
        v0 = std::io::stdio::Stdin::lock::h161a36d857331d7f(&v14);
        v1 = (char)v32 & 1;
        v12 = 9223372036854775809;
        while (true)
        {
            _$LT$std..io..Lines$LT$B$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8e078805c9d119c2(&v6, &v0, v32 | -0x100 | (char)v32 & 1);
            v43 = v6;
            if (v43 == v12)
            {
                core::ptr::drop_in_place$LT$std..io..Lines$LT$std..io..stdio..StdinLock$GT$$GT$::h221dd3f87d9980ea(v0, *((int *)&v1));
LABEL_4a12dc:
                v46 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::hf1b307e2054abe09(v22);
                if (v46)
                {
                    v6 = v46;
                    v7 = uucore::util_name::h412db5e565a079f3();
                    v8 = v32;
                    v2 = &v7;
                    v3 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hd96dc3b59da42cea;
                    v23 = &g_58ad68;
                    v24 = 2;
                    v27 = 0;
                    v25 = &v2;
                    v26 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v23, v35, v32);
                    v7 = &v6;
                    v8 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                    v23 = &g_58ad88;
                    v24 = 2;
                    v27 = 0;
                    v25 = &v7;
                    v26 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v23, v35, v32);
                    ::0x49ee50::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h39072e782a179186(v6);
                }
                core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::h01e2697fccc1ccc0(v22);
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h31aa5d90c5e73e47(&v17);
                return 0;
            }
            if (v43 == 0x8000000000000000)
                break;
            v2 = v43;
            v3 = v5;
            v4 = v24;
            _$LT$core..str..pattern..MultiCharEqPattern$LT$C$GT$$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::ha0238ef7c31e26a0(&v25, v3, v4);
            v23 = 0;
            v24 = v4;
            v29 = 1;
            while (true)
            {
                v45 = core::iter::traits::iterator::Iterator::try_fold::hb6606d751747069d(&v23, &v30, v44);
                if (!v45)
                    break;
                v33 = uu_factor::print_factors_str::hb9f5e787f1690086(v45, v32, v22, v34);
                if (v33)
                {
                    ::0x49ee40::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2fdbca39a7062229(&v2);
                    goto LABEL_4a129e;
                }
            }
            ::0x49ee40::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2fdbca39a7062229(&v2);
        }
        v5 = v3;
        uucore::mods::error::set_exit_code::h6705c4226a43fa90();
        v2 = uucore::util_name::h412db5e565a079f3();
        v3 = v32;
        v15 = &v2;
        v16 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hd96dc3b59da42cea;
        v23 = &g_58ad68;
        v24 = 2;
        v27 = 0;
        v25 = &v15;
        v26 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v23, v35, v32);
        v2 = &v5;
        v3 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
        v23 = &g_58adc8;
        v24 = 2;
        v27 = 0;
        v25 = &v2;
        v26 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v23, v35, v32);
        ::0x49ee50::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h39072e782a179186(v5);
        v33 = 0;
LABEL_4a129e:
        core::ptr::drop_in_place$LT$std..io..Lines$LT$std..io..stdio..StdinLock$GT$$GT$::h221dd3f87d9980ea(v0, *((int *)&v1));
    }
    else
    {
        v36 = *((int128_t *)&v7);
        v37 = *((int128_t *)&v9);
        v38 = *((int128_t *)&v10);
        *((int128_t *)&v28) = *((int128_t *)&v11);
        v27 = v38;
        v25 = v37;
        v23 = v36;
        do
        {
            v41 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h16939f62854e1971(&v23, v39, v40);
            if (!v41)
                goto LABEL_4a12dc;
        } while ((v33 = uu_factor::print_factors_str::hb9f5e787f1690086(v41[1], v41[2], v22, (unsigned long long)v34), !v33));
    }
    core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::h01e2697fccc1ccc0(v22);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h31aa5d90c5e73e47(&v17);
    return v33;
}

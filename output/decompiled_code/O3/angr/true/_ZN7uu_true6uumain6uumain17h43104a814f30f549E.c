long long uu_true::uumain::uumain::h43104a814f30f549(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    unsigned long v0;  // [sp-0x3a8], Other Possible Types: unsigned long long
    unsigned long v1;  // [sp-0x3a0], Other Possible Types: unsigned long long
    unsigned long v2;  // [sp-0x398], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x390]
    int v4;  // [bp-0x388], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0x380]
    unsigned long long v6;  // [sp-0x378]
    unsigned long long v7;  // [sp-0x370]
    void* v8;  // [sp-0x368]
    char v9;  // [bp-0x350], Other Possible Types: unsigned long long
    unsigned long long v10;  // [sp-0x348]
    unsigned long long v11;  // [sp-0x340]
    unsigned long long v12;  // [sp-0x338]
    char v13;  // [bp-0x330]
    char v14;  // [bp-0x320]
    char v15;  // [bp-0x318]
    char v16;  // [bp-0x310]
    char v17;  // [bp-0x2e0]
    unsigned long long v19;  // rcx
    unsigned int v21;  // eax
    unsigned long long v22;  // rsi
    unsigned long long v23;  // rdx
    unsigned long long v24;  // r8
    unsigned long long v25;  // r9
    unsigned long long v26;  // r14

    uu_true::uu_app::hb3758cc78123f481(&v17, a1, a2);
    core::iter::traits::iterator::Iterator::collect::hd1f5006ee1f65182(&v13, a0, a1);
    if (*((long long *)&v14) > 2)
    {
        ::0x457f70::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::h5d9b75d56b234089(&v13);
    }
    else
    {
        v6 = *((long long *)&v14);
        *((int128_t *)&v4) = *((int128_t *)&v13);
        clap_builder::builder::command::Command::try_get_matches_from_mut::h6c5241e1c1d6f87c(&v15, &v17, &v4, v19);
        if (*((long long *)&v15) != 0x8000000000000000)
        {
LABEL_4591f1:
            core::ptr::drop_in_place$LT$core..result..Result$LT$clap_builder..parser..matches..arg_matches..ArgMatches$C$clap_builder..error..Error$GT$$GT$::hb1ae370faa054361(&v15);
        }
        else
        {
            switch (v21)
            {
            case 12:
                v26 = clap_builder::builder::command::Command::print_help::h312981effd3aecd5(&v17, v22, v23, v19, v24, v25);
                if (!(!v26))
                    goto LABEL_459138;
                break;
            case 14:
                v1 = std::io::stdio::stdout::h077da66234850927();
                clap_builder::builder::command::Command::render_version::h713daecc456d7d5d(&v9, &v17);
                v2 = &v9;
                v3 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v4 = &g_4f68e0;
                v5 = 2;
                v8 = 0;
                v6 = &v2;
                v7 = 1;
                v26 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_fmt::h0f6acf0ef7a6b873(&v1, &v4, v23);
                ::0x457a70::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h6af9d07053731148(&v9);
                if (v26)
                {
LABEL_459138:
                    v0 = v26;
                    v1 = &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E;
                    v2 = uucore::util_name::h412db5e565a079f3();
                    v3 = v23;
                    v9 = &v2;
                    v10 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he35abd2c8eca24a2;
                    v11 = &v0;
                    v12 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                    v4 = &g_4f6900;
                    v5 = 3;
                    v8 = 0;
                    v6 = &v9;
                    v7 = 2;
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hdec181f0052a184b(_$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::write_fmt::h82787f8382d2102c(&v1, &v4, v23));
                    uucore::mods::error::set_exit_code::h6705c4226a43fa90();
                    ::0x457a80::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::he6b65412e751c75d(v0);
                }
            default:
                goto LABEL_4591df;
            }
LABEL_4591df:
            core::ptr::drop_in_place$LT$clap_builder..error..Error$GT$::h9800155d59090261(*((long long *)&v16));
            if (!(!v26))
                goto LABEL_4591f1;
        }
    }
    return ::0x457be0::core::ptr::drop_in_place$LT$clap_builder..builder..command..Command$GT$::ha9f67da1c6906e4a(&v17);
}

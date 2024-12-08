long long uu_false::uumain::uumain::h196c92a93faa86e2(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long a3, unsigned long a4, unsigned long a5)
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

    uu_false::uu_app::hb04e12a15ecb26d4(&v17, a1, a2);
    uucore::mods::error::set_exit_code::h6705c4226a43fa90();
    core::iter::traits::iterator::Iterator::collect::hf95195d5551e554a(&v13, a0, a1);
    if (*((long long *)&v14) > 2)
    {
        ::0x457f60::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::h449dea239dd7f97e(&v13);
    }
    else
    {
        v6 = *((long long *)&v14);
        *((int128_t *)&v4) = *((int128_t *)&v13);
        clap_builder::builder::command::Command::try_get_matches_from_mut::h490aaac07624fe7b(&v15, &v17, &v4, v19);
        if (*((long long *)&v15) != 0x8000000000000000)
        {
LABEL_4591e1:
            core::ptr::drop_in_place$LT$core..result..Result$LT$clap_builder..parser..matches..arg_matches..ArgMatches$C$clap_builder..error..Error$GT$$GT$::h6c38bd8a833c0aca(&v15);
        }
        else
        {
            switch (v21)
            {
            case 12:
                v26 = clap_builder::builder::command::Command::print_help::h312981effd3aecd5(&v17, v22, v23, v19, v24, v25);
                if (!(!v26))
                    goto LABEL_459133;
                break;
            case 14:
                v1 = std::io::stdio::stdout::h077da66234850927();
                clap_builder::builder::command::Command::render_version::h713daecc456d7d5d(&v9, &v17);
                v2 = &v9;
                v3 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v4 = &g_4f68d0;
                v5 = 2;
                v8 = 0;
                v6 = &v2;
                v7 = 1;
                v26 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_fmt::h0f6acf0ef7a6b873(&v1, &v4, v23);
                ::0x457a60::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h59d98f96ec2e5d54(&v9);
                if (v26)
                {
LABEL_459133:
                    v0 = v26;
                    v1 = &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E;
                    v2 = uucore::util_name::h412db5e565a079f3();
                    v3 = v23;
                    v9 = &v2;
                    v10 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h49249b079fcb182b;
                    v11 = &v0;
                    v12 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                    v4 = &g_4f68f0;
                    v5 = 3;
                    v8 = 0;
                    v6 = &v9;
                    v7 = 2;
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hf4ad0a7f2e771639(_$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::write_fmt::h82787f8382d2102c(&v1, &v4, v23));
                    ::0x457a70::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hefb8cbef6d40930b(v0);
                }
            default:
                goto LABEL_4591cf;
            }
LABEL_4591cf:
            core::ptr::drop_in_place$LT$clap_builder..error..Error$GT$::h9f56800e8b18def3(*((long long *)&v16));
            if (!(!v26))
                goto LABEL_4591e1;
        }
    }
    return ::0x457bd0::core::ptr::drop_in_place$LT$clap_builder..builder..command..Command$GT$::h47d63376bf0d98b1(&v17);
}

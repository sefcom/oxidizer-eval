long long uu_false::uumain::uumain::h682a05038129c9ec(unsigned long long a0, unsigned long long a1)
{
    unsigned long v0;  // [sp-0x3a8]
    unsigned long v1;  // [sp-0x3a0]
    struct struct_0 **v2;  // [sp-0x398]
    unsigned long long v3;  // [sp-0x390]
    int v4;  // [sp-0x388], Other Possible Types: unsigned long
    unsigned long long v5;  // [sp-0x380]
    struct struct_0 **v6;  // [sp-0x378], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0x370]
    void* v8;  // [sp-0x368]
    struct struct_0 **v9;  // [bp-0x350]
    unsigned long long v10;  // [sp-0x348]
    char *v11;  // [sp-0x340]
    unsigned long long v12;  // [sp-0x338]
    char v13;  // [bp-0x330]
    char v14;  // [bp-0x320]
    char v15;  // [bp-0x318]
    char v16;  // [bp-0x310]
    char v17;  // [bp-0x2e0]
    unsigned int v20;  // eax
    unsigned long long v21;  // r14
    unsigned long v22;  // rdx

    uu_false::uu_app::he23c4502b9c9f7a3(&v17);
    uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
    core::iter::traits::iterator::Iterator::collect::h9b9ce22406bfecc3(&v13, a0, a1);
    if (*((long long *)&v14) > 2)
    {
        ::0x458070::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::h514a86a3e4597d5f(&v13);
    }
    else
    {
        v6 = *((long long *)&v14);
        *((int128_t *)&v4) = *((int128_t *)&v13);
        clap_builder::builder::command::Command::try_get_matches_from_mut::h75727dabc051cc1a(&v15, &v17, &v4);
        if (*((long long *)&v15) != 0x8000000000000000)
        {
LABEL_4592f1:
            core::ptr::drop_in_place$LT$core..result..Result$LT$clap_builder..parser..matches..arg_matches..ArgMatches$C$clap_builder..error..Error$GT$$GT$::h0569a97e1311b44d(&v15);
        }
        else
        {
            switch (v20)
            {
            case 12:
                v21 = clap_builder::builder::command::Command::print_help::ha75f02ad65e70b14(&v17);
                if (!(!v21))
                    goto LABEL_459243;
                break;
            case 14:
                v1 = std::io::stdio::stdout::h077da66234850927();
                clap_builder::builder::command::Command::render_version::h6726fbcc2d48ef38(&v9, &v17);
                v2 = &v9;
                v3 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v4 = &g_4f6838;
                v5 = 2;
                v8 = 0;
                v6 = &v2;
                v7 = 1;
                v21 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_fmt::h0f6acf0ef7a6b873(&v1, &v4);
                ::0x457b70::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h27e7d2eb95319d2d(&v9);
                if (v21)
                {
LABEL_459243:
                    v0 = v21;
                    v1 = &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E;
                    v2 = uucore::util_name::h60d842bf27b05e82();
                    v3 = v22;
                    v9 = &v2;
                    v10 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h0080870d4dd86d34;
                    v11 = &v0;
                    v12 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                    v4 = &g_4f6870;
                    v5 = 3;
                    v8 = 0;
                    v6 = &v9;
                    v7 = 2;
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h83941425b2f571b0(_$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::write_fmt::h82787f8382d2102c(&v1, &v4));
                    ::0x457b80::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hba36a569e01be34c(v0);
                }
            default:
                goto LABEL_4592df;
            }
LABEL_4592df:
            core::ptr::drop_in_place$LT$clap_builder..error..Error$GT$::hd4fa2428a646d037(*((long long *)&v16));
            if (!(*((long long *)&v15) == 0x8000000000000000))
                goto LABEL_4592f1;
        }
    }
    return ::0x457ce0::core::ptr::drop_in_place$LT$clap_builder..builder..command..Command$GT$::h3e277424525feb1a(&v17);
}

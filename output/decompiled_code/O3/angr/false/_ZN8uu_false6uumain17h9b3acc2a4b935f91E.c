long long uu_false::uumain::h9b3acc2a4b935f91(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    unsigned long v0;  // [sp-0x3b0], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x3a8]
    struct_0 *v2;  // [sp-0x3a0], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v3;  // [sp-0x398]
    unsigned long v4;  // [sp-0x390], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0x388]
    unsigned long v6;  // [bp-0x380], Other Possible Types: unsigned long long
    struct_0 *v7;  // [sp-0x378], Other Possible Types: unsigned long, unsigned long long
    unsigned long v8;  // [sp-0x370], Other Possible Types: unsigned long long
    int v9;  // [sp-0x368]
    unsigned long v10;  // [sp-0x348], Other Possible Types: unsigned long long
    unsigned long v11;  // [sp-0x340], Other Possible Types: unsigned long long
    int v12;  // [bp-0x338], Other Possible Types: char, unsigned long long
    unsigned long v13;  // [sp-0x330], Other Possible Types: unsigned long long
    struct_0 *v14;  // [sp-0x328], Other Possible Types: unsigned long long
    unsigned long long v15;  // [sp-0x320]
    void* v16;  // [sp-0x318]
    int v17;  // [sp-0x308]
    struct_0 *v18;  // [sp-0x2f8]
    char v19;  // [bp-0x2f0]
    struct_0 *v22;  // rax
    unsigned long long v24;  // r15
    unsigned long long v25;  // rdi
    struct_0 *v27;  // r14
    unsigned int v28;  // eax
    unsigned long long v29;  // rsi
    unsigned long long v30;  // rcx
    unsigned long long v31;  // r8
    unsigned long long v32;  // r9
    unsigned long long v33;  // r15
    unsigned long long v34;  // rdx
    unsigned long long v35;  // rax

    uu_false::uu_app::h4f08edcbcac29770(&v19);
    uucore::mods::error::set_exit_code::h0565497d88d725e1();
    v4 = a0;
    v5 = a1;
    _$LT$core..iter..adapters..cloned..Cloned$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::size_hint::h83043bfe5b39d6b9(&v12, &v4);
    if (!v13)
    {
        v6 = &g_4c7fc8;
        v7 = 1;
        v8 = 8;
        *((int128_t *)&v9) = 0;
        core::panicking::panic_fmt::he12d0d7468628bb4(&v6); /* do not return */
    }
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h1198b7232c23acd2(&v6, v14, 0);
    if (v6)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    v0 = v7;
    v1 = v8;
    v2 = 0;
    v12 = v4;
    v13 = v5;
    _$LT$core..iter..adapters..cloned..Cloned$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::size_hint::h83043bfe5b39d6b9(&v6, &v12);
    if (!v7)
    {
        v6 = &g_4c7fc8;
        v7 = 1;
        v8 = 8;
        *((int128_t *)&v9) = 0;
        core::panicking::panic_fmt::he12d0d7468628bb4(&v6); /* do not return */
    }
    if (v8 > v0)
    {
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::hfdd046b70edc57e0(&v0, 0, v8);
        v22 = v2;
    }
    v6 = &v2;
    v7 = v22;
    v8 = v1;
    _$LT$core..iter..adapters..cloned..Cloned$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h7f7fd091c0e9045e(v12, v13, &v6);
    *((int128_t *)&v17) = *((int128_t *)&v0);
    v18 = v2;
    if (v18 <= 2)
    {
        v14 = v18;
        v12 = v17;
        clap_builder::builder::command::Command::try_get_matches_from_mut::h36bc62c0eebbc4b1(&v6, &v19, &v12);
        if (v6 != 0x8000000000000000)
        {
LABEL_42f64d:
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h5a94a5da261e53f7(&v6);
        }
        else
        {
            v27 = v7;
            v28 = v27->field_d5;
            if (v28 != 12)
            {
                if (!(v28 == 14))
                    goto LABEL_42f63e;
                v11 = std::io::stdio::stdout::h077da66234850927();
                clap_builder::builder::command::Command::render_version::hbf03bb35331440ca(&v0, &v19);
                v4 = &v0;
                v5 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v12 = &g_4c8020;
                v13 = 2;
                v16 = 0;
                v14 = &v4;
                v15 = 1;
                v33 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_fmt::h0f6acf0ef7a6b873(&v11, &v12, v34);
                _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd935ee6b077c52d4(&v0);
                if (!(!v33))
                    goto LABEL_42f58c;
            }
            else
            {
                v33 = clap_builder::builder::command::Command::print_help::ha8dc6bd4f9c1968b(&v19, v29, v34, v30, v31, v32);
                if (!v33)
                    goto LABEL_42f63e;
LABEL_42f58c:
                v10 = v33;
                v11 = &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E;
                v4 = uucore::util_name::h359eff083fe53467();
                v5 = v34;
                v0 = &v4;
                v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf6939484beae80ba;
                v2 = &v10;
                v3 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                v12 = &g_4c8040;
                v13 = 3;
                v16 = 0;
                v14 = &v0;
                v15 = 2;
                v35 = _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::write_fmt::h82787f8382d2102c(&v11, &v12, v34);
                if (v35)
                    ::0x42dcb0::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h4e9d7fb304f3ea49(v35);
                ::0x42dcb0::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h4e9d7fb304f3ea49(v10);
            }
LABEL_42f63e:
            core::ptr::drop_in_place$LT$clap_builder..error..Error$GT$::h95b93d1b92bb8ada(v27);
            if (!(v6 == 0x8000000000000000))
                goto LABEL_42f64d;
        }
    }
    else
    {
        v24 = &v18->padding_0[1];
        while (true)
        {
            v25 = (long long)(&v17)[8];
            if (v24 == 1)
                break;
            v24 -= 1;
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd935ee6b077c52d4(v25);
        }
        _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::haf25aa5c2eb86d94(&v17);
    }
    core::ptr::drop_in_place$LT$clap_builder..builder..command..Command$GT$::h74323db8a3c7c9e9(&v19);
    return uucore::mods::error::get_exit_code::hf050de69600a682c();
}

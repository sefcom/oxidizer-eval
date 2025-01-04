long long uu_uniq::uumain::uumain::h12cede16e06915d0(unsigned long long a0, unsigned long long a1, unsigned long a2, unsigned long a3)
{
    char v0;  // [sp-0x415]
    char v1;  // [sp-0x414]
    char v2;  // [sp-0x413]
    char v3;  // [sp-0x412]
    char v4;  // [sp-0x411]
    unsigned long long v5;  // [sp-0x410]
    char v6;  // [bp-0x408], Other Possible Types: unsigned long
    unsigned long long v7;  // [sp-0x400]
    int v8;  // [bp-0x3f8], Other Possible Types: char
    char v9;  // [bp-0x3f0]
    unsigned long long v10;  // [sp-0x3e8], Other Possible Types: unsigned long
    char v11;  // [bp-0x3e0], Other Possible Types: unsigned int
    char v12;  // [bp-0x3d0]
    unsigned long v13;  // [sp-0x3c0], Other Possible Types: unsigned long long
    unsigned long long v14;  // [sp-0x3b8]
    unsigned long long v15;  // [sp-0x3b0]
    int v16;  // [sp-0x3a8]
    int v17;  // [sp-0x398]
    int v18;  // [sp-0x388]
    unsigned long long v19;  // [sp-0x378]
    unsigned long long v20;  // [sp-0x370]
    unsigned long long v21;  // [sp-0x368]
    unsigned long long v22;  // [sp-0x360]
    int v23;  // [sp-0x358]
    unsigned long long v24;  // [sp-0x348]
    char v25;  // [bp-0x338]
    char v26;  // [bp-0x330]
    char v27;  // [bp-0x320]
    char v28;  // [bp-0x310]
    char v29;  // [bp-0x300]
    int v30;  // [bp-0x2f8], Other Possible Types: char[55], unsigned long long
    int v31;  // [bp-0x2f0], Other Possible Types: unsigned long, unsigned long long
    int v32;  // [bp-0x2e8], Other Possible Types: char, unsigned long long
    int v33;  // [bp-0x2e0], Other Possible Types: unsigned long long
    unsigned long v34;  // [sp-0x2d8], Other Possible Types: unsigned long long
    int v35;  // [bp-0x2d0], Other Possible Types: unsigned long long
    char v36;  // [bp-0x2c8]
    char v37;  // [sp-0x2c7]
    char v38;  // [sp-0x2c6]
    char v39;  // [sp-0x2c5]
    char v40;  // [sp-0x2c4]
    char v41;  // [sp-0x2c3]
    char v42;  // [sp-0x2c2]
    unsigned long long v43;  // [sp-0x2c0]
    unsigned long long v45;  // r13
    unsigned long long v46;  // rsi
    unsigned long long v47;  // rdx
    unsigned long long v48;  // rcx
    unsigned long long v51;  // rax
    unsigned long long v52;  // rax
    int v53;  // xmm0
    int v54;  // xmm1
    int v55;  // xmm1
    unsigned long long v59;  // r13
    unsigned long long v60;  // r13
    unsigned long long v61;  // rbp

    uu_uniq::handle_obsolete::h1becbb41acd03a45(v30, a0, a1);
    v24 = v34;
    *((int128_t *)&v23) = *((int128_t *)&v32);
    v45 = *((long long *)&v36);
    uu_uniq::uu_app::h21a3be98fe4bed5d(v30, v46, v47);
    v19 = v24;
    v18 = v23;
    clap_builder::builder::command::Command::try_get_matches_from::h9bc1bd8bc5327abb(&v8, v30, &v18, v48);
    if (v13 == 0x8000000000000000)
    {
        v51 = core::ops::function::FnOnce::call_once::hba3591183ae98aa9(v14);
        return v51;
    }
    *((int128_t *)&v16) = *((int128_t *)&v11);
    *((int128_t *)&v17) = *((int128_t *)&v12);
    v13 = *((long long *)&v8);
    v14 = *((long long *)&v9);
    v15 = v10;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h4ea59ec990ab1227(v30, &v13, _ZN7uu_uniq9ARG_FILES17h8b83ed60f9304131E, g_530310);
    clap_builder::parser::error::MatchesError::unwrap::h703efa06b8fc7e2c(&v25, _ZN7uu_uniq9ARG_FILES17h8b83ed60f9304131E, g_530310, v30);
    v52 = *((long long *)&v25);
    if (!v30)
    {
        core::tuple::_$LT$impl$u20$core..default..Default$u20$for$u20$$LP$U$C$T$RP$$GT$::default::hfc62a109b3f4d822(v30);
    }
    else
    {
        v43 = *((long long *)&v29);
        v53 = *((int128_t *)&v26);
        v54 = *((int128_t *)&v27);
        *((int128_t *)&v35) = *((int128_t *)&v28);
        v33 = v54;
        v31 = v53;
        v30 = v52;
        uu_uniq::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::h91733f00e94e2087(&v8, v30, v47);
        v55 = *((int128_t *)&v10);
        v30 = v8;
        v32 = v55;
    }
    v22 = v32;
    v21 = v33;
    uu_uniq::opt_parsed::h9a0a76b92d9f982c(v30, _ZN7uu_uniq7options11SKIP_FIELDS17h2bb6432963610c92E, g_530bb8, &v13);
    if (v30 || (v6 = (unsigned long)v31, v7 = v32, uu_uniq::opt_parsed::h9a0a76b92d9f982c(v30, _ZN7uu_uniq7options10SKIP_CHARS17hbcd8ab9768c8cda7E, g_530bc8, &v13), v30))
    {
        v51 = v31;
    }
    else
    {
        v20 = v31;
        v5 = v32;
        v1 = 1;
        if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v13, _ZN7uu_uniq7options8REPEATED17h6df9e3e681573764E, g_530ba8))
            v1 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(&v13, _ZN7uu_uniq7options12ALL_REPEATED17h3af280ad36b283aeE, g_530b68);
        v4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v13, _ZN7uu_uniq7options6UNIQUE17h299064be3620c038E, g_530bd8);
        v0 = 1;
        if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(&v13, _ZN7uu_uniq7options12ALL_REPEATED17h3af280ad36b283aeE, g_530b68))
            v0 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(&v13, _ZN7uu_uniq7options5GROUP17h5aa12383b2ab72d4E, g_530bf8);
        v3 = uu_uniq::get_delimiter::hdb564f484ea1739f(&v13);
        v2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v13, _ZN7uu_uniq7options5COUNT17h2c22ae5cbb35dde4E, g_530b88);
        if (!v6)
            v31 = v31;
        else
            v31 = v7;
        v7 = v31;
        if (!v20)
            v59 = v45;
        else
            v59 = v5;
        v5 = v59;
        uu_uniq::opt_parsed::h9a0a76b92d9f982c(&v8, _ZN7uu_uniq7options11CHECK_CHARS17h70a3b944769f6e22E, g_530b78, &v13);
        v60 = *((long long *)&v9);
        v51 = v60;
        if (!*((long long *)&v8))
        {
            v6 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v13, _ZN7uu_uniq7options11IGNORE_CASE17hba75ae53dcd91b83E, g_530b98);
            v36 = v1;
            v37 = v4;
            v38 = v0;
            v42 = v3;
            v39 = v2;
            v30 = 1;
            v31 = v7;
            v32 = 1;
            v33 = v5;
            v34 = v60;
            v35 = v10;
            v40 = v6;
            v41 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v13, _ZN7uu_uniq7options15ZERO_TERMINATED17he85c5d38a806ae02E, g_530be8);
            if ((v39 & v38))
            {
                ::0x46f530::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hd6c812b231802126(&v18);
                v10 = v19;
                v8 = v18;
                v11 = 1;
                v51 = alloc::boxed::Box$LT$T$GT$::new::h80806647e8784038(&v8);
            }
            else
            {
                uu_uniq::open_input_file::h792d730de2d63225(&v8, v30, v31);
                v51 = *((long long *)&v9);
                v61 = v10;
                if (!*((long long *)&v8))
                {
                    uu_uniq::open_output_file::h6c5c0ef7c704597c(&v8, v22, v21);
                    v51 = *((long long *)&v9);
                    if (*((long long *)&v8))
                    {
                        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$::h2ae1655ce00f55b1(v51, v61);
                        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h8d6813b76c48873b(&v13);
                        return v51;
                    }
                    v51 = uu_uniq::Uniq::print_uniq::h818dd57e8b925a7a(v30, v51, v61, v51, v10);
                }
            }
        }
    }
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h8d6813b76c48873b(&v13);
    return v51;
}

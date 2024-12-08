long long uu_uniq::uumain::uumain::h7c17d7c1beb6178b(unsigned long long a0, unsigned long long a1, unsigned long a2, unsigned long a3)
{
    char v0;  // [sp-0x41d]
    char v1;  // [sp-0x41c]
    char v2;  // [sp-0x41b]
    char v3;  // [sp-0x41a]
    char v4;  // [sp-0x419]
    unsigned long long v5;  // [sp-0x418]
    unsigned long long v6;  // [sp-0x410]
    int v7;  // [bp-0x408], Other Possible Types: char
    char v8;  // [bp-0x400]
    unsigned long v9;  // [sp-0x3f8], Other Possible Types: unsigned long long
    char v10;  // [bp-0x3f0], Other Possible Types: unsigned int
    char v11;  // [bp-0x3e0]
    unsigned long v12;  // [sp-0x3d0], Other Possible Types: unsigned long long
    unsigned long long v13;  // [sp-0x3c8]
    unsigned long long v14;  // [sp-0x3c0]
    int v15;  // [sp-0x3b8]
    int v16;  // [sp-0x3a8]
    int v17;  // [bp-0x398], Other Possible Types: unsigned long
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
    int v30;  // [bp-0x2f8], Other Possible Types: char, unsigned long long
    int v31;  // [bp-0x2f0], Other Possible Types: unsigned long, unsigned long long
    int v32;  // [bp-0x2e8], Other Possible Types: char, unsigned long long
    int v33;  // [bp-0x2e0], Other Possible Types: unsigned long long
    int v34;  // [bp-0x2d8], Other Possible Types: char
    int v35;  // [bp-0x2d0], Other Possible Types: char
    char v36;  // [bp-0x2c8]
    char v37;  // [sp-0x2c7]
    char v38;  // [sp-0x2c6]
    char v39;  // [sp-0x2c5]
    char v40;  // [sp-0x2c4]
    char v41;  // [sp-0x2c3]
    char v42;  // [sp-0x2c2]
    unsigned long long v43;  // [sp-0x2c0]
    unsigned long long v45;  // rbp
    unsigned long long v46;  // r15
    unsigned long long v47;  // rsi
    unsigned long long v48;  // rdx
    unsigned long long v49;  // rcx
    unsigned long long v52;  // rax
    unsigned long long v53;  // rax
    int v54;  // xmm0
    int v55;  // xmm1
    int v56;  // xmm1
    unsigned long long v59;  // r15
    unsigned long long v60;  // r12

    uu_uniq::handle_obsolete::ha59818112a73f843(&v30, a0, a1);
    v24 = *((long long *)&v34);
    *((int128_t *)&v23) = *((int128_t *)&v32);
    v45 = *((long long *)&v35);
    v46 = *((long long *)&v36);
    uu_uniq::uu_app::h2c36639e4027458e(&v30, v47, v48);
    v19 = v24;
    v18 = v23;
    clap_builder::builder::command::Command::try_get_matches_from::ha57cf469d1187e2c(&v7, &v30, &v18, v49);
    if (v12 == 0x8000000000000000)
    {
        v52 = core::ops::function::FnOnce::call_once::h74990db09a50e1a5(v13);
        return v52;
    }
    *((int128_t *)&v15) = *((int128_t *)&v10);
    *((int128_t *)&v16) = *((int128_t *)&v11);
    v12 = *((long long *)&v7);
    v13 = *((long long *)&v8);
    v14 = v9;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h6f6ce4409db1f962(&v30, &v12, _ZN7uu_uniq9ARG_FILES17hff55a0f11a77f04eE, g_530ee0);
    clap_builder::parser::error::MatchesError::unwrap::h6921eaf4c080d900(&v25, _ZN7uu_uniq9ARG_FILES17hff55a0f11a77f04eE, g_530ee0, &v30);
    v53 = *((long long *)&v25);
    if (!v30)
    {
        core::tuple::_$LT$impl$u20$core..default..Default$u20$for$u20$$LP$U$C$T$RP$$GT$::default::h4b8917a8d67dc2ae(&v30);
    }
    else
    {
        v43 = *((long long *)&v29);
        v54 = *((int128_t *)&v26);
        v55 = *((int128_t *)&v27);
        *((int128_t *)&v35) = *((int128_t *)&v28);
        v33 = v55;
        v31 = v54;
        v30 = v53;
        uu_uniq::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::h446a8e6501b36a41(&v7, &v30, v48);
        v56 = *((int128_t *)&v9);
        v30 = v7;
        v32 = v56;
    }
    v22 = v32;
    v21 = v33;
    uu_uniq::opt_parsed::hf2c746caa1df7d4f(&v30, _ZN7uu_uniq7options11SKIP_FIELDS17h8f3a13fd37642328E, g_5317d0, &v12);
    if (!(v30 || (v17 = (unsigned long)v52, v6 = v32, uu_uniq::opt_parsed::hf2c746caa1df7d4f(&v30, _ZN7uu_uniq7options10SKIP_CHARS17h7a412dccd1527db1E, g_5317e0, &v12), v30)))
    {
        v20 = v52;
        v5 = v32;
        v1 = 1;
        if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v12, _ZN7uu_uniq7options8REPEATED17hd7825478a50902dfE, g_5317c0))
            v1 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::hfa828e742123c8eb(&v12, _ZN7uu_uniq7options12ALL_REPEATED17h2a907e9f7ad01b7bE, g_531780);
        v4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v12, _ZN7uu_uniq7options6UNIQUE17hbb8a134f66ad0702E, g_5317f0);
        v0 = 1;
        if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::hfa828e742123c8eb(&v12, _ZN7uu_uniq7options12ALL_REPEATED17h2a907e9f7ad01b7bE, g_531780))
            v0 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::hfa828e742123c8eb(&v12, _ZN7uu_uniq7options5GROUP17haca4b905d0e1995bE, g_531810);
        v3 = uu_uniq::get_delimiter::hc394c769cc3c8108(&v12);
        v2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v12, _ZN7uu_uniq7options5COUNT17hfd1c293b86b67949E, g_5317a0);
        if (!v17)
            v31 = v31;
        else
            v31 = v6;
        v6 = v31;
        if (v20)
            v45 = 1;
        if (v20)
            v59 = v5;
        v5 = v59;
        uu_uniq::opt_parsed::hf2c746caa1df7d4f(&v7, _ZN7uu_uniq7options11CHECK_CHARS17h4e3f0635d6525992E, g_531790, &v12);
        if (*((long long *)&v7))
        {
            v52 = *((long long *)&v8);
        }
        else
        {
            *((int128_t *)&v17) = *((int128_t *)&v8);
            v36 = v1;
            v37 = v4;
            v38 = v0;
            v42 = v3;
            v39 = v2;
            v30 = 1;
            v31 = v6;
            v32 = v45;
            v33 = v5;
            *((int128_t *)&v34) = (int128_t)v17;
            v40 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v12, _ZN7uu_uniq7options11IGNORE_CASE17ha412fb3273f164ffE, g_5317b0);
            v41 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v12, _ZN7uu_uniq7options15ZERO_TERMINATED17hc2074598bee3f8f1E, g_531800);
            if ((v39 & v38))
            {
                ::0x46f6a0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha65e6300eaf80982(&v18);
                v9 = v19;
                v7 = v18;
                v10 = 1;
                v52 = alloc::boxed::Box$LT$T$GT$::new::h9ea80d7daab79795(&v7);
            }
            else
            {
                uu_uniq::open_input_file::hdde676acc68c55ef(&v7, v30, v52);
                v52 = *((long long *)&v8);
                v60 = v9;
                if (!*((long long *)&v7))
                {
                    uu_uniq::open_output_file::h91c67f8c10ed1a09(&v7, v22, v21);
                    v52 = *((long long *)&v8);
                    if (*((long long *)&v7))
                    {
                        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$::hf52dd28bb659f3b5(v52, v60);
                        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hfb31d59a373d49f0(&v12);
                        return v52;
                    }
                    v52 = uu_uniq::Uniq::print_uniq::h991e4f51a3564414(&v30, v52, v60, v52, v9);
                }
            }
        }
    }
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hfb31d59a373d49f0(&v12);
    return v52;
}

long long uu_env::make_options::h1d1233ee0c3e2ece(unsigned long long a0[3], unsigned long long a1)
{
    char v0;  // [sp-0x269]
    int v1;  // [bp-0x268], Other Possible Types: char
    int v2;  // [sp-0x258]
    int v3;  // [sp-0x248]
    int v4;  // [sp-0x238]
    char v5;  // [bp-0x218], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v6;  // [sp-0x210]
    void* v7;  // [sp-0x208]
    char v8;  // [bp-0x200], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v9;  // [sp-0x1f8]
    void* v10;  // [sp-0x1f0]
    int v11;  // [bp-0x1e8], Other Possible Types: char
    char v12;  // [bp-0x1e0]
    unsigned long v13;  // [sp-0x1d8], Other Possible Types: unsigned long long
    int v14;  // [sp-0x1d0]
    unsigned long long v15;  // [sp-0x1c0]
    void* v16;  // [sp-0x1b8]
    unsigned long long v17;  // [sp-0x1b0]
    int v18;  // [sp-0x1a8]
    unsigned long long v19;  // [sp-0x198]
    void* v20;  // [sp-0x190]
    void* v21;  // [sp-0x188]
    unsigned long long v22;  // [sp-0x180]
    void* v23;  // [sp-0x178]
    unsigned long long v24;  // [sp-0x170]
    unsigned long long v25;  // [sp-0x168]
    unsigned long long v26;  // [sp-0x160]
    struct_0 *v27;  // [sp-0x158]
    char v28;  // [sp-0x150]
    char v29;  // [sp-0x14f]
    int v30;  // [bp-0x138], Other Possible Types: char
    int v31;  // [sp-0x128]
    int v32;  // [sp-0x118]
    int v33;  // [sp-0x108]
    char v34;  // [bp-0xf8]
    char v35;  // [bp-0xe8]
    char v36;  // [bp-0xd8]
    char v37;  // [bp-0xc8]
    int v38;  // [sp-0xb8]
    int v39;  // [sp-0xa8]
    int v40;  // [sp-0x98]
    int v41;  // [sp-0x88]
    int v42;  // [sp-0x78]
    int v43;  // [sp-0x68]
    int v44;  // [sp-0x58]
    int v45;  // [sp-0x48]
    void* v47;  // r13
    unsigned long long v49[3];  // rax
    struct_0 *v53;  // rax
    void* v54;  // rcx
    unsigned int v55[5];  // rax
    unsigned long long v56;  // rax
    unsigned long v57;  // rdx
    char v58;  // bl
    unsigned long long v59[3];  // r13
    unsigned long long v60;  // rax
    unsigned long long v61;  // rcx
    unsigned long long v62[3];  // rax
    unsigned long long v63;  // rax

    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "ignore-environment", 18);
    v47 = 0;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::haf87a3f80c6c6497(&v11, a1, "chdir", 5);
    v49 = clap_builder::parser::error::MatchesError::unwrap::h86a6ee1c01117d6c("chdir", 5, &v11);
    if (v49)
        v47 = v49[1];
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hfa98c77e26d8adfd(&v11, a1, "fileTSTPi128", 4);
    clap_builder::parser::error::MatchesError::unwrap::h53fc80eeac36efb0(&v1, "fileTSTPi128", 4, &v11);
    if (*((long long *)&v1))
    {
        v41 = v4;
        v40 = v3;
        v39 = v2;
        v38 = v1;
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h94f0aac4391d9fcc(&v5, &v38);
    }
    else
    {
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h38052905bffb397a(&v11, 0, 0);
        if (*((long long *)&v11))
            alloc::raw_vec::handle_error::h2372476369f9b8ac(v5, v13); /* do not return */
        v5 = *((long long *)&v12);
        v6 = v13;
        v7 = 0;
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hfa98c77e26d8adfd(&v11, a1, "unset", 5);
    clap_builder::parser::error::MatchesError::unwrap::h53fc80eeac36efb0(&v1, "unset", 5, &v11);
    if (*((long long *)&v1))
    {
        v45 = v4;
        v44 = v3;
        v43 = v2;
        v42 = v1;
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::ha4c9e82de2224bcc(&v8, &v42);
    }
    else
    {
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h38052905bffb397a(&v11, 0, 0);
        if (*((long long *)&v11))
            alloc::raw_vec::handle_error::h2372476369f9b8ac(v8, v13); /* do not return */
        v8 = *((long long *)&v12);
        v9 = v13;
        v10 = 0;
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::haf87a3f80c6c6497(&v11, a1, "argv0", 5);
    v53 = clap_builder::parser::error::MatchesError::unwrap::h86a6ee1c01117d6c("argv0", 5, &v11);
    if (v53)
    {
        v54 = v53->field_8;
        v53 = v53->field_10;
    }
    else
    {
        v54 = 0;
    }
    v13 = v7;
    *((int128_t *)&v11) = *((int128_t *)&v5);
    *((int128_t *)&v14) = *((int128_t *)&v8);
    v15 = v10;
    v28 = v0;
    *((int *)&v29) = ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "nullXCPUBOLDBlue", 4) ? 0 : 10);
    v24 = v47;
    v25 = v49[2];
    v16 = 0;
    v17 = 8;
    *((int128_t *)&v18) = 0;
    v19 = 8;
    v20 = 0;
    v26 = v54;
    v27 = v53;
    v21 = 0;
    v22 = 8;
    v23 = 0;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hfa98c77e26d8adfd(&v1, a1, "ignore-signal", 13);
    clap_builder::parser::error::MatchesError::unwrap::h53fc80eeac36efb0(&v30, "ignore-signal", 13, &v1);
    if (*((long long *)&v30))
    {
        v4 = v33;
        v3 = v32;
        v2 = v31;
        v1 = v30;
        while (true)
        {
            v55 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h96be86b15d365bbe(&v1);
            if (!v55)
                break;
            v56 = uu_env::parse_signal_opt::h51ec0e44148ee3e7(&v11, *((long long *)&v55[2]), *((long long *)&v55[4]));
            if (v56)
            {
                a0[1] = v56;
                a0[2] = v57;
                a0[0] = 0x8000000000000000;
                core::ptr::drop_in_place$LT$uu_env..Options$GT$::h82df1bb8fb18e06c(&v11);
                return a0;
            }
        }
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hfa98c77e26d8adfd(&v1, a1, "vars", 4);
    clap_builder::parser::error::MatchesError::unwrap::h53fc80eeac36efb0(&v34, "vars", 4, &v1);
    if (*((long long *)&v34))
    {
        *((int128_t *)&v33) = *((int128_t *)&v37);
        *((int128_t *)&v32) = *((int128_t *)&v36);
        *((int128_t *)&v31) = *((int128_t *)&v35);
        *((int128_t *)&v30) = *((int128_t *)&v34);
        v58 = 0;
        while (true)
        {
            v59 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h96be86b15d365bbe(&v30);
            if (!v59)
                break;
            if (!(char)::0x4cbda0::_$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$str$GT$$GT$::eq::hcddac707bfdce135(v59[1], v59[2]))
            {
                uu_env::parse_name_value_opt::h8375689543212933(&v1, &v11, v59[1], v59[2]);
                v60 = (long long)v1;
                if (v60)
                {
                    v61 = (long long)(&v1)[8];
                    a0[1] = v60;
                    a0[2] = v61;
                    a0[0] = 0x8000000000000000;
                    core::ptr::drop_in_place$LT$uu_env..Options$GT$::h82df1bb8fb18e06c(&v11);
                    return a0;
                }
                v58 = (char)(&v1)[8];
                if ((v58 & 1))
                    break;
            }
            else
            {
                v28 = 1;
                if ((v58 & 1))
                    break;
            }
        }
        v4 = v33;
        v3 = v32;
        v2 = v31;
        v1 = v30;
        while (true)
        {
            v62 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h96be86b15d365bbe(&v1);
            if (!v62)
                break;
            v63 = uu_env::parse_program_opt::h5dc288b3b7b61775(&v11, v62[1], v62[2]);
            if (v63)
            {
                a0[1] = v63;
                a0[2] = &g_548840;
                a0[0] = 0x8000000000000000;
                core::ptr::drop_in_place$LT$uu_env..Options$GT$::h82df1bb8fb18e06c(&v11);
                return a0;
            }
        }
    }
    memcpy(a0, &v11, 160);
    return a0;
}

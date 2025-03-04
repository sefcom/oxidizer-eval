long long uu_env::make_options::h1d1233ee0c3e2ece(unsigned long long a0[3], unsigned long long a1)
{
    char v0;  // [sp-0x269]
    int v1;  // [sp-0x268]
    int v2;  // [bp-0x268], Other Possible Types: char
    int v3;  // [sp-0x258]
    int v4;  // [sp-0x248]
    int v5;  // [sp-0x238]
    char v6;  // [bp-0x218], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v7;  // [sp-0x210]
    void* v8;  // [sp-0x208]
    char v9;  // [bp-0x200], Other Possible Types: unsigned long long
    unsigned long long v10;  // [sp-0x1f8]
    void* v11;  // [sp-0x1f0]
    int v12;  // [bp-0x1e8], Other Possible Types: char
    char v13;  // [bp-0x1e0]
    unsigned long v14;  // [sp-0x1d8], Other Possible Types: unsigned long long
    int v15;  // [sp-0x1d0]
    unsigned long long v16;  // [sp-0x1c0]
    void* v17;  // [sp-0x1b8]
    unsigned long long v18;  // [sp-0x1b0]
    int v19;  // [sp-0x1a8]
    unsigned long long v20;  // [sp-0x198]
    void* v21;  // [sp-0x190]
    void* v22;  // [sp-0x188]
    unsigned long long v23;  // [sp-0x180]
    void* v24;  // [sp-0x178]
    unsigned long long v25;  // [sp-0x170]
    unsigned long long v26;  // [sp-0x168]
    unsigned long long v27;  // [sp-0x160]
    struct_0 *v28;  // [sp-0x158]
    char v29;  // [sp-0x150]
    char v30;  // [sp-0x14f]
    int v31;  // [bp-0x138], Other Possible Types: char
    int v32;  // [sp-0x128]
    int v33;  // [sp-0x118]
    int v34;  // [sp-0x108]
    char v35;  // [bp-0xf8]
    char v36;  // [bp-0xe8]
    char v37;  // [bp-0xd8]
    char v38;  // [bp-0xc8]
    int v39;  // [sp-0xb8]
    int v40;  // [sp-0xa8]
    int v41;  // [sp-0x98]
    int v42;  // [sp-0x88]
    int v43;  // [sp-0x78]
    int v44;  // [sp-0x68]
    int v45;  // [sp-0x58]
    int v46;  // [sp-0x48]
    void* v48;  // r13
    unsigned long long v50[3];  // rax
    struct_0 *v54;  // rax
    void* v55;  // rcx
    unsigned int v56[5];  // rax
    unsigned long long v57;  // rax
    unsigned long v58;  // rdx
    char v59;  // bl
    unsigned long long v60[3];  // r13
    unsigned long long v61;  // rax
    unsigned long long v62;  // rcx
    unsigned long long v63[3];  // rax
    unsigned long long v64;  // rax

    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "ignore-environment", 18);
    v48 = 0;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::haf87a3f80c6c6497(&v12, a1, "chdir", 5);
    v50 = clap_builder::parser::error::MatchesError::unwrap::h86a6ee1c01117d6c("chdir", 5, &v12);
    if (v50)
        v48 = v50[1];
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hfa98c77e26d8adfd(&v12, a1, "fileTSTPi128", 4);
    clap_builder::parser::error::MatchesError::unwrap::h53fc80eeac36efb0(&v2, "fileTSTPi128", 4, &v12);
    if (*((long long *)&v2))
    {
        v42 = v5;
        v41 = v4;
        v40 = v3;
        v39 = v1;
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h94f0aac4391d9fcc(&v6, &v39);
    }
    else
    {
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h38052905bffb397a(&v12, 0, 0);
        if (*((long long *)&v12))
            alloc::raw_vec::handle_error::h2372476369f9b8ac(v6, v14); /* do not return */
        v6 = *((long long *)&v13);
        v7 = v14;
        v8 = 0;
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hfa98c77e26d8adfd(&v12, a1, "unset", 5);
    clap_builder::parser::error::MatchesError::unwrap::h53fc80eeac36efb0(&v2, "unset", 5, &v12);
    if (*((long long *)&v2))
    {
        v46 = v5;
        v45 = v4;
        v44 = v3;
        v43 = v1;
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::ha4c9e82de2224bcc(&v9, &v43);
    }
    else
    {
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h38052905bffb397a(&v12, 0, 0);
        if (*((long long *)&v12))
            alloc::raw_vec::handle_error::h2372476369f9b8ac(v9, v14); /* do not return */
        v9 = *((long long *)&v13);
        v10 = v14;
        v11 = 0;
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::haf87a3f80c6c6497(&v12, a1, "argv0", 5);
    v54 = clap_builder::parser::error::MatchesError::unwrap::h86a6ee1c01117d6c("argv0", 5, &v12);
    if (v54)
    {
        v55 = v54->field_8;
        v54 = v54->field_10;
    }
    else
    {
        v55 = 0;
    }
    v14 = v8;
    *((int128_t *)&v12) = *((int128_t *)&v6);
    *((int128_t *)&v15) = *((int128_t *)&v9);
    v16 = v11;
    v29 = v0;
    *((int *)&v30) = ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "nullXCPUBOLDBlue", 4) ? 0 : 10);
    v25 = v48;
    v26 = v50[2];
    v17 = 0;
    v18 = 8;
    *((uint128_t *)&v19) = 0;
    v20 = 8;
    v21 = 0;
    v27 = v55;
    v28 = v54;
    v22 = 0;
    v23 = 8;
    v24 = 0;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hfa98c77e26d8adfd(&v2, a1, "ignore-signal", 13);
    clap_builder::parser::error::MatchesError::unwrap::h53fc80eeac36efb0(&v31, "ignore-signal", 13, &v2);
    if (*((long long *)&v31))
    {
        v5 = v34;
        v4 = v33;
        v3 = v32;
        v2 = v31;
        while (true)
        {
            v56 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h96be86b15d365bbe(&v2);
            if (!v56)
                break;
            v57 = uu_env::parse_signal_opt::h51ec0e44148ee3e7(&v12, *((long long *)&v56[2]), *((long long *)&v56[4]));
            if (v57)
            {
                a0[1] = v57;
                a0[2] = v58;
                a0[0] = 0x8000000000000000;
                core::ptr::drop_in_place$LT$uu_env..Options$GT$::h82df1bb8fb18e06c(&v12);
                return a0;
            }
        }
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hfa98c77e26d8adfd(&v2, a1, "vars", 4);
    clap_builder::parser::error::MatchesError::unwrap::h53fc80eeac36efb0(&v35, "vars", 4, &v2);
    if (*((long long *)&v35))
    {
        *((int128_t *)&v34) = *((int128_t *)&v38);
        *((int128_t *)&v33) = *((int128_t *)&v37);
        *((int128_t *)&v32) = *((int128_t *)&v36);
        *((int128_t *)&v31) = *((int128_t *)&v35);
        v59 = 0;
        while (true)
        {
            v60 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h96be86b15d365bbe(&v31);
            if (!v60)
                break;
            if (!(char)::0x4cbda0::_$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$str$GT$$GT$::eq::hcddac707bfdce135(v60[1], v60[2]))
            {
                uu_env::parse_name_value_opt::h8375689543212933(&v2, &v12, v60[1], v60[2]);
                v61 = (long long)v2;
                if (v61)
                {
                    v62 = (long long)(&v2)[8];
                    a0[1] = v61;
                    a0[2] = v62;
                    a0[0] = 0x8000000000000000;
                    core::ptr::drop_in_place$LT$uu_env..Options$GT$::h82df1bb8fb18e06c(&v12);
                    return a0;
                }
                v59 = (char)(&v2)[8];
                if ((v59 & 1))
                    break;
            }
            else
            {
                v29 = 1;
                if ((v59 & 1))
                    break;
            }
        }
        v5 = v34;
        v4 = v33;
        v3 = v32;
        v1 = v31;
        while (true)
        {
            v63 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h96be86b15d365bbe(&v2);
            if (!v63)
                break;
            v64 = uu_env::parse_program_opt::h5dc288b3b7b61775(&v12, v63[1], v63[2]);
            if (v64)
            {
                a0[1] = v64;
                a0[2] = &g_548840;
                a0[0] = 0x8000000000000000;
                core::ptr::drop_in_place$LT$uu_env..Options$GT$::h82df1bb8fb18e06c(&v12);
                return a0;
            }
        }
    }
    memcpy(a0, &v12, 160);
    return a0;
}

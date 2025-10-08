long long uu_printf::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x460]
    void* v2;  // [bp-0x458]
    unsigned long long v3;  // [bp-0x450]
    void* v4;  // [bp-0x448]
    unsigned long v5;  // [bp-0x440]
    unsigned long v6;  // [sp-0x438]
    char *v7;  // [bp-0x430], Other Possible Types: char, unsigned long
    int v8;  // [bp-0x42f]
    unsigned long long v9;  // [bp-0x428]
    char v10;  // [bp-0x420]
    int v11;  // [bp-0x41f]
    int v12;  // [bp-0x410]
    char *v13;  // [bp-0x400], Other Possible Types: unsigned long long
    unsigned long v14;  // [bp-0x3f8], Other Possible Types: char
    int v15;  // [bp-0x3f7]
    int v16;  // [bp-0x3e8]
    unsigned long v17;  // [bp-0x3d8], Other Possible Types: unsigned long long
    char v18;  // [bp-0x3d0]
    char v19;  // [bp-0x3cf]
    int v20;  // [bp-0x3c0]
    void* v21;  // [bp-0x3b0]
    unsigned long long v22;  // [bp-0x3a0]
    void* v23;  // [bp-0x398]
    int v24;  // [bp-0x390]
    unsigned long v25;  // [bp-0x388], Other Possible Types: unsigned long long
    unsigned long v26;  // [bp-0x380]
    unsigned long v27;  // [bp-0x378]
    char v28;  // [bp-0x370]
    char v29;  // [bp-0x338]
    int v30;  // [bp-0x2f8], Other Possible Types: char
    char v31;  // [bp-0x2f8]
    unsigned long v32;  // [bp-0x2f8]
    unsigned long v33;  // [bp-0x2f8]
    unsigned long v34;  // [bp-0x2f8]
    int v35;  // [bp-0x2f7]
    unsigned long long v36;  // [bp-0x2f0]
    char *v37;  // [bp-0x2e8], Other Possible Types: unsigned long long
    int v38;  // [bp-0x2e7]
    int v39;  // [bp-0x2e0], Other Possible Types: unsigned int, unsigned long long
    int v40;  // [bp-0x2d8], Other Possible Types: void*
    unsigned long long v42[3];  // rax
    unsigned long v43;  // rbx
    unsigned long v44;  // r14
    unsigned long long v45;  // rax
    void* v46;  // rcx
    char v47;  // bl
    unsigned long v48;  // rax
    int v49;  // xmm0
    void* v51;  // rax
    char v52;  // al
    int v53;  // xmm0
    void* v55;  // rbx
    unsigned long long *v56;  // rax
    unsigned long long v57;  // rdx

    uu_printf::uu_app(&(char)v30);
    v28.get_matches_from(&(char)v30, a0, a1);
    (char)v30.try_get_one(&v28);
    v42 = (char)v30.unwrap();
    if (!v42)
    {
        (char)v7.to_vec("missing operandinternal error: entered unreachable code: All args are transformed to Unparsed: warning: ignoring excess arguments, starting with ''\n", 15);
        v37 = *((long long *)&v10);
        *((int128_t *)&v30) = *((int128_t *)&v7);
        v39 = 1;
        v55 = (char)v30.new();
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v28);
        return v55;
    }
    v43 = v42[1];
    v44 = v42[2];
    (char)v30.try_get_many(&v28);
    v29.unwrap(&(char)v30);
    if (*((long long *)&v29))
    {
        (char)v2.collect(&v29);
    }
    else
    {
        v2 = 0;
        v3 = 8;
        v4 = 0;
        v45 = 8;
        v46 = 0;
    }
    v22 = v45;
    v23 = v46;
    v21 = 0;
    *((uint128_t *)&v24) = 0;
    v27 = v43;
    v5 = v43;
    v26 = v44;
    v6 = v44;
    while (true)
    {
        *((char *)&v32) = v30;
        uucore::features::format::parse_spec_and_escape::{{closure}}(&(char)v7, &v5);
        v48 = v7;
        if ((unsigned int)v48 != 7)
        {
            if (v31 == 8)
            {
                v51 = v9.new();
                core::ptr::drop_in_place<alloc::vec::Vec<uucore::features::format::argument::FormatArgument>>(&(char)v2);
                core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v28);
                return v51;
            }
            if (v31 == 9)
                break;
            v47 = 1;
        }
        v49 = (int128_t)v8;
        v40 = v12;
        *((int128_t *)&v38) = (int128_t)v11;
        v35 = v49;
        v31 = v48;
        v17.write(&v31, std::io::stdio::stdout(), &v21);
        if (v17 != 9223372036854775830)
        {
            v16 = v20;
            *((int128_t *)&v15) = *((int128_t *)&v19);
            v13 = v17;
            v14 = v18;
            v51 = v13.new();
            core::ptr::drop_in_place<alloc::vec::Vec<uucore::features::format::argument::FormatArgument>>(&(char)v2);
            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v28);
            return v51;
        }
        v30 = v31;
        if ((v18 & 1))
        {
            core::ptr::drop_in_place<alloc::vec::Vec<uucore::features::format::argument::FormatArgument>>(&(char)v2);
            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v28);
            return 0;
        }
    }
    v21.start_next_batch();
    if ((v47 & 1))
    {
        while (v25 < v23)
        {
            v5 = v27;
            v6 = v26;
            while (true)
            {
                uucore::features::format::parse_spec_and_escape::{{closure}}(&(char)v7, &v5);
                v52 = v7;
                if (v52 == 9)
                    break;
                if (v52 == 8)
                {
                    v51 = v9.new();
                    core::ptr::drop_in_place<alloc::vec::Vec<uucore::features::format::argument::FormatArgument>>(&(char)v2);
                    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v28);
                    return v51;
                }
                v53 = (int128_t)v8;
                v40 = v12;
                *((int128_t *)&v38) = (int128_t)v11;
                v35 = v53;
                v30 = v52;
                v17.write(&v30, std::io::stdio::stdout(), &v21);
                if (v17 != 9223372036854775830)
                {
                    v16 = v20;
                    *((int128_t *)&v15) = *((int128_t *)&v19);
                    v13 = v17;
                    v14 = v18;
                    v51 = v13.new();
                    core::ptr::drop_in_place<alloc::vec::Vec<uucore::features::format::argument::FormatArgument>>(&(char)v2);
                    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v28);
                    return v51;
                }
                if ((v18 & 1))
                {
                    core::ptr::drop_in_place<alloc::vec::Vec<uucore::features::format::argument::FormatArgument>>(&(char)v2);
                    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v28);
                    return 0;
                }
            }
            v21.start_next_batch();
        }
        core::ptr::drop_in_place<alloc::vec::Vec<uucore::features::format::argument::FormatArgument>>(&(char)v2);
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v28);
        return 0;
    }
    else if (v25 >= v23)
    {
        core::ptr::drop_in_place<alloc::vec::Vec<uucore::features::format::argument::FormatArgument>>(&(char)v2);
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v28);
        return 0;
    }
    else if ((long long)v24 < v23)
    {
        v56 = (long long)v24 * 40 + v22;
        if (9223372036854775830 + *(v56) != 32)
        {
            v34 = &g_5149f8;
            v36 = 1;
            v37 = &v0;
            *((uint128_t *)&v39) = 0;
            core::panicking::panic_fmt(&(char)v32, &g_514ad0); /* do not return */
        }
        v17 = v56 + 1;
        v7 = uucore::util_name();
        v9 = v57;
        v13 = &(char)v7;
        v14 = <&T as core::fmt::Display>::fmt;
        v32 = &g_514a08;
        v36 = 2;
        v40 = 0;
        v37 = &v13;
        v39 = 1;
        std::io::stdio::_eprint(&(char)v32);
        v7 = &v17;
        v9 = <&T as core::fmt::Display>::fmt;
        v33 = &g_514a28;
        v36 = 2;
        v40 = 0;
        v37 = &(char)v7;
        v39 = 1;
        std::io::stdio::_eprint(&(char)v32);
        core::ptr::drop_in_place<alloc::vec::Vec<uucore::features::format::argument::FormatArgument>>(&(char)v2);
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v28);
        return 0;
    }
    else
    {
        v34 = &g_5149f8;
        v36 = 1;
        v37 = &v0;
        *((uint128_t *)&v39) = 0;
        core::panicking::panic_fmt(&(char)v32, &g_514ad0); /* do not return */
    }
}

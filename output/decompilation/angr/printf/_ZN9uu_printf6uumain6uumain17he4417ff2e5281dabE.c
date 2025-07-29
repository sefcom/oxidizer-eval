long long uu_printf::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x4b0]
    char *v1;  // [bp-0x4a8], Other Possible Types: int, unsigned long long
    unsigned long v2;  // [bp-0x4a0], Other Possible Types: char
    int v3;  // [bp-0x49f]
    char *v4;  // [bp-0x498], Other Possible Types: int
    int v5;  // [bp-0x490]
    unsigned long long v6;  // [bp-0x488]
    char v7;  // [bp-0x478], Other Possible Types: unsigned long
    int v8;  // [bp-0x477]
    unsigned long long v9;  // [sp-0x470]
    char v10;  // [sp-0x468]
    int v11;  // [bp-0x467]
    unsigned long long v12;  // [bp-0x460]
    char v13;  // [bp-0x458]
    unsigned long long v14;  // [bp-0x450]
    int v15;  // [bp-0x448]
    char v16;  // [bp-0x438]
    void* v17;  // [bp-0x438]
    unsigned long long v18;  // [bp-0x430]
    void* v19;  // [bp-0x428]
    unsigned long v20;  // [sp-0x420]
    unsigned long v21;  // [sp-0x418]
    char *v22;  // [sp-0x410], Other Possible Types: unsigned long long
    char v23;  // [bp-0x408], Other Possible Types: unsigned long
    char v24;  // [bp-0x407]
    int v25;  // [bp-0x3f8]
    void* v26;  // [bp-0x3e8]
    unsigned long long v27;  // [bp-0x3d8]
    unsigned long long v28;  // [bp-0x3d0]
    int v29;  // [bp-0x3c8]
    unsigned long v30;  // [bp-0x3c0], Other Possible Types: unsigned long long
    unsigned long v31;  // [bp-0x3b8]
    unsigned long v32;  // [bp-0x3b0]
    char v33;  // [bp-0x3a8]
    char *v34;  // [bp-0x398]
    char v35;  // [bp-0x390]
    char *v36;  // [bp-0x380]
    char v37;  // [bp-0x370]
    char v38;  // [bp-0x338]
    char v39;  // [bp-0x328]
    char v40;  // [bp-0x318]
    int v41;  // [bp-0x308]
    int v42;  // [bp-0x2f8], Other Possible Types: char
    unsigned long v43;  // [bp-0x2f8]
    unsigned long v44;  // [bp-0x2f8]
    unsigned long v45;  // [bp-0x2f8]
    int v46;  // [sp-0x2f7]
    unsigned long long v47;  // [bp-0x2f0]
    char *v48;  // [bp-0x2e8], Other Possible Types: unsigned long long
    int v49;  // [sp-0x2e7]
    int v50;  // [bp-0x2e0], Other Possible Types: unsigned int, unsigned long long
    void* v51;  // [bp-0x2d8], Other Possible Types: char
    unsigned long long v53[3];  // rax
    unsigned long v54;  // r14
    unsigned long v55;  // r15
    unsigned long long v56;  // rax
    void* v57;  // rcx
    char v58;  // r13b
    char v59;  // al
    int v60;  // xmm0
    char v62;  // al
    char v63;  // al
    int v64;  // xmm0
    char v66;  // al
    int v67;  // xmm0
    unsigned long long v68;  // rax
    int v69;  // xmm0
    unsigned long long v70[4];  // r14
    unsigned long long v71;  // rdx
    int v72;  // xmm0
    void* v73;  // rbx
    int v74;  // xmm0
    char v75;  // [bp-0x468]

    uu_printf::uu_app(&(char)v42);
    v37.get_matches_from(&(char)v42, a0, a1);
    (char)v42.try_get_one(&v37, "FORMATprintf-error-missing-operand/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 6);
    v53 = "FORMATprintf-error-missing-operand/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs".unwrap(6, &(char)v42);
    if (v53)
    {
        v54 = v53[1];
        v55 = v53[2];
        (char)v42.try_get_many(&v37, "ARGUMENT", 8);
        (char)v7.unwrap("ARGUMENT", 8, &(char)v42);
        if (*((long long *)&v7))
        {
            v41 = v15;
            memcpy(&v40, &v13, 16);
            memcpy(&v39, &v10, 16);
            memcpy(&v38, &v7, 16);
            v16.from_iter(&v38, &g_5b6e98);
        }
        else
        {
            v17 = 0;
            v18 = 8;
            v19 = 0;
            v56 = 8;
            v57 = 0;
        }
        v27 = v56;
        v28 = v57;
        v26 = 0;
        *((uint128_t *)&v29) = 0;
        v32 = v54;
        v20 = v54;
        v31 = v55;
        v21 = v55;
        while (true)
        {
            uucore::features::format::parse_spec_and_escape::{{closure}}(&(char)v7, &v20);
            v59 = v7;
            if (v59 == 9)
                break;
            if (v59 - 7 >= 2)
            {
                v58 = 1;
            }
            else if (v59 == 8)
            {
                v6 = v14;
                v74 = *((int128_t *)&v9);
                *((int128_t *)&v4) = *((int128_t *)&v12);
                v1 = v74;
                v68 = (char)v1.new();
                goto LABEL_4b6ddc;
            }
            v60 = (int128_t)v8;
            memcpy(&v51, &v13, 16);
            *((int128_t *)&v49) = (int128_t)v11;
            v46 = v60;
            v42 = v59;
            v22.write(&v42, std::io::stdio::stdout(), &v26);
            v62 = v23;
            if (v22 != 9223372036854775831)
            {
                v72 = *((int128_t *)&v24);
                v5 = v25;
                v3 = v72;
                v1 = v22;
                v2 = v62;
                v68 = v1.new();
                goto LABEL_4b6ddc;
            }
            else if (!(!(v2 & 1)))
            {
                goto LABEL_4b6d54;
            }
        }
        v26.start_next_batch();
        if (!(v58 & 1))
        {
            if (v30 < v28)
            {
                if ((long long)v29 < v28)
                {
                    v70 = (long long)v29 * 40 + v27;
                    if (v70[0] == 9223372036854775818)
                    {
                        v7 = uucore::util_name();
                        v9 = v71;
                        v1 = &(char)v7;
                        v2 = <&T as core::fmt::Display>::fmt;
                        v43 = &g_5b6df0;
                        v47 = 2;
                        v51 = 0;
                        v48 = &v1;
                        v50 = 1;
                        std::io::stdio::_eprint(&(char)v43);
                        (char)v43.to_vec("argFORMATprintf-error-missing-operand/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 3);
                        v4 = v48;
                        memcpy(&v1, &(char)v43, 16);
                        (char)v7.to_string_lossy(v70[2], v70[3]);
                        (char)v43.to_vec(v9, *((long long *)&v75));
                        v36 = v48;
                        memcpy(&v35, &v43, 16);
                        memcpy(&v33, &v1, 16);
                        v34 = v4;
                        (char)v43.from_iter(&v33);
                        uucore::mods::locale::get_message_with_args(&v1, "printf-warning-ignoring-excess-arguments/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 40, &(char)v43);
                        v22 = &v1;
                        v23 = <alloc::string::String as core::fmt::Display>::fmt;
                        v44 = &g_5b6d88;
                        v47 = 2;
                        v51 = 0;
                        v48 = &v22;
                        v50 = 1;
                        std::io::stdio::_eprint(&(char)v43);
                        ::0x4b5a30::core::ptr::drop_in_place<alloc::string::String>(&v1);
                        ::0x4b5b20::core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&(char)v7);
                        goto LABEL_4b6d54;
                    }
                }
                v45 = &g_5b6de0;
                v47 = 1;
                v48 = &v0;
                *((uint128_t *)&v50) = 0;
                core::panicking::panic_fmt(&(char)v43, &g_5b6eb0); /* do not return */
            }
LABEL_4b6d54:
            v73 = 0;
            goto LABEL_4b6ddf;
        }
        while (true)
        {
            if (v30 >= v28)
            {
                ::0x4b5d40::core::ptr::drop_in_place<alloc::vec::Vec<uucore::features::format::argument::FormatArgument>>(&v16);
                core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v37);
                return 0;
            }
            v20 = v32;
            v21 = v31;
            while (true)
            {
                uucore::features::format::parse_spec_and_escape::{{closure}}(&(char)v7, &v20);
                v63 = v7;
                if (v63 == 9)
                    break;
                if (v63 == 8)
                {
                    v6 = v14;
                    v67 = *((int128_t *)&v9);
                    *((int128_t *)&v4) = *((int128_t *)&v12);
                    v1 = v67;
                    v68 = (char)v1.new();
                    goto LABEL_4b6ddc;
                }
                v64 = (int128_t)v8;
                memcpy(&v51, &v13, 16);
                *((int128_t *)&v49) = (int128_t)v11;
                v46 = v64;
                v42 = v63;
                v22.write(&v42, std::io::stdio::stdout(), &v26);
                v66 = v23;
                if (v22 != 9223372036854775831)
                {
                    v69 = *((int128_t *)&v24);
                    v5 = v25;
                    v3 = v69;
                    v1 = v22;
                    v2 = v66;
                    v68 = v1.new();
LABEL_4b6ddc:
                    v73 = v68;
                    goto LABEL_4b6ddf;
                }
                else if (!(!(v2 & 1)))
                {
                    goto LABEL_4b6d54;
                }
            }
            v26.start_next_batch();
        }
LABEL_4b6ddf:
        ::0x4b5d40::core::ptr::drop_in_place<alloc::vec::Vec<uucore::features::format::argument::FormatArgument>>(&v16);
    }
    else
    {
        uucore::mods::locale::get_message(&(char)v7, "printf-error-missing-operand/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 28);
        v50 = 1;
        *((int128_t *)&v42) = *((int128_t *)&v7);
        v48 = *((long long *)&v10);
        v73 = (char)v42.new();
    }
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v37);
    return v73;
}

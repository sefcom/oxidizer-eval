long long uu_basename::uumain::uumain(unsigned long long a0)
{
    char v0;  // [bp-0x459]
    char v1;  // [bp-0x458]
    unsigned long long v2;  // [bp-0x458]
    void* v3;  // [bp-0x458]
    int v4;  // [bp-0x450], Other Possible Types: unsigned long long
    void* v5;  // [bp-0x448]
    char v6;  // [bp-0x440]
    struct_1 *v7;  // [bp-0x438], Other Possible Types: struct_2 *
    unsigned long long v8;  // [bp-0x430]
    int v9;  // [bp-0x428], Other Possible Types: void*, char *, char
    unsigned long long v10;  // [bp-0x428]
    int v11;  // [bp-0x420], Other Possible Types: unsigned long long
    unsigned long long v12;  // [bp-0x420]
    char *v13;  // [bp-0x418], Other Possible Types: char
    char v14;  // [bp-0x410], Other Possible Types: unsigned long long
    uint128_t v15;  // [bp-0x408]
    unsigned long long v16;  // [bp-0x3f8]
    int v17;  // [bp-0x3e8], Other Possible Types: char
    unsigned long long v18;  // [bp-0x3d8]
    unsigned long long v19;  // [bp-0x3c8]
    unsigned long long v20;  // [bp-0x3c0]
    char v21;  // [bp-0x3b8]
    int v22;  // [bp-0x3a8]
    unsigned long long v23;  // [bp-0x398]
    char v24;  // [bp-0x390]
    unsigned long long v25;  // [bp-0x380]
    int v26;  // [bp-0x378], Other Possible Types: char
    unsigned long long v27;  // [bp-0x368]
    int v28;  // [bp-0x360], Other Possible Types: char
    unsigned long long v29;  // [bp-0x350]
    int v30;  // [bp-0x348]
    unsigned long long v31;  // [bp-0x338]
    char v32;  // [bp-0x330]
    unsigned long long v33;  // [bp-0x320]
    int v34;  // [bp-0x310]
    char v35;  // [bp-0x2f8], Other Possible Types: unsigned long long
    int v36;  // [bp-0x2f8]
    int v37;  // [bp-0x2f8]
    unsigned long long v38;  // [bp-0x2f0]
    int v39;  // [bp-0x2e8], Other Possible Types: char *, unsigned long long
    unsigned long long v40;  // [bp-0x2e8]
    int v41;  // [bp-0x2e0], Other Possible Types: unsigned long long, unsigned int
    int v42;  // [bp-0x2d8], Other Possible Types: void*
    unsigned long long v43;  // [bp-0x2c8]
    unsigned long long v44;  // [bp-0x2c0]
    unsigned long long v46;  // rsi
    int v47;  // xmm1
    void* v50;  // rdx
    unsigned long long v51;  // rax
    unsigned long long v52;  // rax
    unsigned long long v53[3];  // rax

    v24.collect_lossy(a0, v46);
    uu_basename::uu_app(&v35);
    v18 = v25;
    memcpy(&v17, &v24, 16);
    v9.try_get_matches_from(&v35, &v17);
    if ((char)(((0 ^ v10) & (0 ^ -(v10))) >> 63))
        return v20.from();
    v23 = v16;
    v47 = v15;
    v22 = v47;
    memcpy(&v21, &v13, 16);
    v19 = v10;
    v20 = v11;
    *((int *)&v0) = ((char)v19.get_flag(_ZN11uu_basename7options4ZERO17h2dff471481b08953E, g_56d580) ? 0 : 10);
    v35.try_get_many(&v19, _ZN11uu_basename7options4NAME17h4dad44fb3837d655E, g_56d560);
    v9.unwrap(_ZN11uu_basename7options4NAME17h4dad44fb3837d655E, g_56d560, &v35);
    if (v10)
    {
        v47 = *((int128_t *)&v13);
        v12 = v11;
    }
    else
    {
        v15 = 0;
        v10 = core::ops::function::FnOnce::call_once;
        v50 = 0;
        v12 = "/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/parser/matches/matched_arg.rs/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/util/flat_map.rs/root/.rustup/toolchains/nightly-2025-01-01-x";
    }
    v35 = v10;
    v38 = v12;
    v39 = v47;
    *((uint128_t *)&v42) = v15;
    v43 = v16;
    v44 = v50;
    v6.from_iter(&v35, &g_56d2b0);
    if (!v8)
    {
        uucore::mods::locale::get_message(&v26, "basename-error-missing-operandbasename-error-extra-operanda Display implementation returned an error unexpectedly/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rs", 30);
        v41 = 1;
        v37 = v26;
        v39 = v27;
        v51 = v35.new();
        ::0x4981f0::core::ptr::drop_in_place<alloc::vec::Vec<&alloc::string::String>>(&v6);
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v19);
        return v51;
    }
    v35.try_get_one(&v19, _ZN11uu_basename7options6SUFFIX17h833b6d07ba641917E, g_56d570);
    if (_ZN11uu_basename7options6SUFFIX17h833b6d07ba641917E.unwrap(g_56d570, &v35) || (char)v19.get_flag(_ZN11uu_basename7options8MULTIPLE17h69ac7eaade8841c4E, g_56d550))
    {
        v35.try_get_one(&v19, _ZN11uu_basename7options6SUFFIX17h833b6d07ba641917E, g_56d570);
        v52 = _ZN11uu_basename7options6SUFFIX17h833b6d07ba641917E.unwrap(g_56d570, &v35);
        if (!v52)
            goto LABEL_497b9d;
        v35.clone(v52);
        *((int128_t *)&v9) = *((int128_t *)&v38);
        if (v35 == 0x8000000000000000)
            goto LABEL_497b9d;
        *((int128_t *)&v4) = (int128_t)v9;
        v2 = v35;
    }
    else if (v8 == 1)
    {
LABEL_497b9d:
        v3 = 0;
        v4 = 1;
        v5 = 0;
    }
    else
    {
        if (v8 != 2)
        {
            if (v8)
            {
                v35.to_vec();
                v18 = v39;
                memcpy(&v17, &v35, 16);
                if (v8 < 3)
                    core::panicking::panic_bounds_check(2, v8, &g_56d368); /* do not return */
                v9 = 0;
                *((int128_t *)&v11) = *((int128_t *)&(&v7->field_10->padding_0)[1]);
                v14 = 1;
                v35.spec_to_string(&v9);
                v31 = v18;
                v30 = v17;
                memcpy(&v32, &v35, 16);
                v33 = v39;
                v35.from_iter(&v30);
                uucore::mods::locale::get_message_with_args(&v28, "basename-error-extra-operanda Display implementation returned an error unexpectedly/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rs", 28, &v35);
                v41 = 1;
                v36 = v28;
                v39 = v29;
                v51 = v35.new();
                ::0x4981f0::core::ptr::drop_in_place<alloc::vec::Vec<&alloc::string::String>>(&v6);
                core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v19);
                return v51;
            }
            else
            {
                v35 = &g_56d2a0;
                v38 = 1;
                v40 = 8;
                *((uint128_t *)&v41) = 0;
                core::panicking::panic_fmt(&v35, &g_56d350); /* do not return */
            }
        }
        v8 = 1;
        v1.clone(v7->field_8);
    }
    v17.into_iter(&v6);
    if (v17.next())
    {
        do
        {
            uu_basename::basename(&v34, v53[1], v53[2], v4, v5);
            v9 = &v34;
            v11 = <alloc::string::String as core::fmt::Display>::fmt;
            v13 = &v0;
            v14 = <uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
            v35 = &g_42db10;
            v38 = 2;
            v42 = 0;
            v39 = &v9;
            v41 = 2;
            std::io::stdio::_print(&v35);
            ::0x498140::core::ptr::drop_in_place<alloc::string::String>(&v34);
            v53 = v17.next();
        } while (v53);
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&alloc::string::String>>(&v17);
    ::0x498140::core::ptr::drop_in_place<alloc::string::String>(&v1);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v19);
    return 0;
}

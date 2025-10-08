long long uu_basename::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x411]
    void* v1;  // [bp-0x410], Other Possible Types: char
    int v2;  // [bp-0x408], Other Possible Types: unsigned long long
    void* v3;  // [bp-0x400]
    int v4;  // [bp-0x3f8], Other Possible Types: void*, char *, char, unsigned long long
    unsigned long v5;  // [bp-0x3f0], Other Possible Types: unsigned long long
    char *v6;  // [bp-0x3e8], Other Possible Types: char, unsigned long, unsigned long long
    char v7;  // [bp-0x3e0], Other Possible Types: unsigned long long
    int v8;  // [bp-0x3d8]
    char v9;  // [bp-0x3c8]
    char v10;  // [bp-0x3b0], Other Possible Types: unsigned long long
    struct_2 *v11;  // [bp-0x3a8], Other Possible Types: struct_0 *
    unsigned long v12;  // [bp-0x3a0], Other Possible Types: unsigned long long
    unsigned long long v13;  // [bp-0x398]
    unsigned long long v14;  // [bp-0x390]
    char v15;  // [bp-0x388]
    int v16;  // [bp-0x378]
    unsigned long long v17;  // [bp-0x368]
    char *v18;  // [bp-0x360]
    unsigned long long v19;  // [bp-0x358]
    unsigned long long v20;  // [bp-0x340]
    int v21;  // [bp-0x338]
    char v22;  // [bp-0x328]
    int v23;  // [bp-0x310], Other Possible Types: char
    unsigned long long v24;  // [bp-0x300]
    int v25;  // [bp-0x2f8], Other Possible Types: char, unsigned long long
    int v26;  // [bp-0x2f8], Other Possible Types: void*
    unsigned long long v27;  // [bp-0x2f0]
    int v28;  // [bp-0x2e8], Other Possible Types: char *, unsigned long long
    void* v29;  // [bp-0x2e0], Other Possible Types: unsigned int, unsigned long long
    int v30;  // [bp-0x2d8], Other Possible Types: void*
    void* v31;  // [bp-0x2d0]
    int v32;  // [bp-0x2c8]
    void* v33;  // [bp-0x2c0]
    int v36;  // xmm0
    int v37;  // xmm1
    struct_0 *v38;  // rax
    unsigned long long v39;  // r14
    struct_0 *v40;  // rsi
    unsigned long long v41;  // rax
    unsigned long long v42[3];  // rax

    v22.collect_lossy(a0, a1);
    uu_basename::uu_app(&v25);
    v4.try_get_matches_from(&v25, &v22);
    if ((char)(((0 ^ v4) & (0 ^ -(v4))) >> 63))
        return v14.from();
    v17 = *((long long *)&v9);
    v16 = v8;
    memcpy(&v15, &v6, 16);
    v13 = v4;
    v14 = v5;
    *((int *)&v0) = ((char)v13.get_flag(_ZN11uu_basename7options4ZERO17ha91d35f0c64c90c4E, g_4df528) ? 0 : 10);
    v25.try_get_many(&v13, _ZN11uu_basename7options4NAME17h428f91de9a3840f2E, g_4df508);
    v4.unwrap(_ZN11uu_basename7options4NAME17h428f91de9a3840f2E, g_4df508, &v25);
    if (v4)
    {
        v36 = *((int128_t *)&v4);
        v37 = *((int128_t *)&v6);
        *((int128_t *)&v32) = *((int128_t *)&v9);
        v30 = v8;
        v28 = v37;
        v25 = v36;
    }
    else
    {
        v26 = core::ops::function::FnOnce::call_once;
        v27 = "/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.38/src/parser/matches/matched_arg.rsinternal error: entered unreachable code: `to_long` always has the flag specified/home/34r7hm4n/.cargo/registry/src/index.crates.io-194";
        v28 = "/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.38/src/parser/matches/matched_arg.rsinternal error: entered unreachable code: `to_long` always has the flag specified/home/34r7hm4n/.cargo/registry/src/index.crates.io-194";
        v29 = 0;
        v31 = 0;
        v33 = 0;
    }
    v10.collect(&v25);
    if (!v12)
    {
        v4.to_vec("missing operandextra operand ", 15);
        v28 = v6;
        *((int128_t *)&v25) = *((int128_t *)&v4);
        v29 = 1;
        v39 = v25.new();
        core::ptr::drop_in_place<alloc::vec::Vec<usize>>(v10, v11);
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v13);
        return v39;
    }
    v25.try_get_one(&v13, _ZN11uu_basename7options6SUFFIX17h4eccf759854eb5b5E, g_4df518);
    if (_ZN11uu_basename7options6SUFFIX17h4eccf759854eb5b5E.unwrap(g_4df518, &v25) || (char)v13.get_flag(_ZN11uu_basename7options8MULTIPLE17hd62add6aaf7d3d12E, g_4df4f8))
    {
        v25.try_get_one(&v13, _ZN11uu_basename7options6SUFFIX17h4eccf759854eb5b5E, g_4df518);
        v41 = _ZN11uu_basename7options6SUFFIX17h4eccf759854eb5b5E.unwrap(g_4df518, &v25);
        if (!v41)
            goto LABEL_450a8d;
        v25.clone(v41);
        *((int128_t *)&v4) = *((int128_t *)&v27);
        if (v26 == 0x8000000000000000)
            goto LABEL_450a8d;
        *((int128_t *)&v2) = (int128_t)v4;
        v1 = v26;
    }
    else if (v12 != 2)
    {
        if (v12 != 1)
        {
            v38 = v11;
            v4 = 0;
            v5 = v38->field_10->field_8;
            v6 = v38->field_10->field_10;
            v7 = 1;
            v18 = &v4;
            v19 = <os_display::Quoted as core::fmt::Display>::fmt;
            *((unsigned long long **)&v26) = &g_4de9a8;
            v27 = 1;
            v30 = 0;
            v28 = &v18;
            v29 = 1;
            v23.map_or_else(&(unsigned long long)v26);
            v29 = 1;
            v26 = v23;
            v28 = v24;
            v39 = (unsigned long long)v26.new();
            core::ptr::drop_in_place<alloc::vec::Vec<usize>>(v10, v40);
            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v13);
            return v39;
        }
LABEL_450a8d:
        v1 = 0;
        v2 = 1;
        v3 = 0;
    }
    else
    {
        v12 = 1;
        v1.clone(v11->field_8);
    }
    (char)v18.into_iter(&v10);
    if ((char)v18.next())
    {
        do
        {
            uu_basename::basename(&v20, v42[1], v42[2], v2, v3);
            v4 = &v20;
            v5 = <alloc::string::String as core::fmt::Display>::fmt;
            v6 = &v0;
            v7 = <uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
            v25 = &g_417088;
            v27 = 2;
            v30 = 0;
            v28 = &v4;
            v29 = 2;
            std::io::stdio::_print(&v25);
            core::ptr::drop_in_place<alloc::string::String>(v20, (long long)v21);
            v42 = (char)v18.next();
        } while (v42);
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&alloc::string::String>>(&(char)v18);
    core::ptr::drop_in_place<alloc::string::String>(v1, v2);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v13);
    return 0;
}

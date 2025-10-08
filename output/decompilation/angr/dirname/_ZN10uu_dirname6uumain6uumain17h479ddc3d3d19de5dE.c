long long uu_dirname::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x641]
    unsigned long long v1;  // [bp-0x640]
    char v2;  // [bp-0x638], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x630]
    int v4;  // [bp-0x628]
    int v5;  // [bp-0x618]
    unsigned long long v6;  // [bp-0x608]
    unsigned long long v7;  // [bp-0x600]
    unsigned long long v8;  // [bp-0x5f8]
    int v9;  // [bp-0x5f0]
    int v10;  // [sp-0x5e0]
    unsigned long long v11;  // [bp-0x5d0]
    char v12;  // [bp-0x5c8], Other Possible Types: unsigned long long
    unsigned long long v13;  // [bp-0x5c0]
    int v14;  // [bp-0x5b8], Other Possible Types: char *, unsigned long long
    unsigned int v15;  // [bp-0x5b0], Other Possible Types: unsigned long long
    int v16;  // [bp-0x5b0]
    int v17;  // [bp-0x5b0]
    int v18;  // [bp-0x5b0]
    int v19;  // [bp-0x5a8], Other Possible Types: void*
    unsigned long long v20;  // [bp-0x598]
    unsigned long long v21;  // [bp-0x590]
    char *v22;  // [bp-0x2f8], Other Possible Types: unsigned long long
    char v23;  // [bp-0x2f8]
    unsigned long long v24;  // [bp-0x2f0]
    int v25;  // [bp-0x2e8]
    int v26;  // [bp-0x2e8]
    unsigned long long v27;  // [bp-0x2c8]
    char v28;  // [bp-0x2c0]
    unsigned long long v31;  // rdx
    uint128_t v32;  // xmm0
    unsigned long long v33;  // rcx
    void* v34;  // r14
    unsigned long long v35;  // r12
    unsigned long long v36;  // rdx
    unsigned long long v38;  // rax

    uu_dirname::uu_app(&v12);
    v23.after_help(&v12);
    v2.try_get_matches_from(&v23, a0, a1);
    if ((char)(((0 ^ v2) & (0 ^ -(v2))) >> 63))
        return v8.from();
    v11 = v6;
    v10 = v5;
    v9 = v4;
    v7 = v2;
    v8 = v3;
    *((int *)&v0) = ((char)v7.get_flag("zeroAnsi -- ", 4) ? 0 : 10);
    v12.try_get_many(&v7);
    v23.unwrap(&v12);
    if (v22)
    {
        v31 = *((long long *)&v28);
        v26 = v25;
    }
    else
    {
        v32 = 0;
        v33 = "/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.38/src/parser/matches/matched_arg.rsinternal error: entered unreachable code: `to_long` always has the flag specified/home/34r7hm4n/.cargo/registry/src/index.crates.io-194";
        v22 = core::ops::function::FnOnce::call_once;
        v31 = 0;
        v25 = v10;
    }
    v12 = v22;
    v13 = v33;
    v14 = v25;
    *((uint128_t *)&v19) = v32;
    v20 = v27;
    v21 = v31;
    v2.collect(&v12);
    if (!(long long)v4)
    {
        v23.to_vec("missing operand.", 15);
        v14 = (long long)v26;
        memcpy(&v12, &v23, 16);
        v15 = 1;
        v38 = v12.new();
        core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v2);
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v7);
        return v38;
    }
    v1 = (long long)v4 * 24;
    v34 = 0;
    do
    {
        v35 = *((long long *)(8 + v3 + (char *)v34)).parent(*((long long *)(16 + v3 + (char *)v34)));
        if (v35)
        {
            v12.components(v35, v36);
            v23.next(&v12);
            if (v23 == 10)
            {
                v12 = &g_4d81e8;
                v13 = 1;
                v14 = 8;
                *((uint128_t *)&v16) = 0;
                std::io::stdio::_print(&v12);
            }
            else
            {
                uucore::mods::display::print_verbatim(v35, v36).unwrap();
            }
        }
        else if ((char)*((long long *)(8 + v3 + (char *)v34)).is_absolute(*((long long *)(16 + v3 + (char *)v34))) || (char)*((long long *)(8 + v3 + (char *)v34)).equal(*((long long *)(16 + v3 + (char *)v34)), "/Output each NAME with its last non-slash component and trailing slashes\nremoved; if NAME contains no /'s, output '.' (meaning the current directory).) = Zero", 1))
        {
            v12 = &g_4d81f8;
            v13 = 1;
            v14 = 8;
            *((uint128_t *)&v18) = 0;
            std::io::stdio::_print(&v12);
        }
        else
        {
            v12 = &g_4d81e8;
            v13 = 1;
            v14 = 8;
            *((uint128_t *)&v17) = 0;
            std::io::stdio::_print(&v12);
        }
        v22 = &v0;
        v24 = <uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
        v12 = &g_4169e0;
        v13 = 1;
        v19 = 0;
        v14 = &v22;
        v15 = 1;
        std::io::stdio::_print(&v12);
        v34 += 24;
    } while (v1 != v34);
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v2);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v7);
    return 0;
}

long long uu_factor::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x3f0]
    char v1;  // [bp-0x3e8]
    unsigned long long v2;  // [bp-0x3e0]
    unsigned long long v3;  // [bp-0x3d8]
    char *v4;  // [bp-0x3d0], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0x3c8]
    char *v6;  // [bp-0x3c0], Other Possible Types: unsigned long long
    unsigned long long v7;  // [bp-0x3b8]
    char *v8;  // [bp-0x3b0], Other Possible Types: char, unsigned long long
    unsigned long long v9;  // [bp-0x3a8]
    int v10;  // [bp-0x3a0]
    int v11;  // [bp-0x390]
    int v12;  // [bp-0x380], Other Possible Types: char
    unsigned long long v13;  // [bp-0x370]
    unsigned long long v14;  // [bp-0x368]
    unsigned long long v15;  // [bp-0x360]
    unsigned long long v16;  // [bp-0x358]
    unsigned long long v17;  // [bp-0x350]
    int v18;  // [bp-0x348]
    int v19;  // [bp-0x338]
    unsigned long long v20;  // [bp-0x328]
    unsigned long long v21[1][3];  // [bp-0x320]
    int v22;  // [bp-0x2f8], Other Possible Types: void*, unsigned long long
    unsigned long long v23;  // [bp-0x2f0]
    int v24;  // [bp-0x2e8], Other Possible Types: char *, unsigned long long
    unsigned long long v25;  // [bp-0x2e0]
    int v26;  // [bp-0x2d8], Other Possible Types: void*
    int v27;  // [bp-0x2c8]
    unsigned short v28;  // [bp-0x2c0]
    char v30;  // bpl
    int v32;  // xmm0
    unsigned long long v33[3];  // rax
    void* v34;  // rax
    char v35;  // dl
    char *v36;  // rdi
    char *v37;  // rsi
    unsigned long long v38;  // rax
    unsigned long long v40;  // rax

    uu_factor::uu_app(&(char)v22);
    v8.try_get_matches_from(&(char)v22, a0, a1);
    if ((char)(((0 ^ v8) & (0 ^ -(v8))) >> 63))
        return v17.from();
    v20 = *((long long *)&v12);
    v19 = v11;
    v18 = v10;
    v16 = v8;
    v17 = v9;
    v30 = v16.get_flag(_ZN9uu_factor7options9EXPONENTS17h64e0a670b6588ba1E, g_544b50);
    v14 = std::io::stdio::stdout();
    v21.with_capacity(v14.lock());
    (char)v22.try_get_many(&v16, _ZN9uu_factor7options6NUMBER17h74c352ca63a4ac2aE, g_544b60);
    v8.unwrap(_ZN9uu_factor7options6NUMBER17h74c352ca63a4ac2aE, g_544b60, &(char)v22);
    if (v8)
    {
        v32 = *((int128_t *)&v8);
        v27 = v12;
        v26 = v11;
        v24 = v10;
        v22 = v32;
        do
        {
            v33 = (char)v22.next();
            if (!v33)
                goto LABEL_4936a3;
            v34 = uu_factor::print_factors_str(v33[1], v33[2], &v21, v30);
        } while (!v34);
    }
    else
    {
        v15 = std::io::stdio::stdin();
        v0 = v15.lock();
        v1 = v35 & 1;
        v36 = &v8;
        v37 = &v0;
        v13 = 9223372036854775809;
        while (true)
        {
LABEL_49359f:
            v36.next(v37);
            if (v8 == 9223372036854775809)
            {
                core::ptr::drop_in_place<std::io::Lines<std::io::stdio::StdinLock>>(v0, *((int *)&v1));
LABEL_4936a3:
                v40 = v21.flush();
                if (v40)
                {
                    v6 = v40;
                    v8 = uucore::util_name();
                    v9 = v35;
                    v4 = &v8;
                    v5 = <&T as core::fmt::Display>::fmt;
                    v22 = &g_544290;
                    v23 = 2;
                    v26 = 0;
                    v24 = &v4;
                    v25 = 1;
                    std::io::stdio::_eprint(&v22);
                    v8 = &v6;
                    v9 = <std::io::error::Error as core::fmt::Display>::fmt;
                    v22 = &g_5442b0;
                    v23 = 2;
                    v26 = 0;
                    v24 = &v8;
                    v25 = 1;
                    std::io::stdio::_eprint(&v22);
                    core::ptr::drop_in_place<std::io::error::Error>(v6);
                }
                else
                {
                    core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(0);
                }
                core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(&v21);
                core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v16);
                return 0;
            }
            if (v8 == 0x8000000000000000)
                break;
            v2 = v9;
            v24.into_searcher(v9, (long long)v10);
            v22 = 0;
            v23 = (long long)v10;
            v28 = 1;
            do
            {
                v38 = v22.try_fold();
                if (!v38)
                {
                    core::ptr::drop_in_place<alloc::string::String>(v8, v2);
                    v36 = &v8;
                    v37 = &v0;
                    goto LABEL_49359f;
                }
                v34 = uu_factor::print_factors_str(v38, v35, &v21, v30);
            } while (!v34);
            core::ptr::drop_in_place<alloc::string::String>(v8, v2);
            goto LABEL_493663;
        }
        v3 = v9;
        uucore::mods::error::set_exit_code(1);
        v4 = uucore::util_name();
        v5 = v35;
        v6 = &v4;
        v7 = <&T as core::fmt::Display>::fmt;
        v22 = &g_544290;
        v23 = 2;
        v26 = 0;
        v24 = &v6;
        v25 = 1;
        std::io::stdio::_eprint(&v22);
        v4 = &v3;
        v5 = <std::io::error::Error as core::fmt::Display>::fmt;
        v22 = &g_544308;
        v23 = 2;
        v26 = 0;
        v24 = &v4;
        v25 = 1;
        std::io::stdio::_eprint(&v22);
        core::ptr::drop_in_place<std::io::error::Error>(v3);
        v34 = 0;
LABEL_493663:
        core::ptr::drop_in_place<std::io::Lines<std::io::stdio::StdinLock>>(v0, *((int *)&v1));
    }
    core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(&v21);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v16);
    return v34;
}

long long uu_factor::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x428]
    char v1;  // [bp-0x420]
    char *v2;  // [bp-0x418], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x410]
    char *v4;  // [bp-0x408], Other Possible Types: char, unsigned long long
    unsigned long v5;  // [bp-0x400], Other Possible Types: unsigned long long
    char *v6;  // [bp-0x3f8], Other Possible Types: char, unsigned long long
    int v7;  // [bp-0x3e8]
    char v8;  // [bp-0x3d8]
    unsigned long long v9;  // [bp-0x3c0]
    char *v10;  // [bp-0x3b8], Other Possible Types: struct struct_0[8]
    unsigned long long v11;  // [bp-0x3b8]
    unsigned long long v12;  // [bp-0x3b0]
    unsigned long long v13;  // [bp-0x3a8]
    unsigned long long v14;  // [bp-0x3a0]
    unsigned long long v15;  // [bp-0x398]
    unsigned long long v16;  // [bp-0x390]
    unsigned long long v17;  // [bp-0x388]
    unsigned long long v18;  // [bp-0x380]
    char v19;  // [bp-0x378]
    int v20;  // [bp-0x368]
    unsigned long long v21;  // [bp-0x358]
    unsigned long long v22[1][3];  // [bp-0x350]
    char v23;  // [bp-0x328]
    char *v24;  // [bp-0x318]
    char v25;  // [bp-0x310]
    char *v26;  // [bp-0x300]
    int v27;  // [bp-0x2f8], Other Possible Types: void*, unsigned long long
    unsigned long long v28;  // [bp-0x2f0]
    int v29;  // [bp-0x2e8], Other Possible Types: char *, unsigned long long
    unsigned long long v30;  // [bp-0x2e0]
    int v31;  // [bp-0x2d8], Other Possible Types: void*
    int v32;  // [bp-0x2c8]
    unsigned short v33;  // [bp-0x2c0]
    char v34;  // [bp-0x2b8]
    char v36;  // bpl
    int v38;  // xmm0
    int v39;  // xmm1
    unsigned long long v40[3];  // rax
    void* v41;  // rax
    char v42;  // dl
    char *v43;  // rdi
    char *v44;  // rsi
    unsigned long long v45;  // rax
    unsigned long long v46;  // rdx
    unsigned long long v47;  // rax

    uu_factor::uu_app(&(char)v27);
    v4.try_get_matches_from(&(char)v27, a0, a1);
    if ((char)(((0 ^ v4) & (0 ^ -(v4))) >> 63))
        return v18.from();
    v21 = *((long long *)&v8);
    v20 = v7;
    memcpy(&v19, &v6, 16);
    v17 = v4;
    v18 = v5;
    v36 = v17.get_flag(_ZN9uu_factor7options9EXPONENTS17h510882368a96446aE, g_5e5e58);
    v15 = std::io::stdio::stdout();
    v22.with_capacity(0x1000, v15.lock());
    (char)v27.try_get_many(&v17, _ZN9uu_factor7options6NUMBER17h92b45859a4127cdcE, g_5e5e68);
    v4.unwrap(_ZN9uu_factor7options6NUMBER17h92b45859a4127cdcE, g_5e5e68, &(char)v27);
    if (v4)
    {
        v38 = *((int128_t *)&v4);
        v39 = *((int128_t *)&v6);
        *((int128_t *)&v32) = *((int128_t *)&v8);
        v31 = v7;
        v29 = v39;
        v27 = v38;
        do
        {
            v40 = (char)v27.next();
            if (!v40)
                goto LABEL_4d30cc;
            v41 = uu_factor::print_factors_str(v40[1], v40[2], &v22, v36);
        } while (!v41);
    }
    else
    {
        v16 = std::io::stdio::stdin();
        v0 = v16.lock();
        v1 = v42 & 1;
        v43 = &v10;
        v44 = &v0;
        v14 = 9223372036854775809;
        while (true)
        {
LABEL_4d2fc4:
            v43.next(v44);
            if (v11 == 9223372036854775809)
            {
                core::ptr::drop_in_place<std::io::Lines<std::io::stdio::StdinLock>>(v0, *((int *)&v1));
LABEL_4d30cc:
                v47 = v22.flush();
                if (v47)
                {
                    v2 = v47;
                    v4 = uucore::util_name();
                    v5 = v46;
                    v10 = &v4;
                    v12 = <&T as core::fmt::Display>::fmt;
                    v27 = &g_5e50d8;
                    v28 = 2;
                    v31 = 0;
                    v29 = &v10;
                    v30 = 1;
                    std::io::stdio::_eprint(&v27);
                    v4 = &v2;
                    v5 = <std::io::error::Error as core::fmt::Display>::fmt;
                    v27 = &g_5e50f8;
                    v28 = 2;
                    v31 = 0;
                    v29 = &v4;
                    v30 = 1;
                    std::io::stdio::_eprint(&v27);
                    ::0x4d1490::core::ptr::drop_in_place<std::io::error::Error>(v2);
                }
                else
                {
                    ::0x4d1710::core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(0);
                }
                core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(&v22);
                core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v17);
                return 0;
            }
            if (v11 == 0x8000000000000000)
                break;
            v4 = v11;
            v5 = v9;
            v6 = v13;
            v29.into_searcher(v5, v6);
            v27 = 0;
            v28 = v6;
            v33 = 1;
            do
            {
                v45 = v27.try_fold(&v34);
                if (!v45)
                {
                    ::0x4d1480::core::ptr::drop_in_place<alloc::string::String>(&v4);
                    v43 = &v10;
                    v44 = &v0;
                    goto LABEL_4d2fc4;
                }
                v41 = uu_factor::print_factors_str(v45, v46, &v22, v36);
            } while (!v41);
            ::0x4d1480::core::ptr::drop_in_place<alloc::string::String>(&v4);
            goto LABEL_4d308e;
        }
        v9 = v5;
        uucore::mods::error::set_exit_code(1);
        v4 = uucore::util_name();
        v5 = v46;
        v2 = &v4;
        v3 = <&T as core::fmt::Display>::fmt;
        v27 = &g_5e50d8;
        v28 = 2;
        v31 = 0;
        v29 = &v2;
        v30 = 1;
        std::io::stdio::_eprint(&v27);
        v27.to_vec();
        v6 = v29;
        memcpy(&v4, &v27, 16);
        v27.spec_to_string(&v9);
        v24 = v6;
        memcpy(&v23, &v4, 16);
        memcpy(&v25, &v27, 16);
        v26 = v29;
        v27.from_iter(&v23);
        uucore::mods::locale::get_message_with_args(&v4, "factor-error-reading-input", 26, &v27);
        v2 = &v4;
        v3 = <alloc::string::String as core::fmt::Display>::fmt;
        v27 = &g_5e50f8;
        v28 = 2;
        v31 = 0;
        v29 = &v2;
        v30 = 1;
        std::io::stdio::_eprint(&v27);
        ::0x4d1480::core::ptr::drop_in_place<alloc::string::String>(&v4);
        ::0x4d1490::core::ptr::drop_in_place<std::io::error::Error>(v9);
        v41 = 0;
LABEL_4d308e:
        core::ptr::drop_in_place<std::io::Lines<std::io::stdio::StdinLock>>(v0, *((int *)&v1));
    }
    core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(&v22);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v17);
    return v41;
}

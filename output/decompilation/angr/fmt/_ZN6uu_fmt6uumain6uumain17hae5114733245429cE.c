long long uu_fmt::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char *v0;  // [bp-0x3c8], Other Possible Types: unsigned long long
    unsigned long long v1[3];  // [bp-0x3c0], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x3b8]
    void* v3;  // [bp-0x3b0], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x3a8]
    unsigned long long v5;  // [bp-0x3a0]
    int v6;  // [bp-0x398], Other Possible Types: char
    char v7;  // [bp-0x390]
    int v8;  // [bp-0x388]
    unsigned long long v9;  // [bp-0x380]
    int v10;  // [bp-0x378]
    unsigned long long v11;  // [bp-0x368]
    char v12;  // [bp-0x360], Other Possible Types: unsigned long long
    unsigned long long v13;  // [bp-0x358]
    char v14;  // [bp-0x350]
    char v15;  // [bp-0x340]
    unsigned long long v16;  // [bp-0x330]
    char v17;  // [bp-0x328]
    unsigned long long v18[6];  // [bp-0x320]
    unsigned long long v19;  // [bp-0x318]
    int v20;  // [bp-0x310], Other Possible Types: char
    unsigned long long v21;  // [bp-0x300]
    unsigned int v22;  // [bp-0x2f8]
    int v23;  // [bp-0x2f8], Other Possible Types: unsigned int
    unsigned long long v24;  // [bp-0x2f8]
    unsigned long long v25[3];  // [bp-0x2f0], Other Possible Types: unsigned long long
    char *v26;  // [bp-0x2e8], Other Possible Types: unsigned long long
    unsigned int v27;  // [bp-0x2e0], Other Possible Types: unsigned long long
    void* v28;  // [bp-0x2d8]
    int v29;  // [bp-0x2d0]
    int v30;  // [bp-0x2c0]
    char v31;  // [bp-0x2b0]
    unsigned long long v33;  // rbx
    unsigned long long v34;  // r13
    unsigned int v35;  // edx
    unsigned long long v36;  // rax
    unsigned long long v37;  // rdx
    unsigned long long v38[3];  // r14
    int v39;  // xmm0
    unsigned long long v41;  // rbp
    unsigned long v42;  // r15

    v17.collect(a0, a1);
    if (v19 >= 2)
    {
        v12.from_utf8_lossy(v18[4], v18[5]);
        v33 = v13;
        v34 = *((long long *)&v14);
        v23 = 0;
        if ((char)core::slice::<impl [T]>::starts_with(v33, v34, ::0x457f80::core::char::methods::encode_utf8_raw(&v23)))
        {
            v24 = v33;
            v25[0] = v33 + v34;
            if (!v24.advance_by(1) && (v35 - 48 < 10 & (char)core::str::validations::next_code_point(&v24)))
            {
                v24 = v33;
                v26 = 2;
                if (v24.try_fold().eq())
                {
                    v22 = 0;
                    v36 = ::0x457f80::core::char::methods::encode_utf8_raw(&v22).strip_prefix_of(v33, v34);
                    if (!v36)
                        core::option::unwrap_failed(&g_4ef688); /* do not return */
                    v3 = 0;
                    v4 = v36;
                    v5 = v37;
                    v6 = 1;
                    v0 = &v3;
                    v1 = <os_display::Quoted as core::fmt::Display>::fmt;
                    *((unsigned long long **)&v23) = &g_4ef678;
                    v25 = 1;
                    v28 = 0;
                    v26 = &v0;
                    v27 = 1;
                    v20.map_or_else(&(unsigned long long)v23);
                    v27 = 1;
                    v23 = v20;
                    v26 = v21;
                    v38 = (unsigned long long)v23.new();
                    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v12, v33);
                    core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v17);
                    return v38;
                }
            }
        }
        core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v12, v33);
    }
    uu_fmt::uu_app(&v24);
    (char)v3.try_get_matches_from(&v24, v18, v19);
    if ((char)(((0 ^ v3) & (0 ^ -(v3))) >> 63))
    {
        v38 = v13.from();
        core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v17);
        return v38;
    }
    v16 = v9;
    memcpy(&v15, &v7, 16);
    memcpy(&v14, &v5, 16);
    v12 = v3;
    v13 = v4;
    uu_fmt::extract_files(&v24, &v12);
    v38 = v25;
    if (v24 != 0x8000000000000000)
    {
        v0 = v24;
        v1[0] = v38;
        v2 = v26;
        v24.from_matches(&v12);
        if (v24 != 9223372036854775809)
        {
            v11 = *((long long *)&v31);
            v39 = *((int128_t *)&v27);
            v10 = v30;
            v8 = v29;
            v6 = v39;
            v3 = v24;
            v38[0] = v25;
            v5 = v26;
            v24.with_capacity(std::io::stdio::stdout());
            v41 = &v38[v2];
            do
            {
                v42 = v38 + 1;
                if (v38 == v41)
                {
                    v42 = v38;
                    if (v38 == v41)
                        goto LABEL_4595dc;
                }
                else if (v38 == v41)
                {
                    goto LABEL_4595dc;
                }
                if (!v38)
                {
LABEL_4595dc:
                    core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::Stdout>>(&v24);
                    core::ptr::drop_in_place<uu_fmt::FmtOptions>(&v3);
                    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v0);
                    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v12);
                    core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v17);
                    return 0;
                }
                v38 = uu_fmt::process_file(v38[1], v38[2], &v3, &v24);
                v38 = v42;
            } while (!v38);
            core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::Stdout>>(&v24);
            core::ptr::drop_in_place<uu_fmt::FmtOptions>(&v3);
        }
        core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v0);
    }
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v12);
    core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v17);
    return v38;
}

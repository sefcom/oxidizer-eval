long long uu_fmt::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x3c0], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x3b8]
    char v2;  // [bp-0x3b0]
    char v3;  // [bp-0x3a0]
    unsigned long long v4;  // [bp-0x390]
    char v5;  // [bp-0x388]
    unsigned long long v6[6];  // [bp-0x380]
    unsigned long v7;  // [bp-0x378]
    unsigned long long v8;  // [bp-0x370]
    unsigned long long v9;  // [bp-0x368]
    unsigned long long v10;  // [bp-0x360]
    char v11;  // [bp-0x358], Other Possible Types: unsigned long long
    unsigned long long v12;  // [bp-0x350]
    unsigned long long v13;  // [bp-0x348]
    int v14;  // [bp-0x340]
    char v15;  // [bp-0x338]
    int v16;  // [bp-0x330]
    unsigned long long v17;  // [bp-0x328]
    int v18;  // [bp-0x320]
    unsigned long long v19;  // [bp-0x310]
    unsigned long long v20;  // [bp-0x308]
    unsigned long long v21;  // [bp-0x300]
    unsigned int v22;  // [bp-0x2f8]
    unsigned int v23;  // [bp-0x2f8]
    unsigned int v24;  // [bp-0x2f8]
    unsigned long long v25;  // [bp-0x2f8]
    int v26;  // [bp-0x2f0], Other Possible Types: unsigned long long
    unsigned long long v27;  // [bp-0x2e8]
    unsigned long long v28;  // [bp-0x2e0]
    int v29;  // [bp-0x2d0]
    int v30;  // [bp-0x2c0]
    char v31;  // [bp-0x2b0]
    unsigned int v33;  // edx
    unsigned long long v34;  // rax
    unsigned long long v35;  // rdx
    unsigned long long v36;  // rbx
    int v37;  // xmm0
    unsigned long long v39;  // rdx
    unsigned long long v40[3];  // rax

    v5.collect(a0, a1);
    if (v7 >= 2)
    {
        v0.to_string_lossy(v6[4], v6[5]);
        v24 = 0;
        if ((char)core::slice::<impl [T]>::starts_with(v1, *((long long *)&v2), ::0x49b980::core::char::methods::encode_utf8_raw(&v24), 1))
        {
            v25 = v1;
            v26 = *((long long *)&v2) + v1;
            if (!v25.advance_by(1) && (v33 - 48 < 10 & (int)core::str::validations::next_code_point(&v25)))
            {
                v25 = v1;
                v26 = *((long long *)&v2) + v1;
                v27 = 2;
                if (v25.try_fold().eq())
                {
                    v22 = 0;
                    v34 = ::0x49b980::core::char::methods::encode_utf8_raw(&v22).strip_prefix_of(v1, *((long long *)&v2));
                    if (!v34)
                        core::option::unwrap_failed(&g_5837a0); /* do not return */
                    v11.to_vec(v34, v35);
                    v28 = v13;
                    *((int128_t *)&v26) = *((int128_t *)&v11);
                    v23 = 7;
                    v36 = v23.from();
                    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v0);
                    ::0x49b700::core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v5);
                    return v36;
                }
            }
        }
        core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v0);
    }
    uu_fmt::uu_app(&v25);
    v11.try_get_matches_from(&v25, &v5);
    if ((char)(((0 ^ v11) & (0 ^ -(v11))) >> 63))
    {
        v36 = v1.from();
        ::0x49b700::core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v5);
        return v36;
    }
    v4 = v17;
    memcpy(&v3, &v15, 16);
    memcpy(&v2, &v13, 16);
    v0 = v11;
    v1 = v12;
    uu_fmt::extract_files(&v25, &v0);
    v36 = v26;
    if (v25 != 0x8000000000000000)
    {
        v8 = v25;
        v9 = v36;
        v10 = v27;
        v25.from_matches(&v0);
        if (v25 != 9223372036854775809)
        {
            v19 = *((long long *)&v31);
            v37 = *((int128_t *)&v28);
            v18 = v30;
            v16 = v29;
            v14 = v37;
            v11 = v25;
            v36 = v26;
            v13 = v27;
            v25.with_capacity(0x2000, std::io::stdio::stdout());
            v20 = v8.into_iter();
            v21 = v39;
            do
            {
                v40 = v20.next();
                if (!v40)
                {
                    core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::Stdout>>(&v25);
                    core::ptr::drop_in_place<uu_fmt::FmtOptions>(&v11);
                    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v8);
                    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v0);
                    ::0x49b700::core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v5);
                    return 0;
                }
                v36 = uu_fmt::process_file(v40[1], v40[2], &v11, &v25);
            } while (!v36);
            core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::Stdout>>(&v25);
            core::ptr::drop_in_place<uu_fmt::FmtOptions>(&v11);
        }
        core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v8);
    }
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v0);
    ::0x49b700::core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v5);
    return v36;
}

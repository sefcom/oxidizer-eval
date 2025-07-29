long long uu_test::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x3f0]
    struct_0 *v1;  // [bp-0x3e8]
    unsigned long v2;  // [bp-0x3e0], Other Possible Types: unsigned long long
    int v3;  // [bp-0x3d8]
    unsigned long long v4;  // [bp-0x3c9]
    int v5;  // [bp-0x3b8]
    unsigned long long v6;  // [bp-0x3a9]
    unsigned long long v7;  // [bp-0x398]
    char v8;  // [bp-0x388]
    unsigned long long v9;  // [bp-0x378]
    int v10;  // [bp-0x368], Other Possible Types: char
    unsigned long long v11;  // [bp-0x368]
    char v12;  // [bp-0x360]
    int v13;  // [bp-0x35f]
    unsigned long v14;  // [bp-0x358]
    char v15;  // [bp-0x350]
    int v16;  // [bp-0x330], Other Possible Types: char
    unsigned long long v17;  // [bp-0x320]
    char v18;  // [bp-0x318]
    unsigned long long v19;  // [bp-0x308]
    int v20;  // [bp-0x2d8], Other Possible Types: char, unsigned long long
    unsigned int v21;  // [bp-0x2d8]
    char v22;  // [bp-0x2d0]
    int v23;  // [bp-0x2cf], Other Possible Types: char
    unsigned long v24;  // [bp-0x2c8], Other Possible Types: unsigned long long
    unsigned int v25;  // [bp-0x2c0], Other Possible Types: unsigned long long
    unsigned long long v27;  // rax
    unsigned long long v28;  // rdx
    unsigned long long v29;  // rax
    unsigned long v30;  // rsi
    unsigned long long v31;  // rbx
    unsigned long long v32;  // rax

    v7 = a0;
    v20.next(&v7);
    if ((char)(((0 ^ v20) & (0 ^ -(v20))) >> 63))
    {
        v8.to_owned("test -> ", 4);
    }
    else
    {
        v9 = v24;
        memcpy(&v8, &v20, 16);
    }
    v27 = uucore::util_name();
    v0.collect(v7, a1);
    v21 = 0;
    if ((char)core::slice::<impl [T]>::ends_with(v27, v28, ::0x496360::core::char::methods::encode_utf8_raw(&v21), 1))
    {
        if (v2 == 1)
        {
            if (!(char)*((long long *)&v1->padding_1[7]).h755a6090d15ab747 (.specialized.2)(v1->field_10))
            {
                if (!v2)
                    core::panicking::panic_bounds_check(0, 0, &g_56e7c0); /* do not return */
                if (!(!(char)*((long long *)&v1->padding_1[7]).h755a6090d15ab747 (.specialized.1)(v1->field_10)))
                    goto LABEL_496ab2;
            }
            else
            {
LABEL_496ab2:
                uu_test::uu_app(&v21);
                v18.into_iter(&v0);
                v10.chain(&v8, &v18);
                v18.get_matches_from(&v21, &v10);
                core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v18);
                return 0;
            }
        }
        if (!v2)
        {
            v11 = 0x8000000000000000;
LABEL_496d21:
            uucore::mods::locale::get_message(&v16, "test-error-missing-closing-bracket", 34);
            v25 = 2;
            v20 = v16;
            v24 = v17;
            v31 = v21.new();
            ::0x4962b0::core::ptr::drop_in_place<core::option::Option<std::ffi::os_str::OsString>>(&(char)v10);
            ::0x4961e0::core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v0);
            ::0x496120::core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v8);
            return v31;
        }
        v2 -= 1;
        v29 = v2 * 3;
        v30 = (&v1->field_10)[v29];
        *((int128_t *)&v10) = *((int128_t *)&(&v1->field_0)[8 * v29]);
        v14 = v30;
        if (!(v11 != 0x8000000000000000 && (char)(long long)(&v10)[8].equal(v14, "]--help--versiontest-error-missing-closing-bracket", 1)))
            goto LABEL_496d21;
        ::0x4962b0::core::ptr::drop_in_place<core::option::Option<std::ffi::os_str::OsString>>(&(char)v10);
    }
    v24 = v2;
    memcpy(&v21, &v0, 16);
    uu_test::parser::parse(&v11, &v21);
    if (v11 == 7)
    {
        v19 = *((long long *)&v15);
        memcpy(&v18, &v12, 16);
        uu_test::uumain::uumain::{{closure}}(&v21, &v18);
        *((int128_t *)&v5) = *((int128_t *)&v23);
        v6 = v25;
        *((int128_t *)&v3) = (int128_t)v5;
        v4 = v6;
        if (v20 == 7)
        {
            v31 = (!(v22 & 1) ? 1.from() : 0);
            ::0x496120::core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v8);
            return v31;
        }
        v25 = v4;
        *((int128_t *)&v23) = (int128_t)v3;
        v32 = v20.new();
    }
    else
    {
        memcpy(&(char)v5, &v13, 16);
        v6 = *((long long *)&v15);
        *((int128_t *)&v3) = (int128_t)v5;
        v4 = v6;
        v25 = v4;
        *((int128_t *)&v23) = (int128_t)v3;
        v20 = v11;
        v22 = v12;
        v32 = v20.new();
    }
    ::0x496120::core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v8);
    return v32;
}

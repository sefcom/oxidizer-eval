long long uu_touch::touch_file(unsigned long long a0, unsigned long long a1, unsigned int a2, struct_0 *a3, unsigned long long a4, unsigned int a5, unsigned long long a6, unsigned int a7)
{
    unsigned long long v0;  // [bp-0x1e8]
    unsigned long long v1;  // [bp-0x1e0]
    int v2;  // [bp-0x1d8], Other Possible Types: char, unsigned long long
    unsigned long long v3;  // [bp-0x1d0]
    char *v4;  // [bp-0x1c8], Other Possible Types: unsigned long, unsigned long long
    unsigned int v5;  // [bp-0x1c0], Other Possible Types: unsigned long long
    void* v6;  // [bp-0x1b8]
    void* v7;  // [bp-0x1a0], Other Possible Types: char *, unsigned long long
    int v8;  // [bp-0x198], Other Possible Types: unsigned long long
    char *v9;  // [bp-0x190], Other Possible Types: unsigned long long
    char v10;  // [bp-0x188], Other Possible Types: unsigned long long
    unsigned long long v11;  // [bp-0x180]
    unsigned int v12;  // [bp-0x178], Other Possible Types: unsigned long long
    unsigned long long v13;  // [bp-0x170]
    int v14;  // [bp-0x168], Other Possible Types: unsigned long long
    unsigned long long v15;  // [bp-0x160]
    unsigned long long v16;  // [bp-0x158]
    char v17;  // [bp-0x150]
    int v18;  // [bp-0x148]
    unsigned long v19;  // [bp-0x138]
    int v20;  // [bp-0x130], Other Possible Types: char
    unsigned long long v21;  // [bp-0x120]
    char v22;  // [bp-0x118]
    unsigned long long v23;  // [bp-0x108]
    char v24;  // [bp-0x100]
    unsigned long long v25;  // [bp-0xf0]
    unsigned long long v26;  // [bp-0xe0]
    unsigned long long v27;  // [bp-0xd8]
    unsigned long v29;  // r13
    unsigned long v30;  // rbp
    unsigned long long v31;  // r14
    void* v32;  // r15, Other Possible Types: unsigned long long
    unsigned long long v34;  // rdx
    unsigned int v35;  // edx
    unsigned long long v36;  // rdx

    v12 = a4;
    if (a2)
    {
        v17.to_vec("-: \ntouch-error-no-such-file-or-directorytouch-error-setting-times-no-such-file%a %b %e %H:%M:%S %Y%Y-%m-%d %H:%M:%S%Y-%m-%d %H:%M:%S.%f%Y-%m-%d %H:%M%Y-%m-%d %H:%M %ztouch-error-invalid-date-ts-format.60`DateTime - TimeDelta` overflowed%Y%m%d%H%M.%S%Y%m%d", 1);
        v29 = a3->field_31;
        if (!(!(v29 & 255)))
            goto LABEL_5b5bff;
LABEL_5b5bbb:
        std::fs::metadata(&v26, a0, a1);
    }
    else
    {
        v26 = a0;
        v27 = a1;
        v17.spec_to_string(&v26);
        v29 = a3->field_31;
        if (!(v29 & 255))
            goto LABEL_5b5bbb;
LABEL_5b5bff:
        std::fs::symlink_metadata(&v26, a0, a1);
    }
    v30 = a5;
    if ((int)v26 != 2)
    {
        v32 = uu_touch::update_times(a0, a1, a2, v29 & 4294967295, a3->field_33, v12, v30, a6, a7);
        ::0x5b1e90::core::ptr::drop_in_place<alloc::string::String>(&v17);
        return v32;
    }
    v31 = v27;
    if ((char)v31.kind())
    {
        v32 = v31.map_err_context(&v17);
        ::0x5b1e90::core::ptr::drop_in_place<alloc::string::String>(&v17);
        return v32;
    }
    v11 = v31;
    if (!a3->field_30)
    {
        if ((char)v29)
        {
            v2.to_vec("filename", 8);
            v16 = v4;
            *((int128_t *)&v14) = *((int128_t *)&v2);
            v7 = 0;
            v8 = v18;
            v10 = 1;
            v2.spec_to_string(&v7);
            v23 = v16;
            memcpy(&v22, &v14, 16);
            memcpy(&v24, &v2, 16);
            v25 = v4;
            v2.from_iter(&v22);
            uucore::mods::locale::get_message_with_args(&v20, "touch-error-setting-times-no-such-file%a %b %e %H:%M:%S %Y%Y-%m-%d %H:%M:%S%Y-%m-%d %H:%M:%S.%f%Y-%m-%d %H:%M%Y-%m-%d %H:%M %ztouch-error-invalid-date-ts-format.60`DateTime - TimeDelta` overflowed%Y%m%d%H%M.%S%Y%m%d%H%Mtouch-error-invalid-date-format/dev/s", 38, &v2);
            v5 = 1;
            v2 = v20;
            v4 = v21;
            v32 = v2.new();
            if (a3->field_32)
            {
                ::0x5b1ea0::core::ptr::drop_in_place<std::io::error::Error>(v11);
                ::0x5b1e90::core::ptr::drop_in_place<alloc::string::String>(&v17);
                return v32;
            }
            v0 = v32;
            v1 = &g_770528;
            uucore::mods::error::set_exit_code((unsigned int)v32.code());
            v14 = uucore::util_name();
            v15 = v34;
            v7 = &v14;
            v8 = <&T as core::fmt::Display>::fmt;
            v9 = &v0;
            v10 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
            v2 = &g_7703d8;
            v3 = 3;
            v6 = 0;
            v4 = &v7;
            v5 = 2;
            std::io::stdio::_eprint(&v2);
            ::0x5b1c70::core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v0, &g_770528);
        }
        else
        {
            (char)v0.create(a0, a1);
            if ((int)v0 == 1)
            {
                v12 = v0;
                (char)v2.to_string_lossy(a0, a1);
                v7 = v3;
                v8 = v4 + v3;
                if (v35 == 0x110000 || !(int)::0x5b2b00::core::str::validations::next_code_point_reverse(&v7))
                {
                    ::0x5b1e80::core::ptr::drop_in_place<regex::error::Error>(&(char)v2);
LABEL_5b5fc5:
                    v32 = v1.map_err_context(a0, a1);
                    if (!a3->field_32)
                    {
                        v13 = v32;
                        uucore::mods::error::set_exit_code(1);
                        v14 = uucore::util_name();
                        v15 = v36;
                        v7 = &v14;
                        v8 = <&T as core::fmt::Display>::fmt;
                        v9 = &v13;
                        v10 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                        v2 = &g_7703d8;
                        v3 = 3;
                        v6 = 0;
                        v4 = &v7;
                        v5 = 2;
                        std::io::stdio::_eprint(&v2);
                        core::ptr::drop_in_place<alloc::boxed::Box<uucore::mods::error::UIoError>>(v13);
                    }
                }
                else
                {
                    ::0x5b1e80::core::ptr::drop_in_place<regex::error::Error>(&(char)v2);
                    if (!(v35 == 47))
                        goto LABEL_5b5fc5;
                    uucore::mods::locale::get_message(&v7, "touch-error-no-such-file-or-directorytouch-error-setting-times-no-such-file%a %b %e %H:%M:%S %Y%Y-%m-%d %H:%M:%S%Y-%m-%d %H:%M:%S.%f%Y-%m-%d %H:%M%Y-%m-%d %H:%M %ztouch-error-invalid-date-ts-format.60`DateTime - TimeDelta` overflowed%Y%m%d%H%M.%S%Y%m%d%H%M", 37);
                    v4 = v9;
                    *((int128_t *)&v2) = *((int128_t *)&v7);
                    40._new((char)v2.new(), &g_770428).map_err_context(&v17);
                    ::0x5b1ea0::core::ptr::drop_in_place<std::io::error::Error>(v1);
                }
                ::0x5b1ea0::core::ptr::drop_in_place<std::io::error::Error>(v11);
                ::0x5b1e90::core::ptr::drop_in_place<alloc::string::String>(&v17);
                return v32;
            }
            else
            {
                core::ptr::drop_in_place<core::result::Result<std::fs::File,std::io::error::Error>>(&(char)v0);
                if (!(char)a3->field_18.eq() || !((char)(((0 ^ a3->field_0) & (0 ^ -(a3->field_0))) >> 63)))
                {
                    ::0x5b1ea0::core::ptr::drop_in_place<std::io::error::Error>(v11);
                    v30 = v19;
                    uu_touch::update_times(a0, a1, a2, v29 & 4294967295, a3->field_33, v12, v30, a6, a7);
                    ::0x5b1e90::core::ptr::drop_in_place<alloc::string::String>(&v17);
                    return v32;
                }
            }
        }
    }
    ::0x5b1ea0::core::ptr::drop_in_place<std::io::error::Error>(v11);
    ::0x5b1e90::core::ptr::drop_in_place<alloc::string::String>(&v17);
    return v32;
}

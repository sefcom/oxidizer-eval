long long uu_dd::Source::skip(unsigned int *a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0xf8]
    unsigned long long v1;  // [bp-0xf0]
    char *v2;  // [bp-0xe8], Other Possible Types: unsigned long long
    unsigned long v3;  // [bp-0xd8], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0xd0]
    char *v5;  // [bp-0xc8]
    unsigned long long v6;  // [bp-0xc0]
    void* v7;  // [bp-0xb8]
    char v8;  // [bp-0xa8], Other Possible Types: unsigned long
    unsigned long v9;  // [bp-0xa0], Other Possible Types: unsigned long long
    char *v10;  // [bp-0x98]
    unsigned long long v11;  // [bp-0x90]
    char v12;  // [bp-0x88]
    char *v13;  // [bp-0x78]
    char v14;  // [bp-0x70]
    char *v15;  // [bp-0x60]
    char v16;  // [bp-0x58]
    unsigned long long v17;  // [bp-0x48]
    char v18;  // [bp-0x40]
    char *v19;  // [bp-0x30]
    unsigned long v21;  // r15
    unsigned long long v22;  // rdx
    unsigned long long v23;  // rax
    unsigned long long v24;  // rdx
    unsigned long long v25;  // rax

    v21 = a0 + 1;
    if (*(a0))
    {
        if (*(a0) == 1)
        {
            uu_dd::try_get_len_of_block_device(&v8, v21);
            if (*((int *)&v8) == 1 && v9 < a1)
            {
                v0 = uucore::util_name();
                v1 = v22;
                v10 = &v0;
                v11 = <&T as core::fmt::Display>::fmt;
                v3 = &g_5dea48;
                v4 = 2;
                v7 = 0;
                v5 = &v10;
                v6 = 1;
                std::io::stdio::_eprint(&v3);
                v3.to_vec("filesizeratei128", 4);
                v2 = v5;
                memcpy(&v0, &v3, 16);
                v3.to_vec("standard input\nsrc/uu/dd/src/dd.rs", 14);
                v15 = v5;
                memcpy(&v14, &v3, 16);
                memcpy(&v12, &v0, 16);
                v13 = v2;
                v3.from_iter(&v12);
                uucore::mods::locale::get_message_with_args(&v0, "dd-error-cannot-skip-invaliddd-error-cannot-skip-offsetdd-error-not-directorychunk size must be non-zero", 28, &v3);
                v10 = &v0;
                v11 = <alloc::string::String as core::fmt::Display>::fmt;
                v3 = &g_5dea68;
                v4 = 2;
                v7 = 0;
                v5 = &v10;
                v6 = 1;
                std::io::stdio::_eprint(&v3);
                ::0x4cbd30::core::ptr::drop_in_place<alloc::string::String>(&v0);
                uucore::mods::error::set_exit_code(1);
                core::ptr::drop_in_place<core::result::Result<core::option::Option<u64>,std::io::error::Error>>(&v8);
                return 0;
            }
            core::ptr::drop_in_place<core::result::Result<core::option::Option<u64>,std::io::error::Error>>(&v8);
            v8 = v21;
            v9 = a1;
            v23 = std::io::copy::generic_copy(&v8);
            if ((v24 < a1 & !v23))
            {
                v0 = uucore::util_name();
                v1 = v24;
                v10 = &v0;
                v11 = <&T as core::fmt::Display>::fmt;
                v3 = &g_5dea48;
                v4 = 2;
                v7 = 0;
                v5 = &v10;
                v6 = 1;
                std::io::stdio::_eprint(&v3);
                v0.to_vec("filesizeratei128", 4);
                v3.to_vec("standard input\nsrc/uu/dd/src/dd.rs", 14);
                v19 = v5;
                memcpy(&v18, &v3, 16);
                memcpy(&v16, &v0, 16);
                v17 = v2;
                v3.from_iter(&v16);
                uucore::mods::locale::get_message_with_args(&v0, "dd-error-cannot-skip-offsetdd-error-not-directorychunk size must be non-zero", 27, &v3);
                v10 = &v0;
                v11 = <alloc::string::String as core::fmt::Display>::fmt;
                v3 = &g_5dea68;
                v4 = 2;
                v7 = 0;
                v5 = &v10;
                v6 = 1;
                std::io::stdio::_eprint(&v3);
                ::0x4cbd30::core::ptr::drop_in_place<alloc::string::String>(&v0);
                return v23;
            }
            return v23;
        }
        v3 = v21;
        v4 = a1;
        v25 = std::io::copy::generic_copy(&v3);
    }
    else
    {
        a1 >> 63.unwrap(&g_5dea88);
        v25 = v21.seek(2, a1);
    }
    return v25;
}

long long uu_dd::Source::skip(unsigned int *a0, unsigned long long a1)
{
    unsigned long v0;  // [bp-0x88], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x80]
    char *v2;  // [bp-0x78], Other Possible Types: unsigned long long
    int v3;  // [bp-0x70], Other Possible Types: unsigned long long
    void* v4;  // [bp-0x68]
    char *v5;  // [bp-0x58], Other Possible Types: char, unsigned long
    unsigned long v6;  // [bp-0x50], Other Possible Types: unsigned long long
    char *v7;  // [bp-0x48], Other Possible Types: unsigned long long
    unsigned long long v8;  // [bp-0x40]
    unsigned long v9;  // [bp-0x38], Other Possible Types: unsigned long long
    unsigned long long v10;  // [bp-0x30]
    unsigned long long v11;  // [bp-0x28]
    unsigned long v13;  // r15
    unsigned long long v14;  // rdx
    unsigned long long v15;  // rax
    unsigned long long v16;  // rdx

    v13 = a0 + 1;
    if (!*(a0))
    {
        a1 >> 63.unwrap(&g_53dca0);
        return v13.seek(2, a1);
    }
    else if (*(a0) == 1)
    {
        uu_dd::try_get_len_of_block_device(&v5, v13);
        if (v5 != 2 && ((char)v5 & 1) && v6 < a1)
        {
            v9 = uucore::util_name();
            v10 = v14;
            v7 = &v9;
            v8 = <&T as core::fmt::Display>::fmt;
            v0 = &g_53dc60;
            v1 = 2;
            v4 = 0;
            v2 = &v7;
            v3 = 1;
            std::io::stdio::_eprint(&v0);
            v0 = &g_53dc80;
            v1 = 1;
            v2 = 8;
            *((uint128_t *)&v3) = 0;
            std::io::stdio::_eprint(&v0);
            uucore::mods::error::set_exit_code(1);
            core::ptr::drop_in_place<core::result::Result<core::option::Option<u64>,std::io::error::Error>>(&v5);
            return 0;
        }
        core::ptr::drop_in_place<core::result::Result<core::option::Option<u64>,std::io::error::Error>>(&v5);
        v9 = v13;
        v10 = a1;
        v11 = a1;
        v15 = std::io::copy::generic_copy(&v9);
        if (((a1 <= v16 | (char)v15) & 1))
            return v15;
        v7 = uucore::util_name();
        v8 = v16;
        v5 = &v7;
        v6 = <&T as core::fmt::Display>::fmt;
        v0 = &g_53dc60;
        v1 = 2;
        v4 = 0;
        v2 = &v5;
        v3 = 1;
        std::io::stdio::_eprint(&v0);
        v0 = &g_53dc90;
        v1 = 1;
        v2 = 8;
        *((uint128_t *)&v3) = 0;
        std::io::stdio::_eprint(&v0);
        return v15;
    }
    else
    {
        v0 = v13;
        v1 = a1;
        v2 = a1;
        return std::io::copy::generic_copy(&v0);
    }
}

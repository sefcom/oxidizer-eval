long long uu_cp::construct_dest_path::haa7ffe475c78372d(unsigned long long a0[4], unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, char a5)
{
    int v0;  // [sp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0xa0]
    uint128_t v2[3];  // [sp-0x98], Other Possible Types: unsigned long long
    char v3;  // [sp-0x90]
    unsigned long v4;  // [sp-0x80], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0x78]
    unsigned long v6;  // [sp-0x70], Other Possible Types: unsigned long long
    char v7;  // [sp-0x68], Other Possible Types: unsigned long long
    char v8;  // [sp-0x60], Other Possible Types: unsigned long long
    uint128_t v9[3];  // [sp-0x58], Other Possible Types: unsigned long long
    void* v10;  // [sp-0x50]
    char v11;  // [bp-0x36]
    unsigned long v12;  // [bp+0x8]
    char v13;  // [bp+0x10]
    uint128_t v14[3];  // rax
    unsigned long long v17;  // rax
    unsigned long long v18;  // rcx
    unsigned long long v20;  // rdx

    if ((char)v12 && (char)std::path::Path::is_dir::h9ac0db933706da51(a3, a4))
    {
        v0 = 1;
        v1 = a3;
        v2 = a4;
        v3 = 1;
        v4 = &v0;
        v5 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
        v6 = &g_5553e0;
        v7 = 2;
        v10 = 0;
        v8 = &v4;
        v9 = 1;
        v14 = alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&a0[1], &v6);
        a0[0] = 4;
        return v14;
    }
    if (!v13)
    {
        if (a5)
        {
            std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&v0, a3, a4);
            a0[3] = v2;
            *((int128_t *)&a0[1]) = (int128_t)v0;
            a0[0] = 13;
            return v14;
        }
    }
    else
    {
        if (!(char)std::path::Path::is_dir::h9ac0db933706da51(a3, a4))
        {
            v14 = __rust_alloc(51, 1);
            if (v14)
            {
                v14[2] = 154706542488042656157512144450942629229;
                v14[1] = 43108708221997256654623738406126315636;
                v14[0] = 42766098628630104680664506471619520887;
                *((int *)((char *)&v14[2] + 15)) = 2037542772;
                a0[0] = 4;
                a0[1] = 51;
                a0[2] = v14;
                a0[3] = 51;
                return v14;
            }
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        }
        if (a5)
        {
            std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&v0, a3, a4);
            a0[3] = v2;
            *((int128_t *)&a0[1]) = (int128_t)v0;
            a0[0] = 13;
            return v14;
        }
        std::path::Path::components::h4f3217acf0fc8653(&v6, a1, a2);
        if (v11)
        {
            v17 = "/cannot overwrite directory  with non-directory, overriding mode  ()? overwrite ?";
            v18 = 1;
        }
        else
        {
            v18 = -0x100 | v8 < 5;
            v17 = (v8 < 5 ? "/cannot overwrite directory  with non-directory, overriding mode  ()? overwrite ?" : 1);
        }
    }
    v14 = std::path::Path::_strip_prefix::h4ff76a8ad9b06011(a1, a2, v17, v18);
    if (!v14)
    {
        a0[0] = 7;
        return v14;
    }
    std::path::Path::_join::h609728e54bd034cb(&v7, a3, a4, v14, v20);
    *((uint128_t *[3])&v2[0]) = v9;
    *((int128_t *)&v0) = *((int128_t *)&v7);
    v14 = v2;
    a0[3] = v14;
    *((int128_t *)&a0[1]) = (int128_t)v0;
    a0[0] = 13;
    return v14;
}

long long fish::env_universal_common::full_escape(unsigned long a0, unsigned long long a1, unsigned long a2)
{
    char v0;  // [bp-0x90]
    unsigned long v1;  // [sp-0x88]
    void* v2;  // [bp-0x70]
    unsigned long long v3;  // [bp-0x68]
    void* v4;  // [bp-0x60]
    struct_0 *v5;  // [bp-0x58]
    unsigned long long v6;  // [bp-0x50]
    unsigned long long v7;  // [bp-0x48]
    char v8;  // [bp-0x40]
    unsigned int v10;  // eax
    unsigned int v11;  // edx
    unsigned int v12;  // r13d
    unsigned int v13;  // r13d

    v2 = 0;
    v3 = 4;
    v4 = 0;
    v6 = a1;
    v7 = a1 + a2 * 4;
    if ((int)v6.next() != 2)
    {
        do
        {
            v13 = v12;
            v10.unwrap(v13, &g_14bd1b0);
            if ((char)fish::env_universal_common::is_universal_safe_to_encode_directly(v13))
            {
                v2.push(v13);
            }
            else
            {
                if (v13 < 128)
                {
                    v0 = 4;
                    v1 = v13;
                    fish_printf::printf_impl::sprintf_locale(&v8, &v2, "\\x%.2x\\u%.4x\\U%.8xIllegal variable name: '%ls'ERASEPROCESS_EXITsrc/event.rs", 6, &v0, 1);
                    v8.unwrap(&g_14d75a0);
                }
                else if ((fish::wchar::decode_byte_from_char(v13) & 1))
                {
                    v0 = 4;
                    v1 = v11;
                    fish_printf::printf_impl::sprintf_locale(&v8, &v2, "\\x%.2x\\u%.4x\\U%.8xIllegal variable name: '%ls'ERASEPROCESS_EXITsrc/event.rs", 6, &v0, 1);
                    v8.unwrap(&g_14d7558);
                }
                else if (v13 < 0x10000)
                {
                    v0 = 4;
                    fish_printf::printf_impl::sprintf_locale(&v8, &v2, "\\u%.4x\\U%.8xIllegal variable name: '%ls'ERASEPROCESS_EXITsrc/event.rs", 6, &v0, 1);
                    v8.unwrap(&g_14d7588);
                }
                else
                {
                    v0 = 4;
                    fish_printf::printf_impl::sprintf_locale(&v8, &v2, "\\U%.8xIllegal variable name: '%ls'ERASEPROCESS_EXITsrc/event.rs", 6, &v0, 1);
                    v8.unwrap(&g_14d7570);
                }
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v0);
            }
            v10 = v6.next();
            v11 = v11;
        } while (v10 != 2);
    }
    v5->field_10 = 0;
    v5->field_0 = *((int128_t *)&v2);
    return 0;
}

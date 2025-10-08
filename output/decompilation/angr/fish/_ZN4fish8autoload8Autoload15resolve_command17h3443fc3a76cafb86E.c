long long fish::autoload::Autoload::resolve_command(void* a0, void* a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, struct_1 *a5)
{
    void* v0;  // [bp-0x138]
    unsigned long long v1;  // [bp-0x130]
    void* v2;  // [bp-0x128]
    void* v3;  // [bp-0x120], Other Possible Types: char
    unsigned long long v4;  // [bp-0x118]
    void* v5;  // [bp-0x110]
    char v6;  // [bp-0x108]
    void* v7;  // [bp-0xf8]
    int v8;  // [bp-0xe8], Other Possible Types: char
    int v9;  // [bp-0xd8], Other Possible Types: char
    char v10;  // [bp-0xc0], Other Possible Types: unsigned long
    char v11;  // [bp-0xb8]
    char v12;  // [bp-0xa8]
    unsigned long long v13;  // [bp-0xa0]
    unsigned long long v14;  // [bp-0x98]
    char v15;  // [bp-0x88]
    int v16;  // [bp-0x80]
    char v17;  // [bp-0x68]
    int v18;  // [bp-0x60]
    char v19;  // [bp-0x48]
    char v20;  // [bp-0x38]

    a5->field_18(&v10, a4, *((long long *)a1), (long long)a1[8]);
    v19.resolve_command_impl(a1, a2, a3, (v10 ? v10 + 16 : 8), (v10 ? *((long long *)&v11) : 0));
    if (*((int *)&v19) <= 1)
    {
        memcpy(&v8, &v19, 16);
        memcpy(&v9, &v20, 16);
        if ((v8 & 1))
        {
            if (!(char)core::sync::atomic::atomic_load(&g_15a9b00, 0))
                goto LABEL_132f2b5;
            v0 = 0;
            v1 = 1;
            v2 = 0;
            v3.to_flog_str(&g_15a9af0);
            v12.into_iter(&v3);
            v0.spec_extend(&v12);
            v0.push(58, &g_14c57d0);
            v0.push(32, &g_14c57d0);
            v3 = 0;
            v4 = 4;
            v5 = 0;
            v12 = 1;
            v13 = a2;
            v14 = a3;
            v15 = 1;
            *((int128_t *)&v16) = *((int128_t *)a1);
            v17 = 1;
            v18 = v9;
            fish_printf::printf_impl::sprintf_locale(&v6, &v3, "Loading %ls from var %ls from path %lssrc/autoload.rs", 38, &v12, 3);
            v6.unwrap(&g_14c57d0);
            core::ptr::drop_in_place<[fish_printf::arg::Arg; 3]>(&v12);
            memcpy(&v6, &v3, 16);
            v7 = 0;
            v3.to_flog_str(&v6);
            v12.into_iter(&v3);
            v0.spec_extend(&v12);
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v6);
            v0.push(10, &g_14c57d0);
            fish::flog::flog_impl(1, 0);
            goto LABEL_132f2a7;
        }
        else if ((char)core::sync::atomic::atomic_load(&g_15a9b00, 0))
        {
            v0 = 0;
            v1 = 1;
            v2 = 0;
            (char)v3.to_flog_str(&g_15a9af0);
            v12.into_iter(&(char)v3);
            v0.spec_extend(&v12);
            v0.push(58, &g_14c57b8);
            v0.push(32, &g_14c57b8);
            v3 = 0;
            v4 = 4;
            v5 = 0;
            v12 = 1;
            v13 = a2;
            v14 = a3;
            fish_printf::printf_impl::sprintf_locale(&v6, &v3, "Embedded: %lsLoading %ls from var %ls from path %lssrc/autoload.rs", 13, &v12, 1);
            v6.unwrap(&g_14c57b8);
            core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v12);
            memcpy(&v6, &v3, 16);
            v7 = 0;
            v3.to_flog_str(&v6);
            v12.into_iter(&v3);
            v0.spec_extend(&v12);
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v6);
            v0.push(10, &g_14c57b8);
            fish::flog::flog_impl(1, 0);
LABEL_132f2a7:
            core::ptr::drop_in_place<alloc::vec::Vec<i8>>(0, 1);
        }
LABEL_132f2b5:
        a0[16] = v9;
        *(a0) = v8;
    }
    else
    {
        *((unsigned long long *)a0) = 2;
    }
    core::ptr::drop_in_place<core::option::Option<fish::env::var::EnvVar>>(&v10);
    return a0;
}

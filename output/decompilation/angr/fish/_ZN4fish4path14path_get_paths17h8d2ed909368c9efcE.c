long long fish::path::path_get_paths(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, struct_2 *a4)
{
    void* v0;  // [bp-0xc0]
    unsigned long long v1;  // [bp-0xb8]
    void* v2;  // [bp-0xb0]
    int v3;  // [bp-0xa8], Other Possible Types: char
    unsigned long long v4;  // [bp-0xa0]
    void* v6;  // [bp-0x98], Other Possible Types: unsigned long, unsigned long long
    int v7;  // [bp-0x88], Other Possible Types: char, unsigned int
    unsigned long long v8;  // [bp-0x88]
    char v9;  // [bp-0x88]
    unsigned long long v10;  // [bp-0x80]
    unsigned long long v11;  // [bp-0x78]
    int v12;  // [bp-0x58], Other Possible Types: char
    unsigned long long v13;  // [bp-0x50]
    void* v14;  // [bp-0x48], Other Possible Types: unsigned long long
    unsigned long long v16;  // rbp
    void* v17;  // r14
    void* v18;  // [bp-0xa8]

    if ((char)core::sync::atomic::atomic_load(&g_15a9a40, 0))
    {
        v0 = 0;
        v1 = 1;
        v2 = 0;
        v3.to_flog_str(&g_15a9a30);
        v7.into_iter(&v3);
        v0.spec_extend(&v7);
        v0.push(58, &g_14df030);
        v0.push(32, &g_14df030);
        v18 = 0;
        v4 = 4;
        v6 = 0;
        v9 = 1;
        v10 = a1;
        v11 = a2;
        fish_printf::printf_impl::sprintf_locale(&v12, &v18, "path_get_paths('%ls')assertion failed: wd.chars().next_back() == Some('/')", 21, &v9, 1);
        v12.unwrap(&g_14df030);
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v9);
        *((int128_t *)&v12) = *((int128_t *)&v18);
        v14 = 0;
        v18.to_flog_str(&v12);
        v9.into_iter(&v18);
        v0.spec_extend(&v9);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v12);
        v0.push(10, &g_14df030);
        fish::flog::flog_impl(v1, 0);
        core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
    }
    v0 = 0;
    v1 = 8;
    v2 = 0;
    v7 = 47;
    if (v7.slice_contains(a1, a2))
    {
        v8 = fish::path::path_check_executable(a1, a2);
        if (!v8)
        {
            core::ptr::drop_in_place<core::option::Option<std::io::error::Error>>(&v8);
            v8.to_vec(a1, a2);
            v6 = v11;
            memcpy(&v18, &v8, 16);
            v0.push(&v18, &g_14df048);
            a0->field_10 = v2;
            a0->field_0 = *((int128_t *)&v0);
            return a0;
        }
        core::ptr::drop_in_place<core::option::Option<std::io::error::Error>>(&v8);
    }
    a4->field_18(&v8, a3, "P", 4);
    if (!v8)
    {
        core::ptr::drop_in_place<core::option::Option<fish::env::var::EnvVar>>(&v8);
        a0->field_10 = v2;
        a0->field_0 = *((int128_t *)&v0);
        return a0;
    }
    v14 = v11;
    *((int128_t *)&v12) = *((int128_t *)&v8);
    if (v13)
    {
        v16 = (long long)v12;
        v17 = 0;
        do
        {
            if (*((long long *)(32 + v16 + (char *)v17)))
            {
                fish::builtins::fish_indent::fish_indent::{{closure}}(&v8, *((long long *)(24 + v16 + (char *)v17)), *((long long *)(32 + v16 + (char *)v17)));
                v6 = v11;
                *((int128_t *)&v3) = *((int128_t *)&v8);
                fish::path::append_path_component(&v18, a1, a2);
                v8 = fish::path::path_check_executable(v4, v6);
                if (v8)
                {
                    core::ptr::drop_in_place<core::option::Option<std::io::error::Error>>(&v8);
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v18);
                }
                else
                {
                    core::ptr::drop_in_place<core::option::Option<std::io::error::Error>>(&v8);
                    v11 = v6;
                    *((int128_t *)&v7) = *((int128_t *)&v18);
                    v0.push(&v8, &g_14df060);
                }
            }
            v17 += 24;
        } while (v13 * 24 != v17);
    }
    a0->field_10 = v2;
    a0->field_0 = *((int128_t *)&v0);
    core::ptr::drop_in_place<fish::env::var::EnvVar>(&(char)v12);
    return a0;
}

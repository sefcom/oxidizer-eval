void fish::history::HistoryImpl::populate_from_config_path(struct_0 *a0)
{
    int v0;  // [bp-0x2118], Other Possible Types: void*
    unsigned long long v1;  // [bp-0x2110]
    void* v2;  // [bp-0x2108], Other Possible Types: unsigned long long
    void* v3;  // [bp-0x20f8], Other Possible Types: unsigned int
    unsigned long long v4;  // [bp-0x20f0]
    void* v5;  // [bp-0x20e8]
    unsigned long long v6;  // [bp-0x20e0]
    int v7;  // [bp-0x20d8]
    unsigned long long v8;  // [bp-0x20d0]
    unsigned long long v9;  // [bp-0x20c8]
    int v10;  // [bp-0x20b8], Other Possible Types: char
    unsigned long long v11;  // [bp-0x20a8]
    unsigned long long v12;  // [bp-0x2098]
    unsigned long long v13;  // [bp-0x2090]
    int v14;  // [bp-0x2088]
    unsigned long long v15;  // [bp-0x2080]
    unsigned long long v16;  // [bp-0x2078]
    unsigned long long v17;  // [bp-0x2068]
    char v18;  // [bp-0x2060]
    char v19;  // [bp-0x2048]
    void* v20;  // [bp-0x2030]
    char v21;  // [bp-0x2020]
    void* v22;  // [bp-0x1030]
    unsigned long long v24;  // rax
    unsigned int v25;  // edx
    unsigned int v26;  // edx
    unsigned long long v27;  // rdx

    v22 = 0;
    v20 = 0;
    v20.history_file_path(a0->field_30, *((long long *)&a0->field_38));
    if (v20 < 9223372036854775810)
    {
        core::ptr::drop_in_place<core::result::Result<core::option::Option<widestring::utfstring::Utf32String>,std::io::error::Error>>(&v20);
        return;
    }
    v16 = *((long long *)&v21);
    *((int128_t *)&v14) = *((int128_t *)&v20);
    fish::path::path_get_config(&v20);
    if (v20 == 0x8000000000000000)
    {
        core::ptr::drop_in_place<core::option::Option<widestring::utfstring::Utf32String>>(&v20);
    }
    else
    {
        v9 = *((long long *)&v21);
        *((int128_t *)&v7) = *((int128_t *)&v20);
        (char)v7.push(47);
        (char)v7.spec_extend(a0->field_30, a0->field_30 + *((long long *)&a0->field_38) * 4);
        (char)v7.extend("_history", &g_54a298);
        v24 = fish::fds::wopen_cloexec(v8, v9, 0, 0);
        if (((char)v24 & 1))
        {
            core::ptr::drop_in_place<core::result::Result<std::fs::File,nix::errno::consts::Errno>>(v24 & 4294967295, v25);
        }
        else
        {
            a0.clear();
            if (((char)fish::fds::wopen_cloexec(v15, v16, 65, 384) & 1))
            {
                v3 = v26;
                if ((char)core::sync::atomic::atomic_load(&g_15a9890, 0))
                {
                    v0 = 0;
                    v1 = 1;
                    v2 = 0;
                    v10.to_flog_str(&g_15a9880);
                    v20.into_iter(&v10);
                    v0.spec_extend(&v20);
                    v0.push(58, &g_14d9f88);
                    v0.push(32, &g_14d9f88);
                    v18.to_vec(&g_54e328, 32);
                    v20.into_iter(&v18);
                    v0.spec_extend(&v20);
                    v0.push(32, &g_14d9f88);
                    v20.spec_to_string(&v3);
                    v11 = *((long long *)&v21);
                    memcpy(&v10, &v20, 16);
                    v20.into_iter(&v10);
                    v0.spec_extend(&v20);
                    v0.push(10, &g_14d9f88);
                    fish::flog::flog_impl(v1, 0);
                    core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
                }
            }
            else
            {
                memset(&v20, 0, 0x2000);
                while (true)
                {
                    v12 = vvar_190{reg 32}.read(&v20, 0x2000);
                    v13 = v27;
                    if (((char)v12 & 1) || !v27)
                        break;
                    0.index(v27, &v20, 0x2000, &g_14d9f58);
                    v17 = std::io::Write::write_all();
                    if (!v17)
                    {
                        core::ptr::drop_in_place<core::option::Option<std::io::error::Error>>(&v17);
                        core::ptr::drop_in_place<core::result::Result<&fish::wutil::dir_iter::DirEntry,std::io::error::Error>>(&v12);
                    }
                    else
                    {
                        v6 = v17;
                        if ((char)core::sync::atomic::atomic_load(&g_15a9890, 0))
                        {
                            v3 = 0;
                            v4 = 1;
                            v5 = 0;
                            (char)v0.to_flog_str(&g_15a9880);
                            v10.into_iter(&(char)v0);
                            v3.spec_extend(&v10);
                            v3.push(58, &g_14d9f70);
                            v3.push(32, &g_14d9f70);
                            v19.to_vec(&g_54e328, 32);
                            v10.into_iter(&v19);
                            v3.spec_extend(&v10);
                            v3.push(32, &g_14d9f70);
                            v10.spec_to_string(&v6);
                            v2 = v11;
                            v0 = v10;
                            v10.into_iter(&(char)v0);
                            v3.spec_extend(&v10);
                            v3.push(10, &g_14d9f70);
                            fish::flog::flog_impl(v4, 0);
                            core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v3, v4);
                        }
                        core::ptr::drop_in_place<std::io::error::Error>(&v6);
                        break;
                    }
                }
                core::ptr::drop_in_place<core::result::Result<&fish::wutil::dir_iter::DirEntry,std::io::error::Error>>(&v12);
                core::ptr::drop_in_place<std::fs::File>(v27);
            }
            core::ptr::drop_in_place<std::fs::File>(vvar_190{reg 32});
        }
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v7);
    }
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v14);
    return;
}

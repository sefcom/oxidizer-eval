char fish::reader::set_shell_modes(unsigned int a0, unsigned long long a1, unsigned long long a2)
{
    void* v0;  // [bp-0xc0]
    unsigned long long v1;  // [bp-0xb8]
    void* v2;  // [bp-0xb0]
    char v3;  // [bp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0xa0]
    void* v5;  // [bp-0x98], Other Possible Types: unsigned long long
    void* v6;  // [bp-0x88]
    unsigned long long v7;  // [bp-0x80]
    void* v8;  // [bp-0x78]
    char v9;  // [bp-0x60]
    unsigned long long v10;  // [bp-0x58]
    unsigned long long v11;  // [bp-0x50]
    char v12;  // [bp-0x40]
    unsigned long long v14;  // rax
    unsigned int v15;  // eax
    char v16;  // dl
    unsigned long long v18;  // rdx

    while (true)
    {
        v14 = fish::common::shell_modes();
        v15 = tcsetattr(a0, 0, v14 + 8);
        core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v14, v16 & 1);
        if (v15 != -1)
            break;
        if ((int)errno::errno() != 4)
        {
            fish::wutil::perror("tcsetattr  nodes:   branches:   leaves:   tokens:   keywords: ", 9);
            if ((char)core::sync::atomic::atomic_load(&g_15a93e0, 0))
            {
                v0 = 0;
                v1 = 1;
                v2 = 0;
                v3.to_flog_str(&g_15a93d0);
                v9.into_iter(&v3);
                v0.spec_extend(&v9);
                v0.push(58, &g_14e0938);
                v0.push(32, &g_14e0938);
                v6 = 0;
                v7 = 4;
                v8 = 0;
                v4 = "F";
                v5 = 32;
                v3 = 0x8000000000000000;
                v9 = 0;
                v10 = a1;
                v11 = a2;
                fish_printf::printf_impl::sprintf_locale(&v12, &v6, v3.localize(), v18, ".", &v9, 1);
                v12.unwrap(&g_14e0950);
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v9);
                core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v3);
                memcpy(&v3, &v6, 16);
                v5 = 0;
                v6.to_flog_str(&v3);
                v9.into_iter(&v6);
                v0.spec_extend(&v9);
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v3);
                v0.push(10, &g_14e0938);
                fish::flog::flog_impl(v1, 0);
                core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
                break;
            }
        }
    }
    return v15 != -1;
}

int fish::parser::Parser::emit_profiling(unsigned long long a0[16], unsigned long long a1, unsigned long long a2)
{
    void* v0;  // [bp-0x128]
    unsigned long long v1;  // [bp-0x120]
    void* v2;  // [bp-0x118]
    unsigned long long v3;  // [bp-0x110]
    char v4;  // [bp-0x108]
    int v5;  // [bp-0x108]
    int v6;  // [bp-0x100]
    void* v7;  // [bp-0xf8]
    void* v8;  // [bp-0xe0]
    unsigned long long v9;  // [bp-0xd8]
    void* v10;  // [bp-0xd0]
    char v11;  // [bp-0xc8], Other Possible Types: unsigned int
    unsigned int v12;  // [bp-0xc4]
    unsigned long long v13;  // [bp-0xc0]
    unsigned long long v14[3];  // [bp-0xb8]
    unsigned long long v15;  // [bp-0xb0]
    unsigned long long v16;  // [bp-0xa8]
    char v17;  // [bp-0xa0]
    int v18;  // [bp-0x98]
    char v19;  // [bp-0x88], Other Possible Types: unsigned int
    unsigned int v20;  // [bp-0x88]
    char v21;  // [bp-0x78]
    char v22;  // [bp-0x68]
    int v23;  // [bp-0x60]
    char v24;  // [bp-0x40]
    char v25;  // [bp-0x38]
    unsigned long long v27;  // rax
    unsigned long long v28;  // rdx

    v11.create(a1, a2);
    if (v11 == 1)
    {
        v3 = v13;
        if (!(char)core::sync::atomic::atomic_load(&g_15a93e0, 0))
            return (unsigned int)core::ptr::drop_in_place<std::io::error::Error>(&v3);
        v0 = 0;
        v1 = 1;
        v2 = 0;
        v4.to_flog_str(&g_15a93d0);
        v19.into_iter(&v4);
        v0.spec_extend(&v19);
        v0.push(58, &g_14de9b8);
        v0.push(32, &g_14de9b8);
        v8 = 0;
        v9 = 4;
        v10 = 0;
        v15 = "C";
        v16 = 54;
        *(v14) = 0x8000000000000000;
        v27 = v14.localize();
        v24.from_utf8_lossy(a1, a2);
        *((int128_t *)&v6) = *((int128_t *)&v25);
        v4 = 0;
        v17.spec_to_string(&v3);
        memcpy(&v19, &v4, 16);
        memcpy(&v21, &v6, 16);
        v22 = 0;
        v23 = v18;
        fish_printf::printf_impl::sprintf_locale(&v4, &v8, v27, v28, ".", &v19, 2);
        v4.unwrap(&g_14de9d0);
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v19);
        core::ptr::drop_in_place<alloc::string::String>(&v17);
        core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v24);
        core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v14);
        *((int128_t *)&v5) = *((int128_t *)&v8);
        v7 = 0;
        v17.to_flog_str(&v4);
        v19.into_iter(&v17);
        v0.spec_extend(&v19);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v4);
        v0.push(10, &g_14de9b8);
        fish::flog::flog_impl(v1, 0);
        core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
        return (unsigned int)core::ptr::drop_in_place<std::io::error::Error>(&v3);
    }
    else
    {
        v19 = v12;
        if (a0[12] >= 9223372036854775807)
            core::cell::panic_already_mutably_borrowed(&g_14de9a0); /* do not return */
        a0[12] = a0[12] + 1;
        fish::parser::print_profile(a0[14], a0[15], &v19);
        core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(&a0[12]);
        return core::ptr::drop_in_place<std::fs::File>(v20);
    }
}

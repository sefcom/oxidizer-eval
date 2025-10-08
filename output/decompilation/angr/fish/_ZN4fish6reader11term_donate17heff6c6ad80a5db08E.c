long long fish::reader::term_donate(unsigned int a0)
{
    void* v0;  // [bp-0xb0]
    unsigned long long v1;  // [bp-0xa8]
    void* v2;  // [bp-0xa0]
    unsigned int v3;  // [bp-0x94]
    unsigned long long v4[3];  // [bp-0x90], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0x88]
    unsigned long long v6;  // [bp-0x80]
    unsigned long long v7;  // [bp-0x78]
    unsigned long long v8;  // [bp-0x70]
    int v9;  // [bp-0x68]
    char v10;  // [bp-0x48]
    unsigned long long v13;  // rax
    unsigned int v14;  // eax
    char v15;  // dl
    unsigned long long v16;  // rax
    unsigned long long v17;  // rax
    unsigned long long v18;  // rdx

    v3 = a0;
    do
    {
        v9.lock(_ZN4fish6reader27TTY_MODES_FOR_EXTERNAL_CMDS17h8801e9b0178ba92dE.get_or_try_init(&_ZN4fish6reader27TTY_MODES_FOR_EXTERNAL_CMDS17h8801e9b0178ba92dE));
        v13 = v9.unwrap(&g_14e08f0);
        v14 = tcsetattr(0, 0, v13 + 8);
        v16 = core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v13, v15 & 1);
        if (v14 != -1)
            return v16;
        v17 = errno::errno();
    } while ((unsigned int)v17 == 4);
    if ((char)v3)
        return v17;
    if (!(char)core::sync::atomic::atomic_load(&g_15a93e0, 0))
        return fish::wutil::perror("tcsetattr  nodes:   branches:   leaves:   tokens:   keywords: ", 9);
    v0 = 0;
    v1 = 1;
    v2 = 0;
    v4.to_flog_str(&g_15a93d0);
    v9.into_iter(&v4);
    v0.spec_extend(&v9);
    v0.push(58, &g_14e0908);
    v0.push(32, &g_14e0908);
    v5 = "C";
    v6 = 39;
    v4 = 0x8000000000000000;
    v7 = v4.localize();
    v8 = v18;
    v10.to_flog_str(&v7);
    v9.into_iter(&v10);
    v0.spec_extend(&v9);
    core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v4);
    v0.push(10, &g_14e0908);
    fish::flog::flog_impl(v1, 0);
    core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
    return fish::wutil::perror("tcsetattr  nodes:   branches:   leaves:   tokens:   keywords: ", 9);
}

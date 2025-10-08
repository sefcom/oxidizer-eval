void fish::env_dispatch::handle_timezone(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    void* v0;  // [bp-0xf8]
    unsigned long long v1;  // [bp-0xf0]
    void* v2;  // [bp-0xe8]
    unsigned long long v4;  // [bp-0xe0]
    char v5;  // [bp-0xc8]
    unsigned long long v6;  // [bp-0xb0]
    unsigned long long v7;  // [bp-0xa8]
    unsigned long long v8;  // [bp-0xa0]
    unsigned long long v9;  // [bp-0x98]
    char v10;  // [bp-0x90]
    char v11;  // [bp-0x70]
    char v12;  // [bp-0x58]
    char v13;  // [bp-0x40]
    unsigned long long v15;  // rax
    unsigned long long v16;  // rcx

    v6 = a0;
    v7 = a1;
    v11.getf_unless_empty(a2, a0, a1, 0);
    if (*((long long *)&v11))
        fish::env_dispatch::init_locale::{{closure}}(&(char)v4, &v11);
    else
        v4 = 0x8000000000000000;
    if ((char)core::sync::atomic::atomic_load(&g_15a9770, 0))
    {
        v0 = 0;
        v1 = 1;
        v2 = 0;
        v5.to_flog_str(&g_15a9760);
        v10.into_iter(&v5);
        v0.spec_extend(&v10);
        v0.push(58, &g_14d6f48);
        v0.push(32, &g_14d6f48);
        v12.to_vec("handle_timezone() current timezone var:=>", 39);
        v10.into_iter(&v12);
        v0.spec_extend(&v10);
        v0.push(32, &g_14d6f48);
        v5.to_flog_str(&v6);
        v10.into_iter(&v5);
        v0.spec_extend(&v10);
        v0.push(32, &g_14d6f48);
        v13.to_vec("=>", 2);
        v10.into_iter(&v13);
        v0.spec_extend(&v10);
        v0.push(32, &g_14d6f48);
        if (v4 == 0x8000000000000000)
            v15 = "M";
        if (v4 == 0x8000000000000000)
            v16 = 13;
        v8 = v15;
        v9 = v16;
        v5.to_flog_str(&v8);
        v10.into_iter(&v5);
        v0.spec_extend(&v10);
        v0.push(10, &g_14d6f48);
        fish::flog::flog_impl(v1, 0);
        core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
        if (v4 != 0x8000000000000000)
            goto LABEL_139aed2;
LABEL_139aebb:
        fish::env::unsetenv_lock(a0, a1);
    }
    else
    {
        if (v4 == 0x8000000000000000)
            goto LABEL_139aebb;
LABEL_139aed2:
        fish::env::setenv_lock(a0, a1, &(char)v4);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v4);
    }
    tzset();
    return;
}

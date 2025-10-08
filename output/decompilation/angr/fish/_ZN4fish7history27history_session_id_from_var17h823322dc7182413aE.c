long long fish::history::history_session_id_from_var(void* a0, unsigned long long *a1)
{
    void* v0;  // [bp-0xe0]
    unsigned long long v1;  // [bp-0xd8]
    void* v2;  // [bp-0xd0]
    unsigned long long v3[3];  // [bp-0xc8]
    unsigned long long v4[3];  // [bp-0xc8]
    unsigned long long v5;  // [bp-0xc0]
    void* v6;  // [bp-0xb8], Other Possible Types: unsigned long long
    void* v7;  // [bp-0xa8]
    unsigned long long v8;  // [bp-0xa0]
    void* v9;  // [bp-0x98]
    char v10;  // [bp-0x90]
    unsigned long long v11;  // [bp-0x88]
    unsigned long v12;  // [bp-0x80]
    char v13;  // [bp-0x78]
    unsigned long long v14;  // [bp-0x70]
    unsigned long v15;  // [bp-0x68]
    char v16;  // [bp-0x58]
    unsigned long long v17;  // [bp-0x50]
    unsigned long long v18;  // [bp-0x48]
    char v19;  // [bp-0x38]
    unsigned long long v22;  // rdx

    if (!*(a1))
    {
        a0.to_vec("f", 4);
        core::ptr::drop_in_place<core::option::Option<fish::env::var::EnvVar>>(a1);
        return a0;
    }
    v10.as_string(a1);
    if (!v12 || (char)fish::common::valid_var_name(v11, v12))
    {
        *((unsigned long *)&a0[16]) = v12;
        *((int128_t *)a0) = *((int128_t *)&v10);
    }
    else
    {
        if ((char)core::sync::atomic::atomic_load(&g_15a9380, 0))
        {
            v0 = 0;
            v1 = 1;
            v2 = 0;
            v3.to_flog_str(&g_15a9370);
            v13.into_iter(&v3);
            v0.spec_extend(&v13);
            v0.push(58, &g_14da138);
            v0.push(32, &g_14da138);
            v7 = 0;
            v8 = 4;
            v9 = 0;
            v5 = "H";
            v6 = 77;
            *(v4) = 0x8000000000000000;
            v13 = 1;
            v14 = v11;
            v15 = v12;
            v16 = 1;
            v17 = "f";
            v18 = 4;
            fish_printf::printf_impl::sprintf_locale(&v19, &v7, (unsigned long long)v4.localize(), v22, ".", &v13, 2);
            v19.unwrap(&g_14da150);
            core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v13);
            core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&(unsigned long long)v4);
            *((int128_t *)&v4) = *((int128_t *)&v7);
            v6 = 0;
            v7.to_flog_str(&(unsigned long long)v4);
            v13.into_iter(&v7);
            v0.spec_extend(&v13);
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(unsigned long long)v4);
            v0.push(10, &g_14da138);
            fish::flog::flog_impl(v1, 0);
            core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
        }
        v13.to_vec("f", 4);
        *((unsigned long *)&a0[16]) = v15;
        *((int128_t *)a0) = *((int128_t *)&v13);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v10);
    }
    core::ptr::drop_in_place<fish::env::var::EnvVar>(a1);
    return a0;
}

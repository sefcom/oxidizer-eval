long long fish::env::environment::EnvStack::set_pwd_from_getcwd(void* a0)
{
    void* v0;  // [bp-0xa0]
    unsigned long long v1;  // [bp-0x98]
    void* v2;  // [bp-0x90]
    unsigned long long v3[3];  // [bp-0x88]
    unsigned long long v4;  // [bp-0x80]
    unsigned long long v5;  // [bp-0x78]
    unsigned long long v6;  // [bp-0x70]
    unsigned long long v7;  // [bp-0x68]
    char v8;  // [bp-0x60]
    unsigned long v9;  // [bp-0x50]
    char v10;  // [bp-0x48]
    char v11;  // [bp-0x30]
    unsigned long long v13;  // rdx

    fish::wutil::wgetcwd(&v8);
    if (v9 || !(char)core::sync::atomic::atomic_load(&g_15a9380, 0))
        return a0.set_one("P", 3, 20, &v8);
    v0 = 0;
    v1 = 1;
    v2 = 0;
    v3.to_flog_str(&g_15a9370);
    v11.into_iter(&v3);
    v0.spec_extend(&v11);
    v0.push(58, &g_14d6738);
    v0.push(32, &g_14d6738);
    v4 = "C";
    v5 = 76;
    *(v3) = 0x8000000000000000;
    v6 = v3.localize();
    v7 = v13;
    v10.to_flog_str(&v6);
    v11.into_iter(&v10);
    v0.spec_extend(&v11);
    core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v3);
    v0.push(10, &g_14d6738);
    fish::flog::flog_impl(v1, 0);
    core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
    return a0.set_one("P", 3, 20, &v8);
}

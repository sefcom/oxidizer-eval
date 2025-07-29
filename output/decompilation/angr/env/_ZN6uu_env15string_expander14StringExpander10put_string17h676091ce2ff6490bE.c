void uu_env::string_expander::StringExpander::put_string(unsigned long long a0, unsigned long long a1[3])
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v1;  // [bp-0x20]
    unsigned long long v2;  // [bp-0x18]
    unsigned long long v4;  // rdx

    v1 = a1[1].as_ref(a1[2]);
    v2 = v4;
    v0 = 0x8000000000000000;
    a0.spec_extend(v1, v4 + v1, &g_5a9f50);
    ::0x4beec0::core::ptr::drop_in_place<alloc::borrow::Cow<[u8]>>(&v0);
    ::0x4bee90::core::ptr::drop_in_place<std::ffi::os_str::OsString>(a1);
    return;
}

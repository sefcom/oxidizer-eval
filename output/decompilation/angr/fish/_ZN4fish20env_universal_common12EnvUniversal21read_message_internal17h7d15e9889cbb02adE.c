long long fish::env_universal_common::EnvUniversal::read_message_internal(unsigned long long a0, unsigned long long a1)
{
    void* v0;  // [bp-0xb0]
    unsigned long long v1;  // [bp-0xa8]
    void* v2;  // [bp-0xa0]
    void* v3;  // [bp-0x90]
    unsigned long long v4;  // [bp-0x88]
    void* v5;  // [bp-0x80]
    char v6;  // [bp-0x78]
    char v8;  // [bp-0x68]
    char v9;  // [bp-0x58]
    unsigned long long v10;  // [bp-0x48]
    unsigned long long v11;  // [bp-0x40]
    void* v12;  // [bp-0x38]
    void* v13;  // [bp-0x30]
    char v14;  // [bp-0x28]
    void* v16;  // rsi
    unsigned int v18;  // eax

    v3 = 0;
    v4 = 1;
    v5 = 0;
    v11 = a0;
    v12 = "d\n\n# Save \\(gamake\\(gas output in a file:\nmake &>/log\n\n# Redirections stack and can be used with blocks:\nbegin\n    echo stdout\n    echo stderr >&2 # <\\- this goes to stderr!\nend >/dev/null # ignore stdout, so this prints \"stderr\"\n\n# print all lines that in";
    v13 = "d\n\n# Save \\(gamake\\(gas output in a file:\nmake &>/log\n\n# Redirections stack and can be used with blocks:\nbegin\n    echo stdout\n    echo stderr >&2 # <\\- this goes to stderr!\nend >/dev/null # ignore stdout, so this prints \"stderr\"\n\n# print all lines that in";
    if (((char)std::io::default_read_to_end(&v11, &v3) & 1))
    {
        if ((char)core::sync::atomic::atomic_load(&g_15a93e0, 0))
        {
            v0 = 0;
            v1 = 1;
            v2 = 0;
            v9.to_flog_str(&g_15a93d0);
            v6.into_iter(&v9);
            v0.spec_extend(&v6);
            v0.push(58, &g_14d7528);
            v0.push(32, &g_14d7528);
            v14.to_vec("Failed to read file:/fish_variables", 20);
            v6.into_iter(&v14);
            v0.spec_extend(&v6);
            v0.push(32, &g_14d7528);
            v6.spec_to_string(&vvar_56{reg 32});
            v10 = *((long long *)&v8);
            memcpy(&v9, &v6, 16);
            v6.into_iter(&v9);
            v0.spec_extend(&v6);
            v0.push(10, &g_14d7528);
            fish::flog::flog_impl(v1, 0);
            core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
        }
        core::ptr::drop_in_place<std::io::error::Error>(&vvar_56{reg 32});
    }
    v16 = 0;
    v18 = 1.populate_variables(v16, a1);
    core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v3, 1);
    return v18;
}

long long fish::exec::is_thompson_shell_script(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x128]
    unsigned long long v1;  // [bp-0x120]
    uint128_t v2;  // [bp-0x118]
    uint128_t v3;  // [bp-0x108]
    uint128_t v4;  // [bp-0xf8]
    uint128_t v5;  // [bp-0xe8]
    uint128_t v6;  // [bp-0xd8]
    uint128_t v7;  // [bp-0xc8]
    uint128_t v8;  // [bp-0xb8]
    uint128_t v9;  // [bp-0xa8]
    uint128_t v10;  // [bp-0x98]
    uint128_t v11;  // [bp-0x88]
    uint128_t v12;  // [bp-0x78]
    uint128_t v13;  // [bp-0x68]
    uint128_t v14;  // [bp-0x58]
    uint128_t v15;  // [bp-0x48]
    uint128_t v16;  // [bp-0x38]
    uint128_t v17;  // [bp-0x28]
    unsigned int v19;  // eax
    unsigned int v20;  // ebp
    unsigned long long v21;  // rdx

    if ((char)core::slice::<impl [T]>::ends_with(a0, a1 - 1, ".fish/", 5))
        return 0;
    v19 = errno::errno();
    v20 = 0;
    if (!((char)fish::fds::open_cloexec(a0, a1, 0x100, 0) & 1))
    {
        v17 = 0;
        v16 = 0;
        v15 = 0;
        v14 = 0;
        v13 = 0;
        v12 = 0;
        v11 = 0;
        v10 = 0;
        v9 = 0;
        v8 = 0;
        v7 = 0;
        v6 = 0;
        v5 = 0;
        v4 = 0;
        v3 = 0;
        v2 = 0;
        v0 = vvar_82{reg 32}.read(&v2, 0x100);
        v1 = v21;
        v20 = (!((char)v0 & 1) ? (int)fish::exec::is_thompson_shell_payload(0.index(v21, &v2, 0x100, &g_14d7aa8), v21) : 0);
        core::ptr::drop_in_place<core::result::Result<&fish::wutil::dir_iter::DirEntry,std::io::error::Error>>(&v0);
        core::ptr::drop_in_place<std::fs::File>(vvar_82{reg 32});
    }
    errno::set_errno(v19);
    return v20;
}

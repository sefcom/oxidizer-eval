long long fd::set_working_dir(unsigned long long a0[51])
{
    char *v0;  // [bp-0x88]
    unsigned long long v1;  // [bp-0x80]
    unsigned long long v2;  // [bp-0x78]
    unsigned long long v3;  // [bp-0x70]
    char *v4;  // [bp-0x68]
    unsigned long long v5;  // [bp-0x60]
    void* v6;  // [bp-0x58]
    char v7;  // [bp-0x48]
    char v8;  // [bp-0x30]
    unsigned long long v10;  // r14
    unsigned long long v11;  // rbx
    unsigned long long v12;  // rdx

    if ((char)(((0 ^ a0[48]) & (0 ^ -(a0[48]))) >> 63))
        return 0;
    v10 = a0[49];
    v11 = a0[50];
    if (!(char)fd::filesystem::is_existing_directory(v10, v11))
    {
        v7.from_utf8_lossy(v10, v11);
        v0 = &v7;
        v1 = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
        v2 = &g_802828;
        v3 = 2;
        v6 = 0;
        v4 = &v0;
        v5 = 1;
        v8.map_or_else(0, v12, &v2);
        core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v7);
        return v8.msg();
    }
    return std::env::set_current_dir(&a0[48]).with_context(v10, v11);
}

long long uu_sort::Output::into_write(unsigned long long a0, struct_0 *a1)
{
    unsigned int v0;  // [bp-0x2c]
    int v1;  // [bp-0x28]
    unsigned long v2;  // [bp-0x18]
    unsigned long long v4;  // rax
    unsigned long long v5;  // rcx
    unsigned long long v6;  // 4096

    if ((char)(((0 ^ *((long long *)&a1->field_0)) & (0 ^ -(*((long long *)&a1->field_0)))) >> 63))
    {
        v4 = std::io::stdio::stdout().new();
        v5 = &g_670328;
        v6 = a0;
    }
    else
    {
        v2 = a1->field_10;
        *((int128_t *)&v1) = *((int128_t *)&a1->field_0);
        v0 = a1->field_18;
        ::0x5074a0::core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(v0.set_len(0));
        v4 = v0.new();
        ::0x506b30::core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v1);
        v5 = &g_670378;
        v6 = a0;
    }
    v6.with_capacity(0x2000, v4, v5);
    return a0;
}

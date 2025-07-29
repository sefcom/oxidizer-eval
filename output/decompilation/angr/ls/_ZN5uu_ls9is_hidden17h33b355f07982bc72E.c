long long uu_ls::is_hidden(unsigned long long a0)
{
    char v0;  // [bp-0x40], Other Possible Types: unsigned int
    unsigned long long v1;  // [bp-0x38]
    unsigned long long v2;  // [bp-0x30]
    char v3;  // [bp-0x28]
    unsigned long long v4;  // [bp-0x20]
    char v5;  // [bp-0x18]
    unsigned int v7;  // ebx
    unsigned long long v8;  // rdx

    v3.file_name(a0);
    v0.try_from(v4, *((long long *)&v5));
    if ((v0 & 1))
    {
        v7 = 0;
    }
    else
    {
        v0 = 0;
        v7 = core::slice::<impl [T]>::starts_with(v1, v2, ::0x51e6f0::core::char::methods::encode_utf8_raw(46, &v0), v8);
    }
    ::0x51cb00::core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v3);
    return v7;
}

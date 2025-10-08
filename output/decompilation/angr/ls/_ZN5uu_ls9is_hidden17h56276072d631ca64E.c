long long uu_ls::is_hidden(unsigned long long a0)
{
    char v0;  // [bp-0x50], Other Possible Types: unsigned int
    unsigned long long v1;  // [bp-0x48]
    unsigned long long v2;  // [bp-0x40]
    char v3;  // [bp-0x38], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x30]
    char v5;  // [bp-0x28]
    unsigned int v7;  // ebp
    unsigned long long v8;  // rdx

    v3.file_name(a0);
    core::str::converts::from_utf8(&v0, v4, *((long long *)&v5));
    if (v0 == 1)
    {
        v7 = 0;
    }
    else
    {
        v0 = 0;
        v7 = core::slice::<impl [T]>::starts_with(v1, v2, ::0x57d660::core::char::methods::encode_utf8_raw(46, &v0), v8);
    }
    core::ptr::drop_in_place<std::ffi::os_str::OsString>(v3, v4);
    return v7;
}

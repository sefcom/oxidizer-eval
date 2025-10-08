long long uu_install::preserve_timestamps(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x120]
    unsigned long long v1;  // [bp-0x118]
    char *v2;  // [bp-0x110]
    unsigned long long v3;  // [bp-0x108]
    char *v4;  // [bp-0x100], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0xf8]
    char v6;  // [bp-0xc0], Other Possible Types: unsigned long long
    unsigned long long v7;  // [bp-0xb8]
    char *v8;  // [bp-0xb0]
    unsigned long long v9;  // [bp-0xa8]
    void* v10;  // [bp-0xa0]
    unsigned long long v11;  // [bp-0x58]
    char v12;  // [bp-0x50]
    unsigned long long v13;  // [bp-0x48]
    char v14;  // [bp-0x40]
    unsigned long long v16;  // rdx

    std::fs::metadata(&v6, a0, a1);
    if (*((int *)&v6) == 2)
    {
        v5 = v7;
        v4 = 10;
        return v4.new();
    }
    v1 = filetime::set_file_times(a2, a3, v11, *((int *)&v12), v13, *((int *)&v14));
    if (!v1)
    {
        core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v1);
        return 0;
    }
    v0 = v1;
    v4 = uucore::util_name();
    v5 = v16;
    v2 = &v4;
    v3 = <&T as core::fmt::Display>::fmt;
    v6 = &g_502188;
    v7 = 2;
    v10 = 0;
    v8 = &v2;
    v9 = 1;
    std::io::stdio::_eprint(&v6);
    v4 = &v0;
    v5 = <std::io::error::Error as core::fmt::Display>::fmt;
    v6 = &g_502510;
    v7 = 2;
    v10 = 0;
    v8 = &v4;
    v9 = 1;
    std::io::stdio::_eprint(&v6);
    core::ptr::drop_in_place<std::io::error::Error>(&v0);
    return 0;
}

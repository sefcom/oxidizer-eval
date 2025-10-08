long long uu_env::EnvAppData::make_error_no_such_file_or_dir(char a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x90]
    unsigned long long v1;  // [bp-0x88]
    char *v2;  // [bp-0x80]
    unsigned long long v3;  // [bp-0x78]
    void* v4;  // [bp-0x70]
    char *v5;  // [bp-0x60]
    unsigned long long v6;  // [bp-0x58]
    unsigned long long v7;  // [bp-0x50]
    unsigned long long v8;  // [bp-0x48]
    unsigned long long v9;  // [bp-0x40]
    char v10;  // [bp-0x38]
    unsigned long long v12;  // rdx

    v7 = uucore::util_name();
    v8 = v12;
    v5 = &v7;
    v6 = <&T as core::fmt::Display>::fmt;
    v0 = &g_510958;
    v1 = 2;
    v4 = 0;
    v2 = &v5;
    v3 = 1;
    std::io::stdio::_eprint(&v0);
    v7 = 1;
    v8 = a1;
    v9 = a2;
    v10 = 1;
    v5 = &v7;
    v6 = <os_display::Quoted as core::fmt::Display>::fmt;
    v0 = &g_510a00;
    v1 = 2;
    v4 = 0;
    v2 = &v5;
    v3 = 1;
    std::io::stdio::_eprint(&v0);
    if ((a0 & 1))
        return 127.new();
    v7 = uucore::util_name();
    v8 = v12;
    v5 = &v7;
    v6 = <&T as core::fmt::Display>::fmt;
    v0 = &g_510958;
    v1 = 2;
    v4 = 0;
    v2 = &v5;
    v3 = 1;
    std::io::stdio::_eprint(&v0);
    v7 = &g_510a40;
    v8 = <&T as core::fmt::Display>::fmt;
    v0 = &g_510a20;
    v1 = 2;
    v4 = 0;
    v2 = &v7;
    v3 = 1;
    std::io::stdio::_eprint(&v0);
    return 127.new();
}

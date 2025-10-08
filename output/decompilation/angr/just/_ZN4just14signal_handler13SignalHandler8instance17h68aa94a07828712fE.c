long long just::signal_handler::SignalHandler::instance()
{
    unsigned long long v0;  // [bp-0x118]
    char v1;  // [bp-0x110]
    void* v2;  // [bp-0x108], Other Possible Types: char *, unsigned long long
    char v3;  // [bp-0x100], Other Possible Types: unsigned long long
    unsigned long v4;  // [bp-0x100]
    unsigned long long v5;  // [bp-0xff]
    char *v6;  // [bp-0xf8]
    char v7;  // [bp-0xf7]
    unsigned long long v8;  // [bp-0xf0]
    void* v9;  // [bp-0xe8]
    char v10;  // [bp-0xd8]
    unsigned long v11;  // [bp-0xd0], Other Possible Types: unsigned long long
    char v12;  // [bp-0xc8]
    char *v13;  // [bp-0xc0]
    unsigned long long v14;  // [bp-0xb8]
    char v15;  // [bp-0xb0]
    unsigned long long v16;  // [bp-0xa0]
    unsigned long long v17;  // [bp-0x98]
    char v18;  // [bp-0x98]
    unsigned long long v19;  // [bp-0x90]
    char *v20;  // [bp-0x88]
    unsigned long long v21;  // [bp-0x80]
    void* v22;  // [bp-0x78]
    char *v23;  // [bp-0x30]
    unsigned long long v24;  // [bp-0x28]
    char v25;  // [bp-0x20]
    unsigned long long v27;  // rdx

    v10.lock();
    if (*((int *)&v10) == 1)
    {
        v0 = v11;
        v1 = v12;
        v2 = &v0;
        v4 = <std::sync::poison::PoisonError<T> as core::fmt::Display>::fmt;
        v17 = &g_830ef0;
        v19 = 1;
        v22 = 0;
        v20 = &v2;
        v21 = 1;
        v15.map_or_else(0, v27, &v17);
        memcpy(&v19, &v15, 16);
        v21 = v16;
        v18 = 29;
        v3 = 0;
        v2 = 0;
        v5 = 42949672970;
        v7 = 1;
        v25.stderr(&v2);
        v23 = &v18;
        v24 = &g_830f00;
        v13 = &v23;
        v14 = <just::color_display::Wrapper as core::fmt::Display>::fmt;
        v2 = &g_82dbd8;
        v3 = 2;
        v9 = 0;
        v6 = &v13;
        v8 = 1;
        std::io::stdio::_eprint(&v2);
        core::ptr::drop_in_place<just::error::Error>(&v18);
        std::process::exit(1); /* do not return */
    }
    return v11;
}

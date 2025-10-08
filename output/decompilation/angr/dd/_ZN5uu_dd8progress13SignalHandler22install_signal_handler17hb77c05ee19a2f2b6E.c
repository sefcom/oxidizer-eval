long long uu_dd::progress::SignalHandler::install_signal_handler(void* a0, unsigned long long a1)
{
    int v0;  // [bp-0x118], Other Possible Types: char
    unsigned long long v1;  // [bp-0x110]
    int v2;  // [bp-0x108]
    char v3;  // [bp-0xf8], Other Possible Types: unsigned long long
    char v4;  // [bp-0xf0], Other Possible Types: unsigned long
    unsigned long long v5;  // [bp-0xe8]
    unsigned long long v6;  // [bp-0xe0]
    unsigned long long v7;  // [bp-0xd8]
    unsigned long long v8;  // [bp-0xd0]
    unsigned long long v9;  // [bp-0xc8]
    int v10;  // [bp-0xc0]
    char v11;  // [bp-0xb0]
    unsigned long long v12;  // [bp-0xa0]
    int v13;  // [bp-0x98], Other Possible Types: char
    int v14;  // [bp-0x88]
    unsigned long long v15;  // [bp-0x78]
    char v16;  // [bp-0x70]
    unsigned long long v17;  // [bp-0x60]
    char v18;  // [bp-0x58]
    void* v19;  // [bp-0x40]
    unsigned long long v20;  // [bp-0x30]
    char v21;  // [bp-0x18]

    v0.new();
    if (!*((long long *)&v0))
    {
        *((unsigned long long *)&a0[8]) = v1;
        *((unsigned long long *)a0) = 0;
        return (unsigned long long)core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(a1, &g_53dc30);
    }
    v12 = v5;
    memcpy(&v11, &v3, 16);
    v10 = v2;
    v8 = *((long long *)&v0);
    v9 = v1;
    v13.clone(&v8);
    v5 = v12;
    memcpy(&v3, &v11, 16);
    v2 = v10;
    *((int128_t *)&v0) = *((int128_t *)&v8);
    v6 = a1;
    v7 = &g_53dc30;
    v20 = 0x8000000000000000;
    v19 = 0;
    v21 = 0;
    v18.spawn_unchecked(&v19, &v0);
    v16.expect(&v18);
    v3 = v15;
    v0 = v13;
    v6 = v17;
    memcpy(&v4, &v16, 16);
    a0[16] = v14;
    *(a0) = v13;
    *((unsigned long long *)&a0[48]) = v5;
    *((unsigned long long *)&a0[56]) = v6;
    *((unsigned long long *)&a0[32]) = v3;
    *((unsigned long *)&a0[40]) = v4;
    return v4;
}

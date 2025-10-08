long long forc_tx::help()
{
    unsigned long long v0;  // [bp-0xb0]
    unsigned long long v1;  // [bp-0xa8]
    unsigned long long v2;  // [bp-0xa0]
    void* v3;  // [bp-0x98]
    unsigned long long v4;  // [bp-0x90]
    unsigned long long v5;  // [bp-0x88]
    unsigned long long v6;  // [bp-0x80]
    char *v7;  // [bp-0x78], Other Possible Types: unsigned long long
    unsigned long long v8;  // [bp-0x70]
    void* v9;  // [bp-0x68]
    unsigned long long v10;  // [bp-0x50]
    unsigned long long v11;  // [bp-0x48]
    char *v12;  // [bp-0x40]
    unsigned long long v13;  // [bp-0x38]
    char *v14;  // [bp-0x30]
    unsigned long long v15;  // [bp-0x28]
    char v16;  // [bp-0x20]
    char v17;  // [bp-0x10]
    unsigned long long v19;  // rdx

    v3 = 0;
    v4 = 81604378627;
    v0 = 0x8000000000000000;
    v1 = "EXAMPLES:";
    v2 = 9;
    v10 = forc_tx::examples();
    v11 = v19;
    v12 = &v0;
    v13 = <ansiterm::display::ANSIGenericString<str> as core::fmt::Display>::fmt;
    v14 = &v10;
    v15 = <&T as core::fmt::Display>::fmt;
    v5 = &g_5d12f8;
    v6 = 2;
    v9 = 0;
    v7 = &v12;
    v8 = 2;
    v16.map_or_else(0, v19, &v5);
    core::ptr::drop_in_place<ansiterm::display::ANSIGenericString<str>>(&v0);
    v7 = *((long long *)&v17);
    memcpy(&v5, &v16, 16);
    return v5.into_boxed_slice();
}

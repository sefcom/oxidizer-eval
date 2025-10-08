long long uu_env::print_env(char a0)
{
    char v0;  // [bp-0x159]
    unsigned long long v1;  // [bp-0x158]
    unsigned long long v2;  // [bp-0x150]
    int v3;  // [bp-0x148]
    unsigned long long v4;  // [bp-0x138]
    int v5;  // [bp-0x128]
    unsigned long long v6;  // [bp-0x118]
    int v7;  // [bp-0x108]
    char v8;  // [bp-0xf8]
    char *v9;  // [bp-0xe0]
    unsigned long long v10;  // [bp-0xd8]
    char *v11;  // [bp-0xd0]
    unsigned long long v12;  // [bp-0xc8]
    char *v13;  // [bp-0xc0]
    unsigned long long v14;  // [bp-0xb8]
    unsigned long long v15;  // [bp-0xb0]
    unsigned long long v16;  // [bp-0xa8]
    char *v17;  // [bp-0xa0]
    unsigned long long v18;  // [bp-0x98]
    void* v19;  // [bp-0x90]
    int v20;  // [bp-0x80]
    unsigned long long v21;  // [bp-0x70]
    int v22;  // [bp-0x68]
    unsigned long long v23;  // [bp-0x58]
    int v24;  // [bp-0x50], Other Possible Types: char
    char v25;  // [bp-0x40]

    v0 = a0;
    v2 = std::io::stdio::stdout();
    v1 = v2.lock();
    std::env::vars(&v24);
    memcpy(&v8, &v25, 16);
    v7 = v24;
    while (true)
    {
        v20.next(&v7);
        if ((char)(((0 ^ (long long)v20) & (0 ^ -((long long)v20))) >> 63))
            break;
        v4 = v21;
        v3 = v20;
        v6 = v23;
        v5 = v22;
        v9 = &v3;
        v10 = <alloc::string::String as core::fmt::Display>::fmt;
        v11 = &v5;
        v12 = <alloc::string::String as core::fmt::Display>::fmt;
        v13 = &v0;
        v14 = <uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
        v15 = &g_510768;
        v16 = 3;
        v19 = 0;
        v17 = &v9;
        v18 = 3;
        v1.write_fmt(&v15).unwrap();
        core::ptr::drop_in_place<alloc::string::String>(&v5);
        core::ptr::drop_in_place<alloc::string::String>(&v3);
    }
    core::ptr::drop_in_place<std::env::Vars>(&v7);
    return core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v1);
}

void flealib::commandprocessor::CommandProcessor::get_temp_dir_for_screenshot(unsigned long long a0)
{
    unsigned long long v0;  // [bp-0xe8]
    unsigned long long v1;  // [bp-0xe0]
    char *v2;  // [bp-0xd8], Other Possible Types: unsigned long long
    void* v3;  // [bp-0xd0], Other Possible Types: unsigned long long
    void* v4;  // [bp-0xc8], Other Possible Types: char
    int v5;  // [bp-0xb8]
    unsigned long long v7;  // [bp-0xb0]
    unsigned long long v8;  // [bp-0xa8]
    int v9;  // [bp-0xa0], Other Possible Types: char
    char v10;  // [bp-0x90]
    char v11;  // [bp-0x84]
    char v12;  // [bp-0x78]
    unsigned long long v13;  // [bp-0x68]
    unsigned long long v15;  // rsi
    unsigned long long v16;  // rdx

    v11.now();
    v0 = "%Y-%m-%d_%H-%M-%Sscreenshot\r\nDirectory changedError: ";
    v1 = 17;
    v2 = 8;
    v3 = 0;
    v4 = 0;
    v12.format_with_items(&v11, &v0);
    *((char **)&v5) = &v12;
    v7 = <chrono::format::formatting::DelayedFormat<I> as core::fmt::Display>::fmt;
    v0 = &g_b085e8;
    v1 = 2;
    v4 = 0;
    v2 = &(unsigned long long)v5;
    v3 = 1;
    v9.map_or_else(&v0);
    ::0x76b900::core::ptr::drop_in_place<chrono::format::formatting::DelayedFormat<chrono::format::strftime::StrftimeItems>>(&v12);
    v5 = v9;
    v8 = *((long long *)&v10);
    std::env::temp_dir(&v0);
    v13 = v8;
    memcpy(&v12, &(unsigned long long)v5, 16);
    a0.join(v15, v16, &v12);
    ::0x76ba80::core::ptr::drop_in_place<std::path::PathBuf>(&v0);
    return;
}

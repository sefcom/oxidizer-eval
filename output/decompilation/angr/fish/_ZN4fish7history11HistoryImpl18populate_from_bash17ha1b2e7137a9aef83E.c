void fish::history::HistoryImpl::populate_from_bash(unsigned long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0xf0]
    unsigned long long v1;  // [bp-0xe8]
    char *v2;  // [bp-0xe0]
    unsigned long long v3;  // [bp-0xd8]
    unsigned long long v4;  // [bp-0xd0]
    unsigned long long v5;  // [bp-0xc8]
    unsigned long long v6;  // [bp-0xc0]
    int v7;  // [bp-0xb8]
    int v8;  // [bp-0xb8]
    int v9;  // [bp-0xb8]
    unsigned long long v10;  // [bp-0xa8]
    void* v11;  // [bp-0xa0]
    unsigned long long v12;  // [bp-0x98]
    void* v13;  // [bp-0x90]
    unsigned long long v14;  // [bp-0x88]
    unsigned int v15;  // [bp-0x80]
    void* v16;  // [bp-0x78]
    char v17;  // [bp-0x70]
    char v18;  // [bp-0x68]
    unsigned long long v20;  // rcx
    unsigned int v21;  // edx

    v0 = a0.timestamp_now();
    v18.split(a1);
    while (true)
    {
        v1.next(&v18);
        if (v1 == 9223372036854775809)
            break;
        if (v1 != 0x8000000000000000)
        {
            fish::common::str2wcstring(&v9, v2, v3);
            fish::wcstringutil::trim(&v4, &v9, 0, v20);
            if (!(char)fish::history::should_import_bash_history_line(v5, v6))
            {
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v4);
                v7 = v9;
            }
            else
            {
                v10 = v6;
                memcpy(&v9, &v4, 16);
                v14 = v0;
                v15 = v21;
                v11 = 0;
                v12 = 8;
                v13 = 0;
                v16 = 0;
                v17 = 0;
                a0.add(&v9, 0, 0);
                v7 = v8;
            }
            v9 = v7;
            core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v1, v2);
        }
        else
        {
            core::ptr::drop_in_place<core::result::Result<alloc::vec::Vec<u8>,std::io::error::Error>>(&v1);
            break;
        }
    }
    core::ptr::drop_in_place<std::io::Split<std::io::buffered::bufreader::BufReader<std::fs::File>>>(&v18);
    a0.save_unless_disabled();
    return;
}

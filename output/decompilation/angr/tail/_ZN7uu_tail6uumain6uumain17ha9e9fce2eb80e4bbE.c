long long uu_tail::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    int v0;  // [bp-0x138], Other Possible Types: char
    unsigned long long v1;  // [bp-0x130]
    unsigned long long v2;  // [bp-0x128]
    char v3;  // [bp-0x120], Other Possible Types: unsigned int
    int v4;  // [bp-0x110]
    char v5;  // [bp-0x100]
    unsigned long long v6;  // [bp-0xf0]
    int v7;  // [bp-0xe8], Other Possible Types: char
    unsigned long long v8;  // [bp-0xd8]
    unsigned long long v9;  // [bp-0xd0]
    unsigned long long v10;  // [bp-0xc8]
    unsigned long long v11;  // [bp-0xc0]
    char v12;  // [bp-0xb8]
    int v13;  // [bp-0xa8]
    char v14;  // [bp-0x98]
    unsigned long long v15;  // [bp-0x88]
    void* v16;  // [bp-0x80]
    unsigned long long v17;  // [bp-0x78]
    unsigned long long v18;  // [bp-0x70]
    char v19;  // [bp-0x68]
    int v20;  // [bp-0x60], Other Possible Types: char
    unsigned long long v21;  // [bp-0x50]
    int v22;  // [bp-0x48]
    unsigned long long v23;  // [bp-0x38]
    char v24;  // [bp-0x30]
    unsigned long long v25;  // [bp-0x20]
    unsigned long long v27;  // rax
    void* v28;  // rax
    unsigned long long v29;  // rax

    signal(13, 0);
    uu_tail::args::parse_args(&v0, a0, a1);
    if (*((long long *)&v0) == 5)
        return v10;
    v15 = v6;
    memcpy(&v14, &v5, 16);
    v13 = v4;
    memcpy(&v12, &v3, 16);
    v9 = *((long long *)&v0);
    v10 = v1;
    v11 = v2;
    v9.check_warnings();
    v27 = v9.verify();
    if ((char)v27 == 2)
    {
        v28 = 0;
    }
    else if ((unsigned int)v27 == 1)
    {
        v0.to_vec();
        v8 = v2;
        memcpy(&v7, &v0, 16);
        v16 = 0;
        v17 = "-tail-error-cannot-follow-stdin-by-nameError flushing stdout: ";
        v18 = 1;
        v19 = 1;
        v0.spec_to_string(&v16);
        v23 = v8;
        v22 = v7;
        memcpy(&v24, &v0, 16);
        v25 = v2;
        v0.from_iter(&v22);
        uucore::mods::locale::get_message_with_args(&v20, "tail-error-cannot-follow-stdin-by-nameError flushing stdout: ", 38, &v0);
        v3 = 1;
        v0 = v20;
        v2 = v21;
        v28 = v0.new();
    }
    else
    {
        v29 = uu_tail::uu_tail(&v9);
        ::0x4e68a0::core::ptr::drop_in_place<uu_tail::args::Settings>(&v9);
        return v29;
    }
    ::0x4e68a0::core::ptr::drop_in_place<uu_tail::args::Settings>(&v9);
    return v28;
}

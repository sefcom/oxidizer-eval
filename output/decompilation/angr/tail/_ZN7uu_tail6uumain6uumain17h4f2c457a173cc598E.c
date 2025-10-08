long long uu_tail::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0xf8], Other Possible Types: unsigned long long
    int v1;  // [bp-0xf8]
    unsigned long long v2;  // [bp-0xf0]
    char *v3;  // [bp-0xe8], Other Possible Types: unsigned long long
    char v4;  // [bp-0xe0], Other Possible Types: unsigned int, unsigned long long
    void* v5;  // [bp-0xd8]
    int v6;  // [bp-0xd0]
    char v7;  // [bp-0xc0]
    unsigned long long v8;  // [bp-0xb0]
    char *v9;  // [bp-0xa8]
    unsigned long long v10;  // [bp-0xa0]
    unsigned long long v11;  // [bp-0x98]
    unsigned long long v12;  // [bp-0x90]
    unsigned long long v13;  // [bp-0x88]
    char v14;  // [bp-0x80]
    int v15;  // [bp-0x70]
    char v16;  // [bp-0x60]
    unsigned long long v17;  // [bp-0x50]
    void* v18;  // [bp-0x48]
    unsigned long long v19;  // [bp-0x40]
    unsigned long long v20;  // [bp-0x38]
    char v21;  // [bp-0x30]
    int v22;  // [bp-0x28], Other Possible Types: char
    char v23;  // [bp-0x18]
    unsigned long long v25;  // rax
    void* v26;  // rax
    unsigned long long v27;  // rax

    uu_tail::args::parse_args(&v0, a0, a1);
    if (v0 == 5)
        return v2;
    v17 = v8;
    memcpy(&v16, &v7, 16);
    v15 = v6;
    memcpy(&v14, &v4, 16);
    v11 = v0;
    v12 = v2;
    v13 = v3;
    v11.check_warnings();
    v25 = v11.verify();
    if (!(char)v25)
    {
        v27 = uu_tail::uu_tail(&v11);
        core::ptr::drop_in_place<uu_tail::args::Settings>(&v11);
        return v27;
    }
    if ((unsigned int)v25 == 1)
    {
        v18 = 0;
        v19 = "-cannot follow /home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: ";
        v20 = 1;
        v21 = 1;
        v9 = &v18;
        v10 = <os_display::Quoted as core::fmt::Display>::fmt;
        *((unsigned long long **)&v1) = &g_571ae0;
        v2 = 2;
        v5 = 0;
        v3 = &v9;
        v4 = 1;
        v22.map_or_else(&(unsigned long long)v1);
        v4 = 1;
        v1 = v22;
        v3 = *((long long *)&v23);
        v26 = (unsigned long long)v1.new();
    }
    else
    {
        v26 = 0;
    }
    core::ptr::drop_in_place<uu_tail::args::Settings>(&v11);
    return v26;
}

long long uvx::main()
{
    unsigned long long v0;  // [bp-0x60]
    char v1;  // [bp-0x58], Other Possible Types: unsigned int
    unsigned int v2;  // [bp-0x54]
    unsigned long long v3;  // [bp-0x50]
    char *v4;  // [bp-0x48]
    unsigned long long v5;  // [bp-0x40]
    unsigned long long v6;  // [bp-0x38]
    unsigned long long v7;  // [bp-0x30]
    char *v8;  // [bp-0x28]
    unsigned long long v9;  // [bp-0x20]
    void* v10;  // [bp-0x18]
    unsigned long v12;  // rax

    uvx::run(&v1);
    if (v1 != 1)
    {
        v12 = v2;
        return (!((char)v12 & 127) ? (unsigned int)v12 >> 8 : 2);
    }
    v0 = v3;
    v4 = &v0;
    v5 = <std::io::error::Error as core::fmt::Display>::fmt;
    v6 = &g_4630a0;
    v7 = 2;
    v10 = 0;
    v8 = &v4;
    v9 = 1;
    std::io::stdio::_eprint(&v6);
    return (unsigned long long)core::ptr::drop_in_place<std::io::error::Error>(v0) & 0xffffffffffffff00 | 2;
}

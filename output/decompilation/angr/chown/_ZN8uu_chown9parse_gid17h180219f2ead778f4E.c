void uu_chown::parse_gid(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    int v0;  // [bp-0xc8]
    unsigned long long v2;  // [bp-0xc0]
    char *v3;  // [bp-0xb8], Other Possible Types: unsigned long long
    unsigned int v4;  // [bp-0xb0], Other Possible Types: unsigned long long
    void* v5;  // [bp-0xa8]
    char v6;  // [bp-0x90], Other Possible Types: unsigned long long
    char v7;  // [bp-0x88]
    char v8;  // [bp-0x78]
    char *v9;  // [bp-0x70]
    unsigned long long v10;  // [bp-0x68]
    void* v11;  // [bp-0x60]
    unsigned long long v12;  // [bp-0x58]
    unsigned long long v13;  // [bp-0x50]
    char v14;  // [bp-0x48]
    int v15;  // [bp-0x40], Other Possible Types: char
    char v16;  // [bp-0x30]
    unsigned long long v18;  // rax
    unsigned long long v19;  // rsi
    unsigned int v20;  // eax

    if (!a2)
    {
        *((unsigned int *)&a0[8]) = 0;
        *((unsigned long long *)a0) = 0;
        return;
    }
    v6.locate(a1, a2);
    if (!((char)(((0 ^ v6) & (0 ^ -(v6))) >> 63)))
    {
        v19 = *((long long *)&v7);
        v20 = *((int *)&v8);
        *((unsigned int *)&a0[8]) = 1;
        *((unsigned int *)&a0[12]) = v20;
        *((unsigned long long *)a0) = 0;
        core::ptr::drop_in_place<std::ffi::os_str::OsString>(v6, v19);
        return;
    }
    v18 = ::0x45e500::core::num::<impl u32>::from_ascii_radix(a1, a2);
    if (((char)v18 & 1))
    {
        v11 = 0;
        v12 = a3;
        v13 = a4;
        v14 = 1;
        v9 = &v11;
        v10 = <os_display::Quoted as core::fmt::Display>::fmt;
        *((unsigned long long **)&v0) = &g_4f5fa0;
        v2 = 1;
        v5 = 0;
        v3 = &v9;
        v4 = 1;
        v15.map_or_else(&(unsigned long long)v0);
        v4 = 1;
        v0 = v15;
        v3 = *((long long *)&v16);
        *((double *)a0) = (unsigned long long)v0.new();
        *((char **)&a0[8]) = &g_4f5f38;
    }
    else
    {
        *((unsigned int *)&a0[8]) = 1;
        *((unsigned int *)&a0[12]) = v18 >> 32;
        *((unsigned long long *)a0) = 0;
    }
    core::ptr::drop_in_place<core::result::Result<uucore::features::entries::Group,std::io::error::Error>>(0x8000000000000000, *((long long *)&v7));
    return;
}

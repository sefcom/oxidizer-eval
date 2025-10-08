long long just::subcommand::Subcommand::init(void* a0, struct_0 *a1)
{
    char v0;  // [bp-0xb8], Other Possible Types: unsigned long, unsigned long long
    int v1;  // [bp-0xb1]
    char v2;  // [bp-0xb0], Other Possible Types: unsigned long long
    char v3;  // [bp-0xa9]
    int v4;  // [bp-0xa8], Other Possible Types: char *
    char v5;  // [bp-0xa1], Other Possible Types: unsigned long long
    char v6;  // [bp-0xa0], Other Possible Types: unsigned long long
    unsigned long long v7;  // [bp-0x99]
    void* v8;  // [bp-0x98]
    unsigned long long v9;  // [bp-0x90]
    unsigned long long v10;  // [bp-0x88]
    int v11;  // [bp-0x80]
    unsigned long long v12;  // [bp-0x78]
    int v13;  // [bp-0x70]
    unsigned long long v14;  // [bp-0x60]
    int v15;  // [bp-0x58], Other Possible Types: char
    char v16;  // [bp-0x48]
    char *v17;  // [bp-0x30]
    unsigned long long v18;  // [bp-0x28]
    char v19;  // [bp-0x20]
    unsigned long long v21;  // rax
    int v22;  // xmm1
    unsigned long long v23;  // rax
    int v24;  // xmm1
    unsigned long long v25;  // rax
    unsigned long long v26;  // rcx
    unsigned long long v27;  // rax

    (char)v0.init(&a1->padding_80[136]);
    v21 = *((long long *)&v0);
    memcpy(&v15, &v2, 16);
    memcpy(&v16, &v6, 16);
    if ((char)(((0 ^ v21) & (0 ^ -(v21))) >> 63))
    {
        memcpy(&v5, &v16, 16);
        v1 = v15;
        *((char *)a0) = 42;
        v22 = (int128_t)v4;
        *((int128_t *)&a0[1]) = *((int128_t *)&v0);
        a0[17] = v22;
        v23 = v7;
        *((unsigned long long *)&a0[32]) = v23;
        return v23;
    }
    v24 = *((int128_t *)&v16);
    v11 = v15;
    v13 = v24;
    v10 = v21;
    v14 = v9;
    if ((char)(long long)v11.is_file(v12))
    {
        v5 = v12;
        memcpy(&v0, &v10, 16);
        *((char *)a0) = 28;
        v25 = *((long long *)&v3);
        v26 = v5;
        *((int128_t *)&a0[1]) = *((int128_t *)&v0);
        *((unsigned long long *)&a0[16]) = v25;
        *((unsigned long long *)&a0[24]) = v26;
    }
    else
    {
        v27 = std::fs::write(&v10);
        v0 = v27;
        if (v27)
        {
            *((unsigned long long *)&a0[32]) = v12;
            *((int128_t *)&a0[16]) = *((int128_t *)&v10);
            *((char *)a0) = 55;
            *((unsigned long long *)&a0[8]) = v27;
        }
        else
        {
            core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&(char)v0);
            if (a1->field_1a7)
            {
                memcpy(&v19, &v11, 16);
                v17 = &v19;
                v18 = <std::path::Display as core::fmt::Display>::fmt;
                v0 = &g_831158;
                v2 = 2;
                v8 = 0;
                v4 = &v17;
                v6 = 1;
                std::io::stdio::_eprint(&(char)v0);
            }
            *((char *)a0) = 56;
            return core::ptr::drop_in_place<just::search::Search>(&v10);
        }
    }
    return core::ptr::drop_in_place<std::path::PathBuf>(&v13);
}

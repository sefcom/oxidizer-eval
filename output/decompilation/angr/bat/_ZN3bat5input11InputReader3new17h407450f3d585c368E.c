double bat::input::InputReader::new(long long a0, long long a1)
{
    void* v0;  // [bp-0x70]
    unsigned long long v1;  // [bp-0x68]
    void* v2;  // [bp-0x60]
    unsigned long long v3;  // [bp-0x58]
    int v4;  // [bp-0x58]
    unsigned long long v5;  // [bp-0x50]
    int v6;  // [bp-0x48]
    int v7;  // [bp-0x38]
    unsigned long v8;  // [bp-0x28]
    unsigned long long v10;  // rdx
    unsigned long long v11;  // rax
    char v12;  // bpl
    unsigned long long v13;  // rax
    int v14;  // xmm0

    v0 = 0;
    v1 = 1;
    v2 = 0;
    v3 = a1.read_until(10, &v0);
    v5 = v10;
    if (((char)v3 & 1))
        core::ptr::drop_in_place<core::result::Result<u64,std::io::error::Error>>(&v3);
    if (v2)
    {
        v11 = content_inspector::inspect(1, v2);
        if ((char)v11 == 4)
        {
            bat::input::read_utf16_line(&v3, a1, &v0, 10, 0);
            if ((char)v3 == 1)
                core::ptr::drop_in_place<core::result::Result<bool,std::io::error::Error>>(&v3);
            v12 = 4;
        }
        else if ((unsigned int)v11 == 3)
        {
            bat::input::read_utf16_line(&v3, a1, &v0, 0, 10);
            if ((char)v3 == 1)
                core::ptr::drop_in_place<core::result::Result<bool,std::io::error::Error>>(&v3);
            v12 = 3;
        }
    }
    else
    {
        v12 = 7;
    }
    v8 = a1->field_30;
    *((uint128_t *)&v7) = a1->field_20;
    *((uint128_t *)&v6) = a1->field_10;
    *((uint128_t *)&v4) = a1->field_0;
    v13 = v3.new();
    a0->field_10 = v2;
    v14 = *((int128_t *)&v0);
    *((void*)&a0->field_0) = v14;
    a0->field_18 = v13;
    a0->field_20 = &g_ace530;
    a0->field_28 = v12;
    return (unsigned long long)v14;
}

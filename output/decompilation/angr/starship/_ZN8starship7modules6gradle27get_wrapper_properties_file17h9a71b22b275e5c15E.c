long long starship::modules::gradle::get_wrapper_properties_file(void* a0, unsigned long long a1[25], char a2)
{
    void* v0;  // [bp-0xb0]
    int v1;  // [bp-0xa8], Other Possible Types: unsigned long
    unsigned long v2;  // [bp-0xa0]
    unsigned long long v3;  // [bp-0x98]
    unsigned long long v4;  // [bp-0x90]
    unsigned long long v5;  // [bp-0x88]
    char v6;  // [bp-0x80]
    int v7;  // [bp-0x68], Other Possible Types: char
    char v8;  // [bp-0x58]
    char v9;  // [bp-0x40]
    void* v11;  // 4096
    unsigned long long v12;  // rax
    unsigned long v13;  // r12
    unsigned long v14;  // r15
    unsigned long long v15;  // rsi

    v7.try_begin_scan(a1);
    v11 = a0;
    if (*((long long *)&v7))
    {
        v3 = *((long long *)&v8);
        v1 = v7;
        memcpy(&v6, &v9, 16);
        v4 = &g_11f4df0;
        v5 = 1;
        if ((char)(char)v1.is_match())
        {
            starship::modules::gradle::get_wrapper_properties_file::{{closure}}(&v7, a1[23], a1[24]);
            if (*((long long *)&v7) != 0x8000000000000000)
            {
                v12 = *((long long *)&v8);
                *((unsigned long long *)&a0[16]) = v12;
                *(a0) = v7;
                return v12;
            }
            core::ptr::drop_in_place<regex::error::Error>(&v7);
        }
        v11 = a0;
        if (a2)
        {
            v13 = a1[23];
            v14 = a1[24];
            v1 = a1[23];
            v2 = a1[24];
            v3 = 1;
            v15 = 1;
            v3 = 0;
            if (!v1.advance_by(v15))
            {
                v13 = v1;
                if (v1)
                    v14 = v2;
            }
            v11 = v0;
        }
    }
    *((unsigned long long *)v11) = 0x8000000000000000;
    return 0x8000000000000000;
}

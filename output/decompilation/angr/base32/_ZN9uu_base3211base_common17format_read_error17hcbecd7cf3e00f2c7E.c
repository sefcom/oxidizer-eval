long long uu_base32::base_common::format_read_error(unsigned long a0, char a1)
{
    char v0;  // [bp-0xc1]
    char *v1;  // [bp-0xc0], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0xb8]
    void* v3;  // [bp-0xb0]
    unsigned long long v4;  // [bp-0xa8]
    unsigned long long v5;  // [bp-0xa0]
    void* v6;  // [bp-0x98]
    unsigned long long v7;  // [bp-0x90]
    char v8;  // [bp-0x88]
    unsigned long long v9;  // [bp-0x80]
    unsigned long long v10;  // [bp-0x78]
    unsigned long long v11;  // [bp-0x70]
    unsigned long long v12;  // [bp-0x68]
    char *v13;  // [bp-0x60]
    unsigned long long v14;  // [bp-0x58]
    void* v15;  // [bp-0x50]
    char v16;  // [bp-0x3c]
    unsigned long long v18;  // r14
    unsigned long long v19;  // rdx
    unsigned long long v20;  // rax
    unsigned int v21;  // edx
    unsigned int v22;  // edx
    unsigned int v23;  // eax

    v0 = a1;
    v8.spec_to_string(&v0);
    v18 = v10;
    v4 = v18.with_capacity_in(1, 1, &g_50e438);
    v5 = v19;
    v6 = 0;
    v1 = v9;
    v2 = v18 + v9;
    v3 = 0;
    v20 = v1.next();
    if ((unsigned int)v19 != 0x110000)
    {
        do
        {
            v22 = v21;
            if (v20)
            {
                v4.push(v22);
            }
            else
            {
                core::unicode::unicode_data::conversions::to_upper(&v16, v22);
                v11.new(&v16);
                while (true)
                {
                    v23 = v11.next();
                    if (v23 == 0x110000)
                        break;
                    v4.push(v23);
                }
            }
            v20 = v1.next();
            v21 = v19;
        } while ((unsigned int)v19 != 0x110000);
    }
    v1 = &v4;
    v2 = <alloc::string::String as core::fmt::Display>::fmt;
    v11 = &g_50e428;
    v12 = 1;
    v15 = 0;
    v13 = &v1;
    v14 = 1;
    v7.map_or_else(&v11);
    core::ptr::drop_in_place<alloc::string::String>(&v4);
    core::ptr::drop_in_place<alloc::string::String>(&v8);
    return a0;
}

long long uu_join::Spec::parse(void* a0, unsigned long long a1, unsigned long long a2)
{
    char *v0;  // [bp-0xb0]
    unsigned long long v1;  // [bp-0xa8]
    void* v2;  // [bp-0xa0]
    unsigned long long v3;  // [bp-0x98]
    unsigned long long v4;  // [bp-0x90]
    char v5;  // [bp-0x88]
    unsigned long long v6;  // [bp-0x80]
    unsigned long long v7;  // [bp-0x78]
    char v8;  // [bp-0x70], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v9;  // [bp-0x68]
    char *v10;  // [bp-0x60]
    unsigned long long v11;  // [bp-0x58]
    void* v12;  // [bp-0x50]
    char v13;  // [bp-0x40]
    unsigned int v14;  // [bp-0x28]
    unsigned int v16;  // edx
    unsigned int v18;  // eax
    char v19;  // bpl

    v6 = a1;
    v7 = a1 + a2;
    v18 = (((char)core::str::validations::next_code_point(&v6) & 1) ? v16 : 0x110000);
    if (v18 != 48)
    {
        if (v18 != 49)
        {
            if (v18 != 50)
            {
                v2 = 0;
                v3 = a1;
                v4 = a2;
                v5 = 1;
                v0 = &v2;
                v1 = <os_display::Quoted as core::fmt::Display>::fmt;
                v8 = 5235504;
                v9 = 1;
                v12 = 0;
                v10 = &v0;
                v11 = 1;
                v13.map_or_else(&v8);
                v14 = 1;
                *((double *)&a0[8]) = v13.new();
                *((unsigned long long *)&a0[16]) = 5235552;
                *((unsigned long long *)a0) = 1;
                return 1;
            }
            v19 = 1;
            if (((char)core::str::validations::next_code_point(&v6) & 1))
                goto LABEL_46d16e;
        }
        else if (((char)core::str::validations::next_code_point(&v6) & 1))
        {
LABEL_46d16e:
            if (v16 == 46)
            {
                uu_join::parse_field_number(&v8, v6, v7 - v6);
                if (!v8)
                {
                    *((char *)&a0[8]) = 1;
                    *((char *)&a0[9]) = v19;
                    *((unsigned long long *)&a0[16]) = v9;
                    *((unsigned long long *)a0) = 0;
                    return 0;
                }
                *((unsigned long *)&a0[8]) = v8;
                *((unsigned long long *)&a0[16]) = v9;
                *((unsigned long long *)a0) = 1;
                return 1;
            }
        }
    }
    else
    {
        if (!((char)core::str::validations::next_code_point(&v6) & 1))
        {
            *((char *)&a0[8]) = 0;
            *((unsigned long long *)a0) = 0;
            return 0;
        }
    }
    v2 = 0;
    v3 = a1;
    v4 = a2;
    v5 = 1;
    v0 = &v2;
    v1 = <os_display::Quoted as core::fmt::Display>::fmt;
    v8 = &g_4fe320;
    v9 = 1;
    v12 = 0;
    v10 = &v0;
    v11 = 1;
    v13.map_or_else(&v8);
    v14 = 1;
    *((double *)&a0[8]) = v13.new();
    *((unsigned long long **)&a0[16]) = &g_4fe360;
    *((unsigned long long *)a0) = 1;
    return 1;
}

long long bat::vscreen::Attributes::parse_color(struct_0 *a0, unsigned short a1, unsigned long long a2)
{
    unsigned short v0;  // [bp-0x9a]
    char *v1;  // [bp-0x98]
    unsigned long long v2;  // [bp-0x90]
    char *v3;  // [bp-0x88]
    unsigned long long v4;  // [bp-0x80]
    unsigned long long v5;  // [bp-0x78]
    unsigned long long v6;  // [bp-0x70]
    char *v7;  // [bp-0x68]
    unsigned long long v8;  // [bp-0x60]
    void* v9;  // [bp-0x58]
    int v10;  // [bp-0x48], Other Possible Types: char
    unsigned long v11;  // [bp-0x38]
    char v12;  // [bp-0x30], Other Possible Types: unsigned short
    unsigned long v14;  // rax
    char v15;  // cl
    unsigned long v16;  // rdx
    unsigned short v17;  // dx

    v0 = a1;
    v14 = a1;
    v15 = ((char)((unsigned int)v14 * 205 >> 10) & 254) * 5;
    if ((char)(v14 - v15) != 8)
    {
        if ((char)v14 - v15 == 9)
        {
            a0 = a0;
            return a0.to_vec(1, 0);
        }
        v1 = &v0;
        v2 = core::fmt::num::imp::<impl core::fmt::Display for u16>::fmt;
        v5 = &g_acee00;
        v6 = 2;
        v9 = 0;
        v7 = &v1;
        v8 = 1;
    }
    else if (!((char)a2.next() & 1))
    {
        return a0.to_vec(1, 0);
    }
    else if ((unsigned short)v16 != 2)
    {
        if ((unsigned int)v16 == 5)
        {
            bat::vscreen::join(&v12, 1, a2);
            v1 = &v0;
            v2 = core::fmt::num::imp::<impl core::fmt::Display for u16>::fmt;
            v3 = &v12;
            v4 = <alloc::string::String as core::fmt::Display>::fmt;
            v5 = &g_aced70;
            v6 = 3;
            v9 = 0;
            v7 = &v1;
            v8 = 2;
            v10.map_or_else(0, a2, &v5);
            core::ptr::drop_in_place<alloc::string::String>(&v12);
            a0->field_10 = v11;
            *((void*)&a0->field_0) = v10;
            return v11;
        }
        v12 = v16;
        v1 = &v0;
        v2 = core::fmt::num::imp::<impl core::fmt::Display for u16>::fmt;
        v3 = &v12;
        v4 = core::fmt::num::imp::<impl core::fmt::Display for u16>::fmt;
        v5 = &g_acedd0;
        v6 = 3;
        v9 = 0;
        v7 = &v1;
        v8 = 2;
    }
    else
    {
        bat::vscreen::join(&(char)v12, 3, a2);
        v1 = &v0;
        v2 = core::fmt::num::imp::<impl core::fmt::Display for u16>::fmt;
        v3 = &(char)v12;
        v4 = <alloc::string::String as core::fmt::Display>::fmt;
        v5 = &g_aceda0;
        v6 = 3;
        v9 = 0;
        v7 = &v1;
        v8 = 2;
        v10.map_or_else(0, a2, &v5);
        core::ptr::drop_in_place<alloc::string::String>(&v12);
        a0->field_10 = v11;
        *((void*)&a0->field_0) = v10;
        return v11;
    }
    return a0.map_or_else(0, v17, &v5);
}

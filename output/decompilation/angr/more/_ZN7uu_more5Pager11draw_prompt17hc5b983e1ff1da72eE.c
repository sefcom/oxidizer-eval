void uu_more::Pager::draw_prompt(struct_0 *a0, unsigned long long a1, unsigned long a2, unsigned int a3)
{
    unsigned long long v0;  // [bp-0x108]
    unsigned long long v1;  // [bp-0x100]
    char *v2;  // [bp-0xf8]
    unsigned long long v3;  // [bp-0xf0]
    void* v4;  // [bp-0xe8], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0xe0]
    char *v6;  // [bp-0xd8], Other Possible Types: unsigned short
    unsigned long long v7;  // [bp-0xd0]
    char *v8;  // [bp-0xc0], Other Possible Types: unsigned long long
    char *v9;  // [sp-0xb8], Other Possible Types: unsigned long long
    char *v10;  // [bp-0xb0], Other Possible Types: unsigned long long
    char *v11;  // [bp-0xb0], Other Possible Types: unsigned long long
    unsigned long long v12;  // [bp-0xa8]
    void* v13;  // [bp-0xa0]
    unsigned int v14;  // [bp-0x8c]
    int v15;  // [bp-0x88], Other Possible Types: char
    unsigned long long v16;  // [bp-0x78]
    int v17;  // [bp-0x68], Other Possible Types: char
    unsigned long long v18;  // [bp-0x58]
    char v19;  // [bp-0x48]
    char *v21;  // rax
    char *v23;  // rax
    char *v24;  // rcx
    char *v26;  // rax
    int v27;  // xmm1
    char v28;  // bpl

    if (a2 == a0->field_70)
    {
        v21 = a0->field_60;
        v23 = v21;
        v24 = 1;
        if (v23)
        {
            v23 = a0->field_68;
            v24 = v21;
        }
        v8 = v24;
        v9 = v23;
        v6 = &v8;
        v7 = <&T as core::fmt::Display>::fmt;
        v0 = &g_525360;
        v1 = 1;
        v4 = 0;
        v26 = &v6;
    }
    else
    {
        v27 = InterleaveLOV(0x4530000043300000, a0->field_70) - 0x45300000000000004330000000000000;
        round();
        v6 = (unsigned short)(MinV(0x40efffe000000000, MaxV(0, MulV(DivV(AddV((unsigned long long)(InterleaveLOV(0x4530000043300000, a2) - 0x45300000000000004330000000000000 >> 64) CONCAT (unsigned long long)(InterleaveLOV(0x4530000043300000, a2) - 0x45300000000000004330000000000000 >> 64), InterleaveLOV(0x4530000043300000, a2) - 0x45300000000000004330000000000000), AddV((unsigned long long)(v27 >> 64) CONCAT (unsigned long long)(v27 >> 64), v27)), 0x4059000000000000))));
        v8 = &v6;
        v9 = core::fmt::num::imp::<impl core::fmt::Display for u16>::fmt;
        v0 = &g_525370;
        v1 = 2;
        v4 = 0;
        v26 = &v8;
    }
    v2 = v26;
    v3 = 1;
    v19.map_or_else(&v0);
    v6 = &v19;
    v7 = <alloc::string::String as core::fmt::Display>::fmt;
    v0 = &g_525390;
    v1 = 2;
    v4 = 0;
    v2 = &v6;
    v3 = 1;
    v8.map_or_else(&v0);
    memcpy(&v17, &v8, 16);
    v18 = v10;
    if (a0->field_80)
    {
        if (a3 == 0x110000)
        {
            v6 = &v17;
            v7 = <alloc::string::String as core::fmt::Display>::fmt;
            v0 = &g_5253e0;
            v1 = 2;
            v4 = 0;
            v2 = &v6;
            v3 = 1;
            v8.map_or_else(&v0);
            memcpy(&v15, &v8, 16);
        }
        else
        {
            v14 = a3;
            v8 = &v17;
            v9 = <alloc::string::String as core::fmt::Display>::fmt;
            v11 = &v14;
            v12 = <char as core::fmt::Display>::fmt;
            v0 = &g_5253b0;
            v1 = 3;
            v4 = 0;
            v2 = &v8;
            v3 = 2;
            v6.map_or_else(&v0);
            memcpy(&v15, &v6, 16);
        }
        v16 = v10;
        v28 = 1;
    }
    else if (a3 == 0x110000)
    {
        v16 = v18;
        v15 = v17;
    }
    else
    {
        v8 = &v17;
        v9 = <alloc::string::String as core::fmt::Display>::fmt;
        v11 = &g_525430;
        v12 = <&T as core::fmt::Display>::fmt;
        v0 = &g_41f780;
        v1 = 2;
        v4 = 0;
        v2 = &v8;
        v3 = 2;
        v6.map_or_else(&v0);
    }
    v0 = &g_41f8c1;
    v1 = <crossterm::style::types::attribute::Attribute as core::fmt::Display>::fmt;
    v2 = &v15;
    v3 = <alloc::string::String as core::fmt::Display>::fmt;
    v4 = &g_41f8c2;
    v5 = <crossterm::style::types::attribute::Attribute as core::fmt::Display>::fmt;
    v8 = &g_525400;
    v9 = 3;
    v13 = 0;
    v10 = &v0;
    v12 = 3;
    a1.write_fmt(&v8).unwrap(&g_525440);
    core::ptr::drop_in_place<alloc::string::String>(&v15);
    if (v28)
        core::ptr::drop_in_place<alloc::string::String>(&v17);
    core::ptr::drop_in_place<alloc::string::String>(&v19);
    return;
}

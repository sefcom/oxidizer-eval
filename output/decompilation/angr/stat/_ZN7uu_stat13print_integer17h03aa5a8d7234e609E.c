void uu_stat::print_integer(unsigned long long a0, char a1[6], unsigned int a2, unsigned long a3, unsigned long a4, char a5)
{
    char *v0;  // [bp-0xe8], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0xe0]
    char *v2;  // [bp-0xd8], Other Possible Types: unsigned long long
    int v3;  // [bp-0xd0], Other Possible Types: unsigned long long
    void* v4;  // [bp-0xc8]
    unsigned short v5;  // [bp-0xc0]
    unsigned long long v7;  // [bp-0xb0]
    unsigned long long v8;  // [bp-0xa8]
    unsigned long long v9;  // [bp-0xa0]
    char v10;  // [bp-0x98]
    unsigned long long v11;  // [bp-0x88]
    char *v12;  // [bp-0x80]
    unsigned long long v13;  // [bp-0x78]
    char *v14;  // [bp-0x70]
    unsigned long long v15;  // [bp-0x68]
    unsigned long long v16;  // [bp-0x60]
    unsigned long long v17;  // [bp-0x58]
    unsigned long long v18;  // [bp-0x50]
    unsigned long v19;  // [bp-0x48]
    char v20;  // [bp-0x40]
    unsigned long long v21;  // [bp-0x38]
    char v22;  // [bp-0x30]
    unsigned long v24;  // rax
    unsigned long long v25;  // rsi

    v20.spec_to_string(a0);
    if (a1[5])
    {
        uu_stat::group_num(&(char)v7, v21, *((long long *)&v22));
    }
    else
    {
        v8 = v21;
        v9 = *((long long *)&v22);
        v7 = 0x8000000000000000;
    }
    v24 = a1[3];
    if (!a1[4])
    {
        v25 = (!((char)v24 & 1) ? 1 : " +");
        if (!a1[4])
            goto LABEL_474413;
LABEL_474412:
        v24 = 1;
    }
    else
    {
        v25 = "+";
        if (a1[4])
            goto LABEL_474412;
LABEL_474413:
    }
    v18 = v25;
    v19 = v24;
    if (!a3)
    {
        v12 = &v18;
        v13 = <&T as core::fmt::Display>::fmt;
        v14 = &(char)v7;
        v15 = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
        v0 = &g_41cfd0;
        v1 = 2;
        v4 = 0;
        v2 = &v12;
        v3 = 2;
        v10.map_or_else(&v0);
    }
    else if (a3 == 1)
    {
        v12 = &v18;
        v13 = <&T as core::fmt::Display>::fmt;
        v14 = &(char)v7;
        v15 = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
        v0 = &g_41cfd0;
        v1 = 2;
        v4 = 0;
        v2 = &v12;
        v3 = 2;
        v10.map_or_else(&v0);
    }
    else if (a4 <= 65535)
    {
        v0 = &v18;
        v1 = <&T as core::fmt::Display>::fmt;
        v2 = &(char)v7;
        v3 = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
        v4 = 0;
        v5 = a4;
        v12 = &g_41cfd0;
        v13 = 2;
        v16 = &g_41d528;
        v17 = 2;
        v14 = &v0;
        v15 = 3;
        v10.map_or_else(&v12);
    }
    else
    {
        v0 = &g_519960;
        v1 = 1;
        v2 = 8;
        *((uint128_t *)&v3) = 0;
        core::panicking::panic_fmt(&v0, &g_519c68); /* do not return */
    }
    memcpy(&v0, &v10, 16);
    v2 = v11;
    uu_stat::pad_and_print(v1, v2, a1[2], a2, a5);
    core::ptr::drop_in_place<alloc::string::String>(&v0);
    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&(char)v7);
    core::ptr::drop_in_place<alloc::string::String>(&v20);
    return;
}

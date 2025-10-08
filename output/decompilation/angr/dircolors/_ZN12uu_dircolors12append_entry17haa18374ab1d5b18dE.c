long long uu_dircolors::append_entry(unsigned long long *a0, unsigned long long a1, char *a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, unsigned int a7)
{
    unsigned int v0;  // [bp-0xf8], Other Possible Types: unsigned long long
    int v1;  // [bp-0xf8]
    unsigned long long v2;  // [bp-0xf0]
    char *v3;  // [bp-0xe8], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0xe0]
    void* v5;  // [bp-0xd8], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0xd0]
    char *v7;  // [bp-0xc0]
    unsigned long long v8;  // [bp-0xb8]
    char *v9;  // [bp-0xb0]
    unsigned long long v10;  // [bp-0xa8]
    char v11;  // [bp-0xa0]
    unsigned long long v12;  // [bp-0x98]
    unsigned long v13;  // [bp-0x90], Other Possible Types: unsigned long long
    char v14;  // [bp-0x88], Other Possible Types: unsigned long
    unsigned long v15;  // [bp-0x80]
    unsigned long v16;  // [bp-0x68]
    char v17;  // [bp-0x60]
    unsigned long long v18;  // [bp-0x50]
    unsigned long long v19;  // [bp-0x48]
    unsigned long long v20;  // [bp-0x40]
    unsigned long long v21;  // [bp-0x38]
    unsigned long long v22;  // [bp-0x20]
    unsigned long long v23;  // r13
    char *v24;  // rdi
    unsigned long long v25;  // rax

    v22 = v23;
    v18 = a3;
    v19 = a4;
    v20 = a5;
    v21 = a6;
    memcpy(&v17, &a7, 16);
    if ((char)a3.is_prefix_of(a4))
    {
        v0 = 0;
        if ((char)core::slice::<impl [T]>::starts_with(a3, a4, ::0x465e50::core::char::methods::encode_utf8_raw(46, &v0)))
        {
            v7 = &v18;
            v8 = <&T as core::fmt::Display>::fmt;
            v0 = &g_4f5e80;
            v2 = 1;
            v5 = 0;
            v3 = &v7;
            v4 = 1;
            v14.map_or_else(&v0);
            if (*(a2) == 2)
                goto LABEL_4692df;
LABEL_4691ed:
            v7 = &v14;
            v8 = <alloc::string::String as core::fmt::Display>::fmt;
            v9 = &v17;
            v10 = <&T as core::fmt::Display>::fmt;
            v0 = &g_4f5e90;
            v2 = 3;
            v5 = 0;
            v3 = &v7;
            v4 = 2;
            v11.map_or_else(&v0);
        }
        else
        {
            v14.to_vec(a3, a4);
            if (*(a2) != 2)
                goto LABEL_4691ed;
LABEL_4692df:
            v7 = &v17;
            v8 = <&T as core::fmt::Display>::fmt;
            v9 = &v14;
            v10 = <alloc::string::String as core::fmt::Display>::fmt;
            v0 = &g_4f5ed0;
            v2 = 4;
            v5 = &g_41c128;
            v6 = 3;
            v3 = &v7;
            v4 = 2;
            v11.map_or_else(&v0);
        }
        *((int128_t *)&v1) = *((int128_t *)&v11);
        v3 = v13;
        a1.spec_extend(v2, v3 + v2);
        *(a0) = 0x8000000000000000;
        core::ptr::drop_in_place<alloc::string::String>(&v0);
        v24 = &v14;
    }
    else
    {
        if ((char)a5.equal(a6, "optionscolor", 7) || (char)a5.equal(a6, "color", 5) || (char)a5.equal(a6, "eightbitESTRPIPENotFoundTimedOutENETDOWN\n       ", 8))
        {
            *(a0) = 0x8000000000000000;
            return a0;
        }
        v14 = _ZN6uucore8features6colors20FILE_ATTRIBUTE_CODES17h3c0cf231055d2aeeE;
        v15 = _ZN6uucore8features6colors20FILE_ATTRIBUTE_CODES17h3c0cf231055d2aeeE + 1184;
        v25 = v14.find(&v20);
        if (!v25)
        {
            v7 = &v18;
            v8 = <&T as core::fmt::Display>::fmt;
            v0 = &g_4f5ec0;
            v2 = 1;
            v5 = 0;
            v3 = &v7;
            v4 = 1;
            a0.map_or_else(&v0);
            return a0;
        }
        v16 = v25 + 16;
        if (*(a2) == 2)
        {
            v7 = &v17;
            v8 = <&T as core::fmt::Display>::fmt;
            v9 = &v16;
            v10 = <&T as core::fmt::Display>::fmt;
            v0 = &g_4f5ed0;
            v2 = 4;
            v5 = &g_41c128;
            v6 = 3;
        }
        else
        {
            v7 = &v16;
            v8 = <&T as core::fmt::Display>::fmt;
            v9 = &v17;
            v10 = <&T as core::fmt::Display>::fmt;
            v0 = &g_4f5e90;
            v2 = 3;
            v5 = 0;
        }
        v3 = &v7;
        v4 = 2;
        v11.map_or_else(&v0);
        a1.spec_extend(v12, v13 + v12);
        *(a0) = 0x8000000000000000;
        v24 = &v11;
    }
    core::ptr::drop_in_place<alloc::string::String>(v24);
    return a0;
}

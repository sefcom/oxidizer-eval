long long just::function::env_var(struct_2 *a0, struct_0 **a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0xd8]
    unsigned long long v1;  // [bp-0xd0]
    unsigned long long v2;  // [bp-0xc8]
    unsigned long long v3;  // [bp-0xc0]
    char *v4;  // [bp-0xb8]
    unsigned long long v5;  // [bp-0xb0]
    void* v6;  // [bp-0xa8]
    char *v7;  // [bp-0x98]
    unsigned long long v8;  // [bp-0x90]
    char *v9;  // [bp-0x88]
    unsigned long long v10;  // [bp-0x80]
    int v11;  // [bp-0x78]
    unsigned long long v12;  // [bp-0x68]
    int v13;  // [bp-0x58], Other Possible Types: char
    unsigned long long v14;  // [bp-0x48]
    char v15;  // [bp-0x40]
    int v16;  // [bp-0x38], Other Possible Types: char
    char v17;  // [bp-0x28]
    unsigned long long v19;  // rax

    v0 = a2;
    v1 = a3;
    v19 = *(a1)->field_8->field_0.get(*(a1)->field_8->field_8, a2, a3);
    if (v19)
    {
        (&a0->field_0)[1].clone(v19);
    }
    else
    {
        std::env::var(&v15, a2, a3);
        if ((v15 & 1))
        {
            if ((char)(((0 ^ *((long long *)&v16)) & (0 ^ -(*((long long *)&v16)))) >> 63))
            {
                v7 = &v0;
                v8 = <&T as core::fmt::Display>::fmt;
                v2 = &g_82fe48;
                v3 = 2;
                v6 = 0;
                v4 = &v7;
                v5 = 1;
                (&a0->field_0)[1].map_or_else(0, a2, &v2);
                a0->field_0 = 1;
                return a0;
            }
            v12 = *((long long *)&v17);
            v11 = v16;
            v7 = &v0;
            v8 = <&T as core::fmt::Display>::fmt;
            v9 = &v11;
            v10 = <std::sys::os_str::bytes::Buf as core::fmt::Debug>::fmt;
            v2 = &g_82fe68;
            v3 = 2;
            v6 = 0;
            v4 = &v7;
            v5 = 2;
            v13.map_or_else(0, a2, &v2);
            *((unsigned long long *)((char *)&a0->field_8 + 8)) = v14;
            *((void*)&(&a0->field_0)[1]) = v13;
            a0->field_0 = 1;
            core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v11);
            return a0;
        }
        *((long long *)((char *)&a0->field_8 + 8)) = *((long long *)&v17);
        *((void*)&(&a0->field_0)[1]) = v16;
    }
    a0->field_0 = 0;
    return a0;
}

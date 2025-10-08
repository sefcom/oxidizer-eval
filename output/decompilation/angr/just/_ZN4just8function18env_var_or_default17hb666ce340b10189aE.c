long long just::function::env_var_or_default(struct_2 *a0, struct_0 **a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    int v0;  // [bp-0xe8]
    unsigned long long v1;  // [bp-0xd8]
    unsigned long long v2;  // [bp-0xc8]
    unsigned long long v3;  // [bp-0xc0]
    char *v4;  // [bp-0xb8]
    unsigned long long v5;  // [bp-0xb0]
    char *v6;  // [bp-0xa8]
    unsigned long long v7;  // [bp-0xa0]
    int v8;  // [bp-0x98], Other Possible Types: char
    unsigned long v9;  // [bp-0x88]
    unsigned long long v10;  // [bp-0x80]
    unsigned long long v11;  // [bp-0x78]
    char *v12;  // [bp-0x70]
    unsigned long long v13;  // [bp-0x68]
    void* v14;  // [bp-0x60]
    char v15;  // [bp-0x50]
    int v16;  // [bp-0x48], Other Possible Types: char
    char v17;  // [bp-0x38]
    unsigned long long v19;  // rax

    v2 = a2;
    v3 = a3;
    v19 = *(a1)->field_8->field_0.get(*(a1)->field_8->field_8, a2, a3);
    if (v19)
    {
        (&a0->field_0)[1].clone(v19);
    }
    else
    {
        std::env::var(&v15, a2, a3);
        if (!(v15 & 1))
        {
            *((long long *)((char *)&a0->field_8 + 8)) = *((long long *)&v17);
            *((void*)&(&a0->field_0)[1]) = v16;
        }
        else if ((char)(((0 ^ *((long long *)&v16)) & (0 ^ -(*((long long *)&v16)))) >> 63))
        {
            (&a0->field_0)[1].to_vec(a4, a5);
        }
        else
        {
            v1 = *((long long *)&v17);
            v0 = v16;
            v4 = &v2;
            v5 = <&T as core::fmt::Display>::fmt;
            v6 = &v0;
            v7 = <std::sys::os_str::bytes::Buf as core::fmt::Debug>::fmt;
            v10 = &g_82fe68;
            v11 = 2;
            v14 = 0;
            v12 = &v4;
            v13 = 2;
            v8.map_or_else(0, a2, &v10);
            *((unsigned long *)((char *)&a0->field_8 + 8)) = v9;
            *((void*)&(&a0->field_0)[1]) = v8;
            a0->field_0 = 1;
            core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v0);
            return a0;
        }
    }
    a0->field_0 = 0;
    return a0;
}

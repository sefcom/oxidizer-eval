long long uu_pr::get_formatted_line_number(struct_0 *a0, unsigned long long a1[31], unsigned long long a2, unsigned long a3)
{
    unsigned long v0;  // [bp-0x160]
    unsigned long long v1;  // [bp-0x158]
    unsigned long long v2;  // [bp-0x150]
    char *v3;  // [bp-0x148]
    unsigned long long v4;  // [bp-0x140]
    char *v5;  // [bp-0x138]
    unsigned long long v6;  // [bp-0x130]
    char *v7;  // [bp-0x128]
    unsigned long long v8;  // [bp-0x120]
    char *v9;  // [bp-0x118]
    unsigned long long v10;  // [bp-0x110]
    void* v11;  // [bp-0x108]
    unsigned long v12;  // [bp-0x100]
    unsigned long long v13;  // [bp-0xf8]
    unsigned long long v14;  // [bp-0xf0]
    unsigned long long v15;  // [bp-0xe0]
    unsigned long long v16;  // [bp-0xd8]
    void* v17;  // [bp-0xd0]
    unsigned long long v18;  // [bp-0xc8]
    char v19;  // [bp-0xc0]
    unsigned long long v20;  // [bp-0xb8]
    unsigned long long v21;  // [bp-0xa8]
    unsigned long long v22;  // [bp-0x98]
    unsigned long long v23;  // [bp-0x90]
    char v24;  // [bp-0x88]
    char v25;  // [bp-0x80]
    unsigned long long v26;  // [bp-0x78]
    unsigned long long v27;  // [bp-0x70]
    unsigned long long v28;  // [bp-0x68]
    unsigned long long v29;  // [bp-0x60]
    char v30;  // [bp-0x58]
    char v31;  // [bp-0x40]
    void* v33;  // rax
    unsigned long v34;  // r13
    unsigned long long v35;  // r14
    unsigned long long v36;  // r14
    struct_1 *v37;  // rbx
    unsigned long long v38;  // rax
    unsigned long long v39;  // rdx

    v13 = a2;
    v33 = 0;
    if (!((char)(((0 ^ a1[27]) & (0 ^ -(a1[27]))) >> 63)))
    {
        if (a1[2])
        {
            v33 = a3;
            if (!!a2 && !a3)
                goto LABEL_5af808;
        }
        else if (a2)
        {
LABEL_5af808:
            v25.spec_to_string(&v13);
            v34 = a1[30];
            v0 = &a1[27];
            v35 = v27;
            v36 = v35 - v34;
            if (v35 < v34)
            {
                v7 = &v25;
                v8 = <alloc::string::String as core::fmt::Display>::fmt;
                v9 = &v0;
                v10 = <&T as core::fmt::Display>::fmt;
                v11 = 0;
                v12 = v34;
                v14 = 2;
                v15 = 1;
                v16 = 2;
                v17 = 0;
                v18 = 32;
                v19 = 1;
                v20 = 2;
                v21 = 2;
                v22 = 1;
                v23 = 32;
                v24 = 3;
                v1 = &g_489b10;
                v2 = 2;
                v5 = &v14;
                v6 = 2;
                v3 = &v7;
                v4 = 3;
                v37 = &v31;
                v31.map_or_else(&v1);
            }
            else
            {
                v38 = v36.get(v26, v35);
                if (!v38)
                    core::str::slice_error_fail(v26, v35, v36, v35, &g_755fb8); /* do not return */
                v28 = v38;
                v29 = v39;
                v7 = &v28;
                v8 = <&T as core::fmt::Display>::fmt;
                v9 = &v0;
                v10 = <&T as core::fmt::Display>::fmt;
                v11 = 0;
                v12 = v34;
                v14 = 2;
                v15 = 1;
                v16 = 2;
                v17 = 0;
                v18 = 32;
                v19 = 1;
                v20 = 2;
                v21 = 2;
                v22 = 1;
                v23 = 32;
                v24 = 3;
                v1 = &g_489b10;
                v2 = 2;
                v5 = &v14;
                v6 = 2;
                v3 = &v7;
                v4 = 3;
                v37 = &v30;
                v30.map_or_else(&v1);
            }
            a0->field_10 = v37->field_10;
            *((char [16])&a0->field_0) = v37->field_0;
            return (unsigned long long)::0x5a6940::core::ptr::drop_in_place<alloc::string::String>(&v25);
        }
    }
    *((unsigned long long *)&a0->field_0) = 0;
    *((unsigned long long *)&a0->padding_1[7]) = 1;
    a0->field_10 = 0;
    return v33;
}

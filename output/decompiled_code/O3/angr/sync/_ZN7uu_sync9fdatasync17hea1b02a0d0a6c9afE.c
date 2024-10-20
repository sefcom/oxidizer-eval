long long uu_sync::fdatasync::hea1b02a0d0a6c9af(struct_2 *a0, unsigned long a1)
{
    unsigned long long v0;  // [sp-0x80]
    char v1;  // [bp-0x78], Other Possible Types: unsigned int
    unsigned short v2;  // [sp-0x74]
    struct_0 *v3;  // [sp-0x70]
    unsigned long long v4;  // [sp-0x68]
    char v5;  // [bp-0x60]
    char v6;  // [bp-0x5c]
    char v7;  // [bp-0x58]
    struct_0 *v8;  // [sp-0x50]
    struct_0 *v9;  // [sp-0x48]
    unsigned long long v10;  // [sp-0x40]
    unsigned long long v11;  // [sp-0x38]
    unsigned long long v12;  // [sp-0x30]
    unsigned long long v13;  // [sp-0x10]
    unsigned long v15;  // r15
    unsigned long v16;  // rbx
    struct_0 *v17;  // rbx
    unsigned long long v18;  // rax
    unsigned long long v19;  // r12
    unsigned long long v20[3];  // r14
    unsigned long long v21;  // r13
    unsigned long long v22;  // rcx
    unsigned long long v24;  // r14
    struct_1 *v25;  // rbx
    unsigned long long v27;  // r14

    v13 = v15;
    v12 = v16;
    v17 = a0->field_8;
    v18 = a0->field_10;
    v8 = v17;
    v4 = a0->field_0;
    v10 = v4;
    v11 = &v17[3 * v18];
    v3 = v17;
    if (v18)
    {
        v17 = v3 + 3;
        while (true)
        {
            v19 = v17[3].field_-18;
            if (v19 == 0x8000000000000000)
                break;
            v20 = v17 + 3;
            v21 = v20[1];
            v22 = v20[2];
            v0 = 0x1b600000000;
            v2 = 0;
            v1 = 0;
            v1 = 1;
            std::fs::OpenOptions::_open::h7e99c13f64b1d4fc(&v5, &v0, v21, v22);
            if (v19)
                __rust_dealloc(v21);
            if (*((int *)&v5))
            {
                v9 = v17;
                v0 = *((long long *)&v7);
                core::result::unwrap_failed::h39784290e544308e(); /* do not return */
            }
            syscall(75);
            close(*((int *)&v6));
            v17 += 3;
            if (v20 + 1 == v11)
                goto LABEL_48015f;
        }
    }
    else
    {
        v9 = v17;
        if (v11 != v17)
        {
            v24 = (v11 - (char *)v17) / 24;
            v25 = v17 + 1;
            do
            {
                if (v25->field_0)
                    __rust_dealloc(v25->field_-8);
            } while ((v25 += 24, v27 = v24 - 1, v24 != 1));
        }
    }
LABEL_48015f:
    if (v4)
        __rust_dealloc(v3);
    return 0;
}

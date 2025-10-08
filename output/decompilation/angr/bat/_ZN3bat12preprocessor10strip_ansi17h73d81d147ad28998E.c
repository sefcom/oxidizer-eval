long long bat::preprocessor::strip_ansi(unsigned long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0xc0]
    unsigned long long v1;  // [bp-0xb8]
    unsigned long long v2;  // [bp-0xb0]
    void* v3;  // [bp-0xa8]
    struct_0 *v4;  // [bp-0xa0]
    unsigned long long v5;  // [bp-0x98]
    unsigned long long v6;  // [bp-0x90]
    unsigned long long v7;  // [bp-0x88]
    unsigned long long v8;  // [bp-0x80]
    void* v9;  // [bp-0x78]
    unsigned int v10;  // [bp-0x68]
    unsigned long long v11;  // [bp-0x60]
    unsigned long long v12;  // [bp-0x58]
    char v13;  // [bp-0x50]
    unsigned long long v15;  // rdx
    unsigned long long v16;  // r14
    unsigned long long v17;  // rax

    v1 = a2.with_capacity_in(1, 1, &g_acd180);
    v2 = v15;
    v3 = 0;
    v5 = a1;
    v0 = a2;
    v6 = a2;
    v16 = a1;
    v7 = a1;
    v8 = a1 + a2;
    v9 = 0;
    v10 = 1114113;
    while (true)
    {
        v11.next(&v5);
        if (!v11)
        {
            v17 = v12.get(*((long long *)&v13), v16, v0);
            if (!v17)
                core::str::slice_error_fail(v16, v0, v12, *((long long *)&v13), &g_ace990); /* do not return */
            v1.spec_extend(v17, v15 + v17);
        }
        else if ((unsigned int)v11 == 5)
        {
            v4->field_10 = 0;
            v4->field_0 = *((int128_t *)&v1);
            return 0;
        }
    }
}

long long uu_sort::check::reader::h4b78be0e2fa86205(unsigned long long a0, struct_1 *a1, unsigned long long a2, unsigned long long a3, struct_2 *a4)
{
    char v0;  // [bp-0xf8]
    char v1;  // [bp-0xf0]
    char v2;  // [bp-0xe9]
    char v3;  // [bp-0xe8]
    void* v4;  // [sp-0xd8]
    unsigned long long v5;  // [sp-0xd0]
    unsigned long v6;  // [sp-0xc0], Other Possible Types: unsigned long long
    char v7;  // [bp-0xb8]
    char v8;  // [bp-0xb0]
    char v9;  // [bp-0xa8]
    unsigned long long v12;  // r8
    unsigned long long v13;  // rbx
    unsigned long long v14;  // r14
    struct_1 *v15;  // r15
    struct struct_0 **v16;  // rax
    unsigned long long v17;  // r15
    struct_1 *v18;  // r12
    struct struct_0 **v19;  // rax

    v4 = 0;
    v5 = 1;
    v6 = a2;
    while (true)
    {
        _$LT$std..sync..mpsc..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0a897bded976da5e(&v9, &v6, a2);
        if (*((long long *)&v9) == 0x8000000000000000)
        {
LABEL_4f3300:
            if (v4)
                __rust_dealloc(v5);
            v14 = a0;
            v15 = a1;
            if (v15->field_0)
                v16(v14);
            if (v15->field_8)
                __rust_dealloc(v14);
            break;
        }
        else
        {
            uu_sort::chunks::read::h3ffb63022d852be4(&v7, a3, &v9, 0, v12, &v4, &v3, &v2, a4->field_99, a4, *((long long *)&v0), *((long long *)&v1), a0, a1, 0, 1, 0);
            v13 = *((long long *)&v7);
            if (v13)
            {
                if (v4)
                    __rust_dealloc(v5);
                v17 = a0;
                v18 = a1;
                if (v18->field_0)
                    v19(v17);
                if (!v18->field_8)
                    return v13;
                __rust_dealloc(v17);
            }
            if (!v8)
                goto LABEL_4f3300;
        }
    }
    return 0;
}

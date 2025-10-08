long long uu_paste::DelimiterState::new(struct_0 *a0, struct_2 *a1, struct_2 *a2)
{
    int v0;  // [bp-0x28]
    unsigned long long v1;  // [bp-0x18]
    unsigned long long v2;  // [bp-0x10]
    unsigned long long v3;  // [bp-0x8]
    struct_2 *v5;  // rax
    struct_2 *v6;  // rsi
    struct_0 *v7;  // rdx
    struct_0 *v8;  // r8
    unsigned long long v9;  // r15
    unsigned long long v10;  // r14
    unsigned long long v11;  // rbx

    if (a2)
    {
        if (a2 == 1)
        {
            v5 = a1->field_8;
            if (!v5)
            {
                a0->field_0 = 0;
                return 0;
            }
            v6 = a1->field_0;
            a2 = 1;
            v7 = 16;
            v8 = 8;
        }
        else
        {
            v3 = v9;
            v2 = v10;
            v1 = v11;
            *((int128_t *)&v0) = *((int128_t *)&a1->field_0);
            (&a0[1].field_0)[1].new(a1, 0x10 * a2 + (char *)a1);
            v6 = a1;
            v5 = a2;
            *((void*)&(&a0->field_0)[1]) = v0;
            a2 = 2;
            v7 = 32;
            v8 = 24;
        }
        *((struct_2 **)(a0 + v8)) = v6;
        *((struct_2 **)(a0 + v7)) = v5;
    }
    a0->field_0 = a2;
    return v5;
}

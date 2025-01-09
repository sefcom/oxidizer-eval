long long uu_paste::DelimiterState::new::hf0d8373e3ee9ca93(struct_1 *a0, struct struct_0 **a1, unsigned long long a2)
{
    int v0;  // [sp-0x28]
    unsigned long long v1;  // [sp-0x18]
    unsigned long long v2;  // [sp-0x10]
    unsigned long long v3;  // [sp-0x8]
    unsigned long long v5;  // rax
    unsigned long v6;  // r15
    unsigned long v7;  // r14
    unsigned long v8;  // rbx
    struct_1 *v9;  // rdx
    struct_1 *v10;  // r8

    if (!a2)
    {
        a0->field_0 = a2;
        return v5;
    }
    if (a2 != 1)
    {
        v3 = v6;
        v2 = v7;
        v1 = v8;
        *((int128_t *)&v0) = *((int128_t *)&a1);
        core::iter::adapters::cycle::Cycle$LT$I$GT$::new::hf1aa6bae6724cda9(&(&a0[1].field_0)[1], a1, &a1[2 * a2]);
        *((void*)&(&a0->field_0)[1]) = v0;
        a2 = 2;
        v9 = 32;
        v10 = 24;
    }
    else
    {
        v5 = a1[1];
        if (!v5)
        {
            a0->field_0 = 0;
            return v5;
        }
        a1 = *(a1);
        a2 = 1;
        v9 = 16;
        v10 = 8;
    }
    *((struct struct_0 ***)(a0 + v10)) = a1;
    *((unsigned long long *)(a0 + v9)) = v5;
}

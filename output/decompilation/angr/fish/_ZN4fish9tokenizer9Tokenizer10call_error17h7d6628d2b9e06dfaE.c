long long fish::tokenizer::Tokenizer::call_error(struct_1 *a0, struct_0 *a1, char a2, unsigned long a3, unsigned long a4, char a5, unsigned long long a6, unsigned int a7)
{
    unsigned long long v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x28]
    unsigned long long v2;  // [bp-0x20]
    uint128_t v3;  // [bp-0x18]
    unsigned long long v4;  // r10
    unsigned long long v5;  // rax
    unsigned long long v6;  // r11

    if (a4 < a3)
    {
        v0 = &g_14e3c50;
        v1 = 1;
        v2 = 8;
        v3 = 0;
        core::panicking::panic_fmt(&v0, &g_14e3c80); /* do not return */
    }
    v4 = a1->field_30;
    if (v4 < a3)
    {
        v0 = &g_14e3c60;
        v1 = 1;
        v2 = 8;
        v3 = 0;
        core::panicking::panic_fmt(&v0, &g_14e3c98); /* do not return */
    }
    v5 = a6;
    if ((a5 & 1))
    {
        if (a1->field_3c)
        {
            v6 = a4 + a6;
            if ((char)__CFADD__(a4, a6))
            {
                core::panicking::panic_const::panic_const_add_overflow(&g_14e3cc8); /* do not return */
            }
            else if (v4 < v6)
            {
                a1->field_30 = v6;
                v4 = v6;
            }
            else
            {
                v0 = &g_14e3c70;
                v1 = 1;
                v2 = 8;
                v3 = 0;
                core::panicking::panic_fmt(&v0, &g_14e3ce0); /* do not return */
            }
LABEL_141cc29:
            if (v4 < a3)
                core::panicking::panic_const::panic_const_sub_overflow(&g_14e3cb0); /* do not return */
            if (!(a5 & 1))
                v5 = v4 - a3;
        }
        else
        {
            a1->field_38 = 0;
        }
        a0->field_0 = a3;
        a0->field_4 = v5;
        a0->field_8 = a4 - a3;
        a0->field_c = a7;
        a0->field_10 = a2;
        *((unsigned short *)&(&a0->field_10)[1]) = 0;
        return v5;
    }
    a1->field_38 = 0;
    goto LABEL_141cc29;
}

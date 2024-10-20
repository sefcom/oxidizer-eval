long long uu_test::parser::Parser::uop::hd592918b9a59bdd0(struct_1 *a0, unsigned long a1)
{
    int v0;  // [sp-0x88], Other Possible Types: unsigned long long (64 bits)[3], unsigned long long
    int v1;  // [bp-0x80]
    unsigned long long v2;  // [sp-0x78]
    unsigned long long v3[5];  // [bp-0x48]
    unsigned long long v4;  // [sp-0x20]
    unsigned long long v5;  // [sp-0x18]
    unsigned long long v6;  // [sp-0x10]
    unsigned long long v7;  // [sp-0x8]
    unsigned long v9;  // r15
    unsigned long v10;  // r14
    unsigned long v11;  // r12
    unsigned long v12;  // rbx
    unsigned long long v13;  // rcx
    struct_0 *v14;  // rcx

    v7 = v9;
    v6 = v10;
    v5 = v11;
    v4 = v12;
    v13 = a0->field_18;
    a0->field_18 = 9223372036854775809;
    if (v0 != 9223372036854775809)
    {
        *((uint128_t *)&v1) = a0->field_20;
        v0 = v13;
    }
    else
    {
        v14 = a0->field_38;
        if (v14 == a0->field_48)
        {
            v0 = 0x8000000000000000;
        }
        else
        {
            a0->field_38 = &v14[1];
            v2 = v14->field_10;
            *((uint128_t *)&v0) = v14->field_0;
        }
    }
    uu_test::parser::Symbol::new::h6625985994e45cab(v3, v0);
    if (v3[0] != 6)
        goto *((int *)(4297404 + vvar_51{reg 24} * 4)) + 4297404;
    else
        goto *((int *)(4297428 + *((long long *)vvar_1) * 4)) + 4297428;
}

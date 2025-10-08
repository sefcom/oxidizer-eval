long long just::justfile::Justfile::name(struct_0 *a0)
{
    int v0;  // [bp-0x48]
    int v1;  // [bp-0x38]
    int v2;  // [bp-0x28]
    int v3;  // [bp-0x18]
    char v4;  // [bp-0x8]
    unsigned int v5;  // [bp-0x7]
    unsigned int v6;  // [bp-0x4]
    char v8;  // al
    unsigned int v9;  // edx

    v8 = a0->field_230;
    if (v8 != 37)
    {
        *((uint128_t *)&v3) = a0->field_220;
        *((uint128_t *)&v2) = a0->field_210;
        *((uint128_t *)&v1) = a0->field_200;
        *((uint128_t *)&v0) = a0->field_1f0;
        v9 = *((int *)&a0->field_231[3]);
        v5 = *((int *)&a0->field_231[0]);
        v6 = v9;
        v4 = v8;
        return v0.lexeme();
    }
    return 1;
}

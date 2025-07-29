long long uu_join::parse_field_number_option(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x18], Other Possible Types: unsigned long
    char v1;  // [bp-0x10]
    unsigned long long v3;  // rcx
    unsigned long long v4;  // rax
    unsigned long v5;  // rax

    if (!a1)
    {
        *((uint128_t *)&a0->field_0) = 0;
        return v5;
    }
    uu_join::parse_field_number(&v0, a1, a2);
    if (!v0)
    {
        v4 = *((long long *)&v1);
        *((unsigned long long *)&a0->padding_1[7]) = 1;
        a0->field_10 = v4;
        *((unsigned long long *)&a0->field_0) = 0;
        return v4;
    }
    v3 = *((long long *)&v1);
    *((unsigned long *)&a0->padding_1[7]) = v0;
    a0->field_10 = v3;
    *((unsigned long long *)&a0->field_0) = 1;
    return v0;
}

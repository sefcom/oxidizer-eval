long long uu_csplit::patterns::validate_line_numbers::hf11a42b855ce2ce0(struct_0 *a0, unsigned long a1, unsigned long a2)
{
    unsigned long v0;  // [sp-0x40]
    unsigned long long v1;  // [sp-0x38]
    char v2;  // [bp-0x30]
    char v3;  // [bp-0x28]
    char v4;  // [bp-0x20]
    char v5;  // [bp-0x10]
    unsigned long long v7;  // rax
    unsigned long long v8;  // rcx

    v0 = a1;
    v1 = a2 * 56 + a1;
    core::iter::traits::iterator::Iterator::try_fold::he4ea7283460072b7(&v2, &v0);
    v7 = *((long long *)&v2);
    if (v7 != 12)
    {
        v8 = *((long long *)&v3);
        a0->field_20 = *((long long *)&v5);
        a0->field_10 = *((int128_t *)&v4);
        a0->field_8 = v8;
    }
    a0->field_0 = v7;
    return v7;
}

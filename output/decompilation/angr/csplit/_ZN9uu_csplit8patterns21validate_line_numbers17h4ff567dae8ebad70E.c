long long uu_csplit::patterns::validate_line_numbers(struct_0 *a0, unsigned long long a1, unsigned long a2)
{
    unsigned long long v0;  // [bp-0x40]
    unsigned long long v1;  // [bp-0x38]
    char v2;  // [bp-0x30], Other Possible Types: unsigned long
    unsigned long v3;  // [bp-0x28]
    int v4;  // [bp-0x20]
    char v5;  // [bp-0x10]

    v0 = a1;
    v1 = a2 * 56 + a1;
    v2.try_fold(&v0);
    if (v2 != 13)
    {
        a0->field_20 = *((long long *)&v5);
        *((void*)&a0->field_10) = v4;
        a0->field_8 = v3;
    }
    a0->field_0 = v2;
    return v2;
}

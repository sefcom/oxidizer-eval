long long just::compile_error::capitalize(struct_0 *a0, unsigned long long a1, unsigned long a2)
{
    unsigned long long v0;  // [bp-0x60]
    unsigned long long v1;  // [bp-0x58]
    char v2;  // [bp-0x50]
    char v3;  // [bp-0x38]
    unsigned long long v5;  // rax
    unsigned int v6;  // edx

    v0 = a1;
    v1 = a2 + a1;
    v5 = core::str::validations::next_code_point(&v0);
    if (!((char)v5 & 1))
    {
        a0->field_0 = 0;
        a0->field_8 = 1;
        a0->field_10 = 0;
        return v5;
    }
    core::unicode::unicode_data::conversions::to_upper(&v2, v6);
    v3.new(&v2);
    v2.collect(&v3);
    return a0.add(&v2, v0, v1 - v0);
}

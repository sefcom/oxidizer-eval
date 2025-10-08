long long change_log::domain::changelog::capitalize(struct_0 *a0, unsigned long long a1, unsigned long a2)
{
    unsigned long long v0;  // [bp-0x60]
    unsigned long long v1;  // [bp-0x58]
    char v2;  // [bp-0x50]
    char v3;  // [bp-0x38]
    unsigned int v5;  // edx

    v0 = a1;
    v1 = a2 + a1;
    if (!((char)core::str::validations::next_code_point(&v0) & 1))
    {
        a0->field_0 = 0;
        a0->field_8 = 1;
        a0->field_10 = 0;
        return a0;
    }
    core::unicode::unicode_data::conversions::to_upper(&v2, v5);
    v3.new(&v2);
    v2.collect(&v3);
    a0.add(&v2, v0, v1 - v0);
    return a0;
}

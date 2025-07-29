long long uu_tail::args::Settings::verify(struct_0 *a0)
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax

    v0 = a0->field_20;
    v1 = a0->field_28 * 48 + a0->field_20;
    v3 = v0.any();
    if ((char)v3 && (a0->field_4c & 1))
        return v3 & 0xffffffffffffff00 | 1;
    if (a0->field_4c != 2)
        return 0;
    v4 = a0->field_0;
    if (a0->field_0 == 4)
        v4 = a0->field_8;
    return v4 & 0xffffffffffffff00 | (v4 == 3) * 2;
}

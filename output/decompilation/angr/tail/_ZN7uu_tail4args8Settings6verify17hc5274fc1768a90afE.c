long long uu_tail::args::Settings::verify(struct_0 *a0)
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    char v3;  // al
    char v4;  // al
    unsigned long long v5;  // rax

    v0 = a0->field_20;
    v1 = a0->field_28 * 48 + a0->field_20;
    v3 = v0.any();
    v4 = a0->field_4c;
    if (v3)
    {
        if (v4 != 2)
            return v4 & 1;
    }
    else
    {
        if (v4 != 2)
            return 0;
    }
    v5 = a0->field_0;
    if (a0->field_0 == 4)
        v5 = a0->field_8;
    return v5 & 0xffffffffffffff00 | (v5 == 3) * 2;
}

long long fish::input_common::match_key_event_to_key(struct_0 *a0, unsigned int *a1)
{
    unsigned long v0;  // [bp-0x40]
    unsigned int v1;  // [bp-0x40]
    unsigned int v2;  // [bp-0x40]
    unsigned long long v3;  // [bp-0x38]
    unsigned long long v4;  // [bp-0x30]
    unsigned long long v5;  // [bp-0x28]
    unsigned long long v7;  // rax
    unsigned long long v8;  // r12
    unsigned long long v9;  // rax
    unsigned long long v10;  // rax
    unsigned long long v11;  // rax
    char v12;  // bl

    v7 = a0.eq(a1);
    if ((char)v7)
        return v7 & 0xffffffffffffff00 | 3;
    v4 = fish::input_common::apply_shift(a0->field_0, 0, a0->field_8);
    v3 = fish::input_common::apply_shift(*((long long *)&a1), 1, 0);
    v8 = v3 & 4294967295;
    if (!v8 == 0x110000 && !(unsigned int)v4 == 0x110000)
    {
        v9 = v4.eq(&v3);
        if ((char)v9)
            return v9 & 0xffffffffffffff00 | 2;
    }
    v10 = a0->field_c;
    if ((unsigned int)v10)
    {
        v0 = a0->field_0;
        v1 = v10;
        v11 = v1.eq(a1);
        if ((char)v11)
            return v11 & 0xffffffffffffff00 | 1;
        v12 = v8 == 0x110000;
        v5 = fish::input_common::apply_shift(v2, 1, 0);
        v10 = v5 & 0xffffffffffffff00 | (unsigned int)v5 == 0x110000 | v12;
        if (!(unsigned int)v5 == 0x110000 && !v12)
        {
            v10 = v5.eq(&v3);
            if ((char)v10)
                return 0;
        }
    }
    return v10 & 0xffffffffffffff00 | 4;
}

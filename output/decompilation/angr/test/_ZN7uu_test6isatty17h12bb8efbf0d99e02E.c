long long uu_test::isatty(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x50], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x48]
    unsigned long long v2;  // [bp-0x40]
    char v3;  // [bp-0x38]
    char v4;  // [bp-0x30], Other Possible Types: unsigned int
    int v5;  // [bp-0x2c]
    char v6;  // [bp-0x1c]
    unsigned long long v8;  // rax
    unsigned long long v9;  // rax

    v0.try_from(a1, a2);
    if (!(v0 & 1))
    {
        v8 = core::num::<impl i32>::from_str_radix(v1, v2);
        if (!((char)v8 & 1))
        {
            v9 = isatty(v8 >> 32);
            a0->field_8 = (unsigned int)v9 == 1;
            a0->field_0 = 7;
            return v9;
        }
    }
    v0 = 1;
    v1 = a1;
    v2 = a2;
    v3 = 1;
    v4.spec_to_string(&v0);
    *((int *)((char *)&a0->field_c + 12)) = *((int *)&v6);
    *((void*)&(&a0->padding_9)[1]) = v5;
    a0->field_0 = 5;
    *((unsigned int *)&a0->field_8) = v4;
    return v4;
}

long long uu_more::Pager::should_squeeze_line(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long long v2;  // [bp-0x8]
    unsigned long long v4;  // r14
    unsigned long long v5;  // rbx
    unsigned long long v6;  // rax
    unsigned long long v7;  // rax
    unsigned long long v8;  // rax
    char v9;  // cl

    if (a0->field_81 != 1)
        return 0;
    v2 = v4;
    v1 = v5;
    v0 = v6;
    v7 = core::str::<impl str>::trim_matches(a1, a2);
    v8 = a0->field_20;
    if (v8)
    {
        v8 = core::str::<impl str>::trim_matches(*((long long *)(a0->field_18 + v8 * 24 - 16)), *((long long *)(a0->field_18 + v8 * 24 - 8)));
        v9 = !v8;
    }
    return v8 & 0xffffffffffffff00 | !v7 & v9;
}

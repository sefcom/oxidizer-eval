long long uu_sort::FieldSelector::new::h76b0cdeb9dd3e1dd(struct_0 *a0, unsigned long long a1[3], struct_1 *a2, unsigned long a3)
{
    int v0;  // [sp-0x38]
    unsigned long long v1;  // [sp-0x28]
    int v2;  // [sp-0x20]
    unsigned long long v3;  // [sp-0x10]
    unsigned long long v6;  // rax

    if (!a1[1])
    {
        ::0x51cb50::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h1d4334c76f34ab0e(a0, "invalid character index 0 for the start position of a fieldinternal error: entered unreachable code: This should only happen if the field start index is 0, but that should already have caused an error.", 59);
        a0->field_37 = 2;
        return a0;
    }
    v6 = a3 >> 40;
    v3 = a1[2];
    *((int128_t *)&v2) = *((int128_t *)&a1[0]);
    v1 = a2->field_10;
    *((uint128_t *)&v0) = a2->field_0;
    a0->field_20 = (long long)(&v2)[8];
    a0->field_28 = v3;
    *((void*)&a0->field_0) = v0;
    a0->field_10 = v1;
    a0->field_18 = (long long)v2;
    a0->field_34 = a3 >> 32;
    a0->field_30 = a3;
    a0->field_35 = v6;
    a0->field_36 = 1;
    a0->field_37 = (unsigned int)v6 != 2;
    return a0;
}

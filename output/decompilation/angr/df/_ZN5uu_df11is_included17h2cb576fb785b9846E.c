long long uu_df::is_included(struct_0 *a0, struct_1 *a1)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    void* v3;  // rax

    v0 = v2;
    if (a0->field_90 && a1->field_50)
        return 0;
    if ((a0->field_91 || (char)a0->field_38.equal(a0->field_40, "lofs", 4)) && a1->field_51 != 1)
        return 0;
    v3 = 0;
    if (!((char)(((0 ^ a1->field_30) & (0 ^ -(a1->field_30))) >> 63)))
    {
        v3 = a0->padding_0[48].slice_contains(a1->field_38, a1->field_40);
        if ((char)v3)
            return 0;
    }
    if (a1->field_18 != 0x8000000000000000)
        return a0->padding_0[48].slice_contains(a1->field_20, a1->field_28);
    return v3 & 0xffffffffffffff00 | 1;
}

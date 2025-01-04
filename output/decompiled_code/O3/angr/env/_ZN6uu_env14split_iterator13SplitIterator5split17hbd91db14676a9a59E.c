long long uu_env::split_iterator::SplitIterator::split::hbd91db14676a9a59(struct_0 *a0, struct_1 *a1, unsigned long long a2)
{
    char v0;  // [bp-0x38]
    char v1;  // [bp-0x28]
    char v2;  // [bp-0x18]
    int v4;  // xmm0

    uu_env::split_iterator::SplitIterator::state_root::ha7ad7ed6584dc219(&v0, a1, a2);
    if (*((int *)&v0) != 8)
    {
        *((long long *)&a0->field_10) = *((long long *)&v2);
        v4 = *((int128_t *)&v0);
        a0->field_8 = *((int128_t *)&v1);
        *((void*)&a0->field_0) = v4;
        core::ptr::drop_in_place$LT$uu_env..split_iterator..SplitIterator$GT$::hd7192570ff598ae0(a1);
        return a0;
    }
    *((unsigned long long *)((char *)&a0->field_8 + 8)) = a1->field_50;
    *((uint128_t *)&(&a0->padding_4)[1]) = a1->field_40;
    a0->field_0 = 8;
    core::ptr::drop_in_place$LT$uu_env..string_expander..StringExpander$GT$::ha4fe71f9740e15f8(a1);
    return a0;
}

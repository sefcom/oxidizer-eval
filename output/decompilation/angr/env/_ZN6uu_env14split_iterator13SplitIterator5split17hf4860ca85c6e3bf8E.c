long long uu_env::split_iterator::SplitIterator::split(struct_0 *a0, struct_1 *a1)
{
    int v0;  // [bp-0x38], Other Possible Types: char
    int v1;  // [bp-0x28]
    char v2;  // [bp-0x18]

    v0.state_root(a1);
    if (*((int *)&v0) != 12)
    {
        a0->field_10[0] = *((long long *)&v2);
        *((void*)&a0->field_8[8]) = v1;
        *((void*)&a0->field_0) = v0;
        core::ptr::drop_in_place<uu_env::split_iterator::SplitIterator>(a1);
        return a0;
    }
    *((unsigned long long *)&a0->field_8[16]) = a1->field_50;
    *((uint128_t *)&a0->field_8[0]) = a1->field_40;
    *((unsigned int *)&a0->field_0) = 12;
    core::ptr::drop_in_place<uu_env::string_expander::StringExpander>(a1);
    return a0;
}

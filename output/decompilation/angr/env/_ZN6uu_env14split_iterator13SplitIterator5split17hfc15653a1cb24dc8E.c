long long uu_env::split_iterator::SplitIterator::split(void* a0, struct_0 *a1)
{
    int v0;  // [bp-0x38], Other Possible Types: char
    int v1;  // [bp-0x28]
    char v2;  // [bp-0x18]

    v0.state_root(a1);
    if (*((int *)&v0) != 12)
    {
        *((long long *)&a0[32]) = *((long long *)&v2);
        a0[16] = v1;
        *(a0) = v0;
        core::ptr::drop_in_place<uu_env::split_iterator::SplitIterator>(a1);
        return a0;
    }
    *((unsigned long long *)&a0[24]) = a1->field_50;
    *((uint128_t *)&a0[8]) = a1->field_40;
    *((unsigned int *)a0) = 12;
    core::ptr::drop_in_place<std::sys::os_str::bytes::Buf>(a1->field_0, a1->field_8);
    return a0;
}

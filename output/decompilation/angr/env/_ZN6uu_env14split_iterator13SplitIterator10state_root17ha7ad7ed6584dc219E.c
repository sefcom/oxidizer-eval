long long uu_env::split_iterator::SplitIterator::state_root::ha7ad7ed6584dc219(struct_0 *a0, unsigned long long a1)
{
    char v0;  // [bp-0x40]
    char v1;  // [bp-0x30]
    char v2;  // [bp-0x20]
    unsigned int v4;  // eax
    unsigned long long v5;  // rax
    int v6;  // xmm0

    while (true)
    {
        uu_env::split_iterator::SplitIterator::state_delimiter::hcb2808b02d57ed1b(&v0, a1);
        v4 = *((int *)&v0);
        if (v4 != 7)
            break;
        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$uu_env..parse_error..ParseError$GT$$GT$::ha3cb64f13c33686f(&v0);
    }
    if (v4 != 6)
    {
        v5 = *((long long *)&v2);
        a0->field_20 = v5;
        v6 = *((int128_t *)&v0);
        a0->field_10 = *((int128_t *)&v1);
        *((void*)&a0->field_0) = v6;
        return v5;
    }
    a0->field_0 = 8;
    v5 = core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$uu_env..parse_error..ParseError$GT$$GT$::ha3cb64f13c33686f(&v0);
    return v5;
}

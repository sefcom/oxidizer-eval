long long uu_env::split_iterator::SplitIterator::state_delimiter::hebb45256717034fb(struct_0 *a0, unsigned long a1, unsigned long a2)
{
    char v0;  // [bp-0x58]
    char v1;  // [bp-0x48]
    char v2;  // [bp-0x38]
    unsigned int v3;  // [sp-0x2c]
    unsigned long long v5;  // rax
    unsigned long long v6;  // rdx
    int v7;  // xmm0

    while (true)
    {
        v5 = uu_env::split_iterator::SplitIterator::get_current_char::h2af8d73cb3f5950a(a1);
        v3 = v5;
        switch (v3)
        {
        case 35:
            uu_env::split_iterator::SplitIterator::skip_one::h71a98384b0179ac9(&v0, a1);
            if (*((int *)&v0) != 8)
            {
                a0->field_20 = *((long long *)&v2);
                vvar_155{reg 224} = *((int128_t *)&v0);
                a0->field_10 = *((int128_t *)&v1);
                *((void*)&a0->field_0) = v7;
                return v5;
            }
            uu_env::split_iterator::SplitIterator::state_comment::hef20f5b237d58b62(&v0, a1, v6);
            break;
        case 92:
            uu_env::split_iterator::SplitIterator::skip_one::h71a98384b0179ac9(&v0, a1);
            if (*((int *)&v0) != 8)
            {
                a0->field_20 = *((long long *)&v2);
                vvar_160{reg 224} = *((int128_t *)&v0);
                a0->field_10 = *((int128_t *)&v1);
                *((void*)&a0->field_0) = v7;
                return v5;
            }
            uu_env::split_iterator::SplitIterator::state_delimiter_backslash::hd3a5b72ddbf48ea1(&v0, a1, v6);
            break;
        case 1114112:
            a0->field_0 = 8;
            return v5;
        default:
            if (!(char)_$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::he07a818086797159(&v3, " ", 6))
            {
                uu_env::split_iterator::SplitIterator::state_unquoted::haba1d13360dad12e(&v0, a1, v6);
                break;
            }
            else
            {
                uu_env::split_iterator::SplitIterator::skip_one::h71a98384b0179ac9(&v0, a1);
                break;
            }
        }
        if (*((int *)&v0) != 8)
        {
            a0->field_20 = *((long long *)&v2);
            vvar_165{reg 224} = *((int128_t *)&v0);
            a0->field_10 = *((int128_t *)&v1);
            *((void*)&a0->field_0) = v7;
            return v5;
        }
    }
}

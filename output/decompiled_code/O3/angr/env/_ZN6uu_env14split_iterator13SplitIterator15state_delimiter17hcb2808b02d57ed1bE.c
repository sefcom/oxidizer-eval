long long uu_env::split_iterator::SplitIterator::state_delimiter::hcb2808b02d57ed1b(struct_0 *a0, unsigned long a1, unsigned long a2)
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
        v5 = uu_env::split_iterator::SplitIterator::get_current_char::h5ca55267f11846dc(a1);
        v3 = v5;
        switch (v3)
        {
        case 35:
            uu_env::split_iterator::SplitIterator::skip_one::hcd63dec953ae1fd1(&v0, a1);
            if (*((int *)&v0) != 8)
            {
                a0->field_20 = *((long long *)&v2);
                vvar_155{reg 224} = *((int128_t *)&v0);
                a0->field_10 = *((int128_t *)&v1);
                *((void*)&a0->field_0) = v7;
                return v5;
            }
            uu_env::split_iterator::SplitIterator::state_comment::ha611e5f8f3a5f309(&v0, a1, v6);
            break;
        case 92:
            uu_env::split_iterator::SplitIterator::skip_one::hcd63dec953ae1fd1(&v0, a1);
            if (*((int *)&v0) != 8)
            {
                a0->field_20 = *((long long *)&v2);
                vvar_160{reg 224} = *((int128_t *)&v0);
                a0->field_10 = *((int128_t *)&v1);
                *((void*)&a0->field_0) = v7;
                return v5;
            }
            uu_env::split_iterator::SplitIterator::state_delimiter_backslash::hda2bc29fb6f38b14(&v0, a1, v6);
            break;
        case 1114112:
            a0->field_0 = 8;
            return v5;
        default:
            if ((char)_$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::h1ba5288d29bd1e28(&v3, " ", 6))
            {
                uu_env::split_iterator::SplitIterator::skip_one::hcd63dec953ae1fd1(&v0, a1);
                break;
            }
            else
            {
                uu_env::split_iterator::SplitIterator::state_unquoted::h4114e84db94125c1(&v0, a1, v6);
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

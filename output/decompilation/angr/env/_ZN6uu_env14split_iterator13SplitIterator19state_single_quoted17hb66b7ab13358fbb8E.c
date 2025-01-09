long long uu_env::split_iterator::SplitIterator::state_single_quoted::hb66b7ab13358fbb8(struct_0 *a0, struct_1 *a1)
{
    char v0;  // [bp-0x40]
    char v1;  // [bp-0x30]
    char v2;  // [bp-0x20]
    unsigned int v4;  // eax
    unsigned long long v5;  // rax
    int v6;  // xmm0

    while (true)
    {
        uu_env::split_iterator::SplitIterator::get_current_char::h5ca55267f11846dc(a1);
        switch (v4)
        {
        case 92:
            uu_env::split_iterator::SplitIterator::skip_one::hcd63dec953ae1fd1(&v0, a1);
            if (*((int *)&v0) != 8)
            {
                a0->field_20 = *((long long *)&v2);
                vvar_125{reg 224} = *((int128_t *)&v0);
                a0->field_10 = *((int128_t *)&v1);
                *((void*)&a0->field_0) = v6;
                return v5;
            }
            uu_env::split_iterator::SplitIterator::split_single_quoted_backslash::h9a57405ea848f4db(&v0, a1);
            break;
        case 39:
            v5 = uu_env::split_iterator::SplitIterator::skip_one::hcd63dec953ae1fd1(&v0, a1);
            if (*((int *)&v0) != 8)
            {
                a0->field_20 = *((long long *)&v2);
                vvar_130{reg 224} = *((int128_t *)&v0);
                a0->field_10 = *((int128_t *)&v1);
                *((void*)&a0->field_0) = v6;
                return v5;
            }
            a0->field_0 = 8;
            return v5;
        case 1114112:
            v5 = a1->field_38;
            *((unsigned long long *)&a0->field_0) = 0x2700000000;
            *((unsigned long long *)&a0->padding_4[4]) = v5;
            return v5;
        default:
            uu_env::split_iterator::SplitIterator::take_one::h79c5ef4ea4fbd4ee(&v0, a1);
            break;
        }
        if (*((int *)&v0) != 8)
        {
            a0->field_20 = *((long long *)&v2);
            vvar_135{reg 224} = *((int128_t *)&v0);
            a0->field_10 = *((int128_t *)&v1);
            *((void*)&a0->field_0) = v6;
            return v5;
        }
    }
}

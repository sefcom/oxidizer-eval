long long uu_env::split_iterator::SplitIterator::state_single_quoted::h784c5138267a99cc(struct_1 *a0, struct_0 *a1, unsigned long a2)
{
    char v0;  // [bp-0x40]
    char v1;  // [bp-0x30]
    char v2;  // [bp-0x20]
    unsigned int v4;  // eax
    unsigned long v5;  // rdx
    unsigned long long v6;  // rax
    int v7;  // xmm0

    while (true)
    {
        uu_env::split_iterator::SplitIterator::get_current_char::h2af8d73cb3f5950a(a1);
        switch (v4)
        {
        case 92:
            uu_env::split_iterator::SplitIterator::skip_one::h71a98384b0179ac9(&v0, a1);
            if (*((int *)&v0) != 8)
            {
                a0->field_20 = *((long long *)&v2);
                vvar_127{reg 224} = *((int128_t *)&v0);
                a0->field_10 = *((int128_t *)&v1);
                *((void*)&a0->field_0) = v7;
                return v6;
            }
            uu_env::split_iterator::SplitIterator::split_single_quoted_backslash::h4aedcb69575fe0e5(&v0, a1, v5);
            break;
        case 39:
            v6 = uu_env::split_iterator::SplitIterator::skip_one::h71a98384b0179ac9(&v0, a1);
            if (*((int *)&v0) == 8)
            {
                a0->field_0 = 8;
                return v6;
            }
            a0->field_20 = *((long long *)&v2);
            vvar_132{reg 224} = *((int128_t *)&v0);
            a0->field_10 = *((int128_t *)&v1);
            *((void*)&a0->field_0) = v7;
            return v6;
        case 1114112:
            v6 = a1->field_38;
            *((long long *)&a0->field_0) = 0x2700000000;
            *((unsigned long long *)&a0->padding_4[4]) = v6;
            return v6;
        default:
            uu_env::split_iterator::SplitIterator::take_one::h3b27d33213b316aa(&v0, a1, v5);
            break;
        }
        if (*((int *)&v0) != 8)
        {
            a0->field_20 = *((long long *)&v2);
            vvar_137{reg 224} = *((int128_t *)&v0);
            a0->field_10 = *((int128_t *)&v1);
            *((void*)&a0->field_0) = v7;
            return v6;
        }
    }
}

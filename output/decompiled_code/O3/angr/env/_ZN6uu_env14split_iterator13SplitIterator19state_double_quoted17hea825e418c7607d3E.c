long long uu_env::split_iterator::SplitIterator::state_double_quoted::hea825e418c7607d3(struct_0 *a0, struct_1 *a1, unsigned long a2)
{
    char v0;  // [bp-0x40]
    char v1;  // [bp-0x30]
    char v2;  // [bp-0x20]
    unsigned int v4;  // eax
    unsigned long v5;  // edx
    unsigned long long v6;  // rax
    int v7;  // xmm0

    do
    {
        v4 = uu_env::split_iterator::SplitIterator::get_current_char::h2af8d73cb3f5950a(a1);
        switch (v4)
        {
        case 36:
            uu_env::split_iterator::SplitIterator::substitute_variable::heaa0426adf84fbcf(&v0, a1, v5);
        case 34:
            v6 = uu_env::split_iterator::SplitIterator::skip_one::h71a98384b0179ac9(&v0, a1);
            if (*((int *)&v0) == 8)
            {
                a0->field_0 = 8;
                return v6;
            }
            break;
        case 92:
            uu_env::split_iterator::SplitIterator::skip_one::h71a98384b0179ac9(&v0, a1);
            if (*((int *)&v0) != 8)
                break;
            uu_env::split_iterator::SplitIterator::state_double_quoted_backslash::ha4d8328b12a1a0a5(&v0, a1, v5);
            continue;
        case 1114112:
            v6 = a1->field_38;
            *((long long *)&a0->field_0) = 0x2200000000;
            *((unsigned long long *)&a0->padding_4[4]) = v6;
            return v6;
        default:
            uu_env::split_iterator::SplitIterator::take_one::h3b27d33213b316aa(&v0, a1, v5);
        }
    } while (*((int *)&v0) == 8);
    v6 = *((long long *)&v2);
    a0->field_20 = v6;
    v7 = *((int128_t *)&v0);
    a0->field_10 = *((int128_t *)&v1);
    *((void*)&a0->field_0) = v7;
    return v6;
}

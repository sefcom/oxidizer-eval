long long uu_env::split_iterator::SplitIterator::state_double_quoted::hb7981fc821b01516(struct_1 *a0, struct_0 *a1, unsigned long a2)
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
        v4 = uu_env::split_iterator::SplitIterator::get_current_char::h5ca55267f11846dc(a1);
        switch (v4)
        {
        case 36:
            uu_env::split_iterator::SplitIterator::substitute_variable::h1db80b01658fc728(&v0, a1, v5);
        case 34:
            v6 = uu_env::split_iterator::SplitIterator::skip_one::hcd63dec953ae1fd1(&v0, a1);
            if (*((int *)&v0) == 8)
            {
                a0->field_0 = 8;
                return v6;
            }
            break;
        case 92:
            uu_env::split_iterator::SplitIterator::skip_one::hcd63dec953ae1fd1(&v0, a1);
            if (*((int *)&v0) != 8)
                break;
            uu_env::split_iterator::SplitIterator::state_double_quoted_backslash::h3f45bcdaf5eb467d(&v0, a1, v5);
            continue;
        case 1114112:
            v6 = a1->field_38;
            *((long long *)&a0->field_0) = 0x2200000000;
            *((unsigned long long *)&a0->padding_4[4]) = v6;
            return v6;
        default:
            uu_env::split_iterator::SplitIterator::take_one::h79c5ef4ea4fbd4ee(&v0, a1, v5);
        }
    } while (*((int *)&v0) == 8);
    v6 = *((long long *)&v2);
    a0->field_20 = v6;
    v7 = *((int128_t *)&v0);
    a0->field_10 = *((int128_t *)&v1);
    *((void*)&a0->field_0) = v7;
    return v6;
}

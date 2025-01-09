long long uu_env::split_iterator::SplitIterator::state_comment::ha611e5f8f3a5f309(struct_0 *a0, unsigned int a1)
{
    char v0;  // [bp-0x48]
    char v1;  // [bp-0x38]
    char v2;  // [bp-0x28]
    unsigned long long v4;  // rax
    int v5;  // xmm0

    v4 = uu_env::split_iterator::SplitIterator::get_current_char::h5ca55267f11846dc(a1);
    switch ((unsigned int)v4)
    {
    case 10:
        v4 = uu_env::split_iterator::SplitIterator::skip_one::hcd63dec953ae1fd1(&v0, a1);
        if (*((int *)&v0) == 8)
        {
            a0->field_0 = 8;
            return v4;
        }
        v4 = *((long long *)&v2);
        a0->field_20 = v4;
        v5 = *((int128_t *)&v0);
        a0->field_10 = *((int128_t *)&v1);
        *((void*)&a0->field_0) = v5;
        return v4;
    case 1114112:
        a0->field_0 = 6;
        return v4;
    default:
        uu_env::string_parser::StringParser::skip_until_char_or_end::h68bc5015a87f77fa(a1 + 24, 10);
        break;
    }
}

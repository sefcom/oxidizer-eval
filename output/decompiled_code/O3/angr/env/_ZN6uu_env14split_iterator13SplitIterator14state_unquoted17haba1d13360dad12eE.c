long long uu_env::split_iterator::SplitIterator::state_unquoted::haba1d13360dad12e(struct_0 *a0, unsigned long a1, unsigned long a2)
{
    char v0;  // [bp-0x58]
    char v1;  // [bp-0x48]
    char v2;  // [bp-0x38]
    unsigned int v3;  // [sp-0x2c]
    unsigned long v5;  // edx
    unsigned int v6;  // rsi
    unsigned long long v7;  // rax
    unsigned int v8;  // rsi
    int v9;  // xmm0

    while (true)
    {
        v3 = uu_env::split_iterator::SplitIterator::get_current_char::h2af8d73cb3f5950a(a1);
        if (v3 <= 38)
        {
            switch (v3)
            {
            case 34:
                uu_env::split_iterator::SplitIterator::skip_one::h71a98384b0179ac9(&v0, a1);
                if (*((int *)&v0) != 8)
                {
                    a0->field_20 = *((long long *)&v2);
                    vvar_200{reg 224} = *((int128_t *)&v0);
                    a0->field_10 = *((int128_t *)&v1);
                    *((void*)&a0->field_0) = v9;
                    return v7;
                }
                uu_env::split_iterator::SplitIterator::state_double_quoted::hea825e418c7607d3(&v0, a1, v5);
                break;
            case 36:
                uu_env::split_iterator::SplitIterator::substitute_variable::heaa0426adf84fbcf(&v0, a1, v5);
                break;
            default:
LABEL_4d9dca:
            }
            goto LABEL_4d9dca;
        }
        else
        {
            switch (v3)
            {
            case 39:
                uu_env::split_iterator::SplitIterator::skip_one::h71a98384b0179ac9(&v0, a1);
                if (*((int *)&v0) != 8)
                {
                    a0->field_20 = *((long long *)&v2);
                    vvar_205{reg 224} = *((int128_t *)&v0);
                    a0->field_10 = *((int128_t *)&v1);
                    *((void*)&a0->field_0) = v9;
                    return v7;
                }
                uu_env::split_iterator::SplitIterator::state_single_quoted::h784c5138267a99cc(&v0, a1, v5);
                break;
            case 92:
                uu_env::split_iterator::SplitIterator::skip_one::h71a98384b0179ac9(&v0, a1);
                if (*((int *)&v0) != 8)
                {
                    a0->field_20 = *((long long *)&v2);
                    vvar_210{reg 224} = *((int128_t *)&v0);
                    a0->field_10 = *((int128_t *)&v1);
                    *((void*)&a0->field_0) = v9;
                    return v7;
                }
                uu_env::split_iterator::SplitIterator::state_unquoted_backslash::hade7a58ae3f7d0c6(&v0, a1, v5);
                break;
            case 1114112:
                v7 = uu_env::split_iterator::SplitIterator::push_word_to_words::hca11ba53a2367eb0(a1, v6, v5);
                a0->field_0 = 6;
                return v7;
            default:
LABEL_4d9dca:
                if ((char)_$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::he07a818086797159(&v3, " ", 6))
                    goto LABEL_4d9dfe;
                uu_env::split_iterator::SplitIterator::take_one::h3b27d33213b316aa(&v0, a1, v5);
                break;
            }
            if (*((int *)&v0) != 8)
            {
                a0->field_20 = *((long long *)&v2);
                vvar_215{reg 224} = *((int128_t *)&v0);
                a0->field_10 = *((int128_t *)&v1);
                *((void*)&a0->field_0) = v9;
                return v7;
            }
        }
    }
LABEL_4d9dfe:
    uu_env::split_iterator::SplitIterator::push_word_to_words::hca11ba53a2367eb0(a1, v8, v5);
    v7 = uu_env::split_iterator::SplitIterator::skip_one::h71a98384b0179ac9(&v0, a1);
    if (*((int *)&v0) == 8)
    {
        a0->field_0 = 8;
        return v7;
    }
    v7 = *((long long *)&v2);
    a0->field_20 = v7;
    v9 = *((int128_t *)&v0);
    a0->field_10 = *((int128_t *)&v1);
    *((void*)&a0->field_0) = v9;
    return v7;
}

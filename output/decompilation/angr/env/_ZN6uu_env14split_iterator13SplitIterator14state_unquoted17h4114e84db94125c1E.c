long long uu_env::split_iterator::SplitIterator::state_unquoted::h4114e84db94125c1(struct_0 *a0, unsigned long a1)
{
    char v1;  // [bp-0x58]
    char v2;  // [bp-0x54]
    char v3;  // [bp-0x48]
    char v4;  // [bp-0x44]
    char v5;  // [bp-0x38]
    char v6;  // [bp-0x34]
    unsigned int v7;  // [sp-0x2c]
    unsigned long long v9;  // rax
    int v10;  // xmm0
    int v11;  // xmm0

    while (true)
    {
        v7 = uu_env::split_iterator::SplitIterator::get_current_char::h5ca55267f11846dc(a1);
        if (v7 <= 38)
        {
            if (v7 == 34)
            {
                uu_env::split_iterator::SplitIterator::skip_one::hcd63dec953ae1fd1(&v1, a1);
                if (*((int *)&v1) != 8)
                {
                    *((long long *)&a0->field_10) = *((long long *)&v5);
                    vvar_209{reg 224} = *((int128_t *)&v1);
                    a0->field_4 = *((int128_t *)&v3);
                    *((void*)&a0->field_0) = v11;
                    return v9;
                }
                uu_env::split_iterator::SplitIterator::state_double_quoted::hb7981fc821b01516(&v1, a1);
                goto LABEL_4d9c69;
            }
            else
            {
                if (!(v7 == 36))
                    goto LABEL_4d9cfe;
                uu_env::split_iterator::SplitIterator::substitute_variable::h1db80b01658fc728(&v1, a1);
            }
        }
        if (v7 == 39)
        {
            uu_env::split_iterator::SplitIterator::skip_one::hcd63dec953ae1fd1(&v1, a1);
            if (*((int *)&v1) != 8)
            {
                *((long long *)&a0->field_10) = *((long long *)&v5);
                vvar_214{reg 224} = *((int128_t *)&v1);
                a0->field_4 = *((int128_t *)&v3);
                *((void*)&a0->field_0) = v11;
                return v9;
            }
            uu_env::split_iterator::SplitIterator::state_single_quoted::hb66b7ab13358fbb8(&v1, a1);
            goto LABEL_4d9c69;
        }
        else if (v7 != 92)
        {
            if (v7 == 0x110000)
            {
                v9 = uu_env::split_iterator::SplitIterator::push_word_to_words::h2e43e9c5d0186d6c(a1);
                a0->field_0 = 6;
                return v9;
            }
LABEL_4d9cfe:
            if ((char)_$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::h1ba5288d29bd1e28(&v7, " ", 6))
                break;
            uu_env::split_iterator::SplitIterator::take_one::h79c5ef4ea4fbd4ee(&v1, a1);
            v9 = *((int *)&v1);
            if ((unsigned int)v9 != 8)
            {
                *((int *)((char *)&a0->field_10 + 4)) = *((int *)&v6);
                v10 = *((int128_t *)&v2);
                *((int128_t *)((char *)&a0->field_4 + 4)) = *((int128_t *)&v4);
                *((void*)&(&a0->field_0)[1]) = v10;
                a0->field_0 = v9;
                return v9;
            }
        }
        else
        {
            uu_env::split_iterator::SplitIterator::skip_one::hcd63dec953ae1fd1(&v1, a1);
            if (*((int *)&v1) != 8)
            {
                *((long long *)&a0->field_10) = *((long long *)&v5);
                vvar_219{reg 224} = *((int128_t *)&v1);
                a0->field_4 = *((int128_t *)&v3);
                *((void*)&a0->field_0) = v11;
                return v9;
            }
            uu_env::split_iterator::SplitIterator::state_unquoted_backslash::h38190f9bed933da1(&v1, a1);
LABEL_4d9c69:
            if (*((int *)&v1) != 8)
            {
                *((long long *)&a0->field_10) = *((long long *)&v5);
                vvar_224{reg 224} = *((int128_t *)&v1);
                a0->field_4 = *((int128_t *)&v3);
                *((void*)&a0->field_0) = v11;
                return v9;
            }
        }
    }
    uu_env::split_iterator::SplitIterator::push_word_to_words::h2e43e9c5d0186d6c(a1);
    v9 = uu_env::split_iterator::SplitIterator::skip_one::hcd63dec953ae1fd1(&v1, a1);
    if (*((int *)&v1) == 8)
    {
        a0->field_0 = 8;
        return v9;
    }
    v9 = *((long long *)&v5);
    *((unsigned long long *)&a0->field_10) = v9;
    v11 = *((int128_t *)&v1);
    a0->field_4 = *((int128_t *)&v3);
    *((void*)&a0->field_0) = v11;
    return v9;
}

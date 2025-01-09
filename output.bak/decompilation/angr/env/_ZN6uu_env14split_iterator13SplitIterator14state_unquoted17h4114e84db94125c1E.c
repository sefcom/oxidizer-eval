long long uu_env::split_iterator::SplitIterator::state_unquoted::h4114e84db94125c1(struct_0 *a0, unsigned long a1)
{
    char v0;  // [bp-0x58]
    char v1;  // [bp-0x54]
    char v2;  // [bp-0x48]
    char v3;  // [bp-0x44]
    char v4;  // [bp-0x38]
    char v5;  // [bp-0x34]
    unsigned int v6;  // [sp-0x2c]
    unsigned long long v8;  // rax
    int v9;  // xmm0
    int v10;  // xmm0

    while (true)
    {
        v6 = uu_env::split_iterator::SplitIterator::get_current_char::h5ca55267f11846dc(a1);
        if (v6 <= 38)
        {
            if (v6 == 34)
            {
                uu_env::split_iterator::SplitIterator::skip_one::hcd63dec953ae1fd1(&v0, a1);
                if (*((int *)&v0) != 8)
                {
                    *((long long *)&a0->field_10) = *((long long *)&v4);
                    vvar_211{reg 224} = *((int128_t *)&v0);
                    a0->field_4 = *((int128_t *)&v2);
                    *((void*)&a0->field_0) = v10;
                    return v8;
                }
                uu_env::split_iterator::SplitIterator::state_double_quoted::hb7981fc821b01516(&v0, a1);
                goto LABEL_4d9c69;
            }
            else
            {
                if (!(v6 == 36))
                    goto LABEL_4d9cfe;
                uu_env::split_iterator::SplitIterator::substitute_variable::h1db80b01658fc728(&v0, a1);
            }
        }
        if (v6 == 39)
        {
            uu_env::split_iterator::SplitIterator::skip_one::hcd63dec953ae1fd1(&v0, a1);
            if (*((int *)&v0) != 8)
            {
                *((long long *)&a0->field_10) = *((long long *)&v4);
                vvar_216{reg 224} = *((int128_t *)&v0);
                a0->field_4 = *((int128_t *)&v2);
                *((void*)&a0->field_0) = v10;
                return v8;
            }
            uu_env::split_iterator::SplitIterator::state_single_quoted::hb66b7ab13358fbb8(&v0, a1);
            goto LABEL_4d9c69;
        }
        else if (v6 != 92)
        {
            if (v6 == 0x110000)
            {
                v8 = uu_env::split_iterator::SplitIterator::push_word_to_words::h2e43e9c5d0186d6c(a1);
                a0->field_0 = 6;
                return v8;
            }
LABEL_4d9cfe:
            if ((char)_$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::h1ba5288d29bd1e28(&v6, " ", 6))
                break;
            uu_env::split_iterator::SplitIterator::take_one::h79c5ef4ea4fbd4ee(&v0, a1);
            v8 = *((int *)&v0);
            if ((unsigned int)v8 != 8)
            {
                *((int *)((char *)&a0->field_10 + 4)) = *((int *)&v5);
                v9 = *((int128_t *)&v1);
                *((int128_t *)((char *)&a0->field_4 + 4)) = *((int128_t *)&v3);
                *((void*)&(&a0->field_0)[1]) = v9;
                a0->field_0 = v8;
                return v8;
            }
        }
        else
        {
            uu_env::split_iterator::SplitIterator::skip_one::hcd63dec953ae1fd1(&v0, a1);
            if (*((int *)&v0) != 8)
            {
                *((long long *)&a0->field_10) = *((long long *)&v4);
                vvar_221{reg 224} = *((int128_t *)&v0);
                a0->field_4 = *((int128_t *)&v2);
                *((void*)&a0->field_0) = v10;
                return v8;
            }
            uu_env::split_iterator::SplitIterator::state_unquoted_backslash::h38190f9bed933da1(&v0, a1);
LABEL_4d9c69:
            if (*((int *)&v0) != 8)
            {
                *((long long *)&a0->field_10) = *((long long *)&v4);
                vvar_226{reg 224} = *((int128_t *)&v0);
                a0->field_4 = *((int128_t *)&v2);
                *((void*)&a0->field_0) = v10;
                return v8;
            }
        }
    }
    uu_env::split_iterator::SplitIterator::push_word_to_words::h2e43e9c5d0186d6c(a1);
    v8 = uu_env::split_iterator::SplitIterator::skip_one::hcd63dec953ae1fd1(&v0, a1);
    if (*((int *)&v0) == 8)
    {
        a0->field_0 = 8;
        return v8;
    }
    v8 = *((long long *)&v4);
    *((unsigned long long *)&a0->field_10) = v8;
    v10 = *((int128_t *)&v0);
    a0->field_4 = *((int128_t *)&v2);
    *((void*)&a0->field_0) = v10;
    return v8;
}

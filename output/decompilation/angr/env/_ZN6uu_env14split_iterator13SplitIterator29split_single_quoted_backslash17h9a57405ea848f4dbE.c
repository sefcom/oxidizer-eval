long long uu_env::split_iterator::SplitIterator::split_single_quoted_backslash::h9a57405ea848f4db(struct_1 *a0, struct_0 *a1)
{
    unsigned int v0;  // [sp-0x44]
    char v1;  // [bp-0x40], Other Possible Types: unsigned long long, unsigned long
    unsigned long long v2;  // [sp-0x38]
    char v3;  // [bp-0x30]
    char v4;  // [bp-0x20]
    unsigned long long v6;  // rax
    int v7;  // xmm0

    v0 = uu_env::split_iterator::SplitIterator::get_current_char::h5ca55267f11846dc(a1);
    if (v0 > 91)
    {
        if (v0 == 92)
            goto LABEL_4da077;
        if (v0 == 0x110000)
        {
            v6 = a1->field_38;
            *((unsigned long long *)&a0->field_0) = 0x2700000000;
            *((unsigned long long *)&a0->padding_4[4]) = v6;
            return v6;
        }
    }
    else
    {
        if (v0 == 10)
        {
            v6 = uu_env::split_iterator::SplitIterator::skip_one::hcd63dec953ae1fd1(&v1, a1);
            if (*((int *)&v1) != 8)
            {
                v6 = *((long long *)&v4);
                a0->field_20 = v6;
                v7 = *((int128_t *)&v1);
                a0->field_10 = *((int128_t *)&v3);
                *((void*)&a0->field_0) = v7;
                return v6;
            }
            a0->field_0 = 8;
            return v6;
        }
        if (v0 == 39)
        {
LABEL_4da077:
            v6 = uu_env::split_iterator::SplitIterator::take_one::h79c5ef4ea4fbd4ee(&v1, a1);
            if ((int)v1 == 8)
            {
                a0->field_0 = 8;
                return v6;
            }
            a0->field_20 = *((long long *)&v4);
            vvar_172{reg 224} = *((int128_t *)&v1);
            a0->field_10 = *((int128_t *)&v3);
            *((void*)&a0->field_0) = v7;
            return v6;
        }
    }
    v1 = "r";
    v2 = " ";
    if (!_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::h0082e106958e48e1(&v1, &v0))
    {
        v6 = a1->field_38;
        a0->field_0 = 3;
        *((unsigned int *)&a0->padding_4[0]) = v0;
        *((unsigned long long *)&a0->padding_4[4]) = v6;
        return v6;
    }
    uu_env::split_iterator::SplitIterator::push_char_to_word::h02dd43edde3f93fe(a1, 92);
    goto LABEL_4da077;
}

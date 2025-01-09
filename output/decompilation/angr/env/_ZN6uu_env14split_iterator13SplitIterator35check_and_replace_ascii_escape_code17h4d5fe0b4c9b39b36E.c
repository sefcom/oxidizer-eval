long long uu_env::split_iterator::SplitIterator::check_and_replace_ascii_escape_code::h4d5fe0b4c9b39b36(struct_1 *a0, unsigned long a1, unsigned int a2)
{
    unsigned int v0;  // [sp-0x54]
    unsigned long v1;  // [sp-0x50], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0x48]
    char v3;  // [bp-0x40]
    char v4;  // [bp-0x30]
    char v5;  // [bp-0x20]
    struct_0 *v7;  // rax
    int v8;  // xmm0

    v0 = a2;
    v1 = "r";
    v2 = " ";
    v7 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::find::hfeef1e69f7fc6ffe(&v1, &v0);
    if (!v7)
    {
        a0->padding_4[0] = 0;
        a0->field_0 = 8;
        return v7;
    }
    uu_env::split_iterator::SplitIterator::skip_one::hcd63dec953ae1fd1(&v3, a1);
    if (*((int *)&v3) != 8)
    {
        v7 = *((long long *)&v5);
        a0->field_20 = v7;
        v8 = *((int128_t *)&v3);
        a0->field_10 = *((int128_t *)&v4);
        *((void*)&a0->field_0) = v8;
        return v7;
    }
    v7 = uu_env::split_iterator::SplitIterator::push_char_to_word::h02dd43edde3f93fe(a1, v7->field_4);
    a0->padding_4[0] = 1;
    a0->field_0 = 8;
    return v7;
}

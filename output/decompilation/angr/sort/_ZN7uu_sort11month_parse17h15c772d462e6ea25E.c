long long uu_sort::month_parse::h15c772d462e6ea25(unsigned long long a0, unsigned long long a1)
{
    unsigned long v0;  // [sp-0x30], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x28]
    char *v3;  // rbx
    struct_0 *v4;  // rax
    unsigned long long v5;  // rdx
    void* v6;  // rcx
    void* v7;  // rsi
    char *v8;  // rbx
    unsigned long v9;  // rdx
    void* v12;  // rax

    v3 = core::str::_$LT$impl$u20$str$GT$::trim_matches::h13cb0d7168f45d26(a0, a1);
    v0 = &g_5ffe20;
    v1 = &g_5fff40;
    v4 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h45e2651b910dc2d2(&v0);
    if (!v4)
        return 0;
    do
    {
        v5 = v4->field_0;
        v6 = v4->field_8;
        if (!v6)
        {
            v7 = 0;
            v6 = 0;
            v8 = v3;
        }
        else
        {
            if (v6 >= v9)
            {
                if ((v4 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h45e2651b910dc2d2(&v0), v4))
                    continue;
            }
            else
            {
                if (*((char *)(v3 + v6)) <= 191)
                    continue;
            }
            v8 = v3;
            v7 = v6;
        }
        if ((char)::0x51c850::core::slice::ascii::_$LT$impl$u20$$u5b$u8$u5d$$GT$::eq_ignore_ascii_case::he7c08894b5496a04(v8, v7, v5, v6))
        {
            v12 = v4->field_10;
            return v12;
        }
    } while ((v4 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h45e2651b910dc2d2(&v0), v4));
}

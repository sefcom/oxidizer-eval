long long uu_sort::month_parse::h15c772d462e6ea25(unsigned long long a0, unsigned long long a1)
{
    unsigned long v0;  // [sp-0x30]
    unsigned long long v1;  // [sp-0x28]
    char *v3;  // rbx
    struct_0 *v4;  // rax
    struct_0 *v5;  // r15
    unsigned long long v6;  // rdx
    void* v7;  // rcx
    char *v8;  // rdi
    void* v9;  // rsi
    unsigned long v10;  // rdx
    void* v11;  // rax

    v3 = core::str::_$LT$impl$u20$str$GT$::trim_matches::h13cb0d7168f45d26(a0, a1);
    v0 = &g_5ffe20;
    v1 = &g_5fff40;
    v4 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h45e2651b910dc2d2(&v0);
    if (!v4)
        return 0;
    v5 = v4;
    do
    {
        v6 = v5->field_0;
        v7 = v5->field_8;
        if (!v7)
        {
            v8 = v3;
            v9 = 0;
            v7 = 0;
        }
        else
        {
            if (v7 < v10)
            {
                if (*((char *)(v3 + v7)) <= 191)
                    continue;
            }
            else
            {
                if (!(v7 == v10))
                    continue;
            }
            v8 = v3;
            v9 = v7;
        }
        if ((char)::0x51c850::core::slice::ascii::_$LT$impl$u20$$u5b$u8$u5d$$GT$::eq_ignore_ascii_case::he7c08894b5496a04(v8, v9, v6, v7))
        {
            v11 = v5->field_10;
            return v11;
        }
    } while ((v5 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h45e2651b910dc2d2(&v0), v5));
}

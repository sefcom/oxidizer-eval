long long uu_sort::month_parse::h1bc0fc1ced9b74fe(unsigned long long a0, unsigned long long a1, unsigned long a2)
{
    unsigned long v0;  // [sp-0x30], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x28]
    char *v3;  // rbx
    struct_0 *v4;  // rax
    unsigned long long v5;  // rdx
    void* v6;  // rcx
    char *v8;  // rbx
    unsigned long v9;  // rdx
    void* v12;  // rax

    v3 = core::str::_$LT$impl$u20$str$GT$::trim_matches::he29caa9cef101389(a0, a1);
    v0 = &g_5ff2f8;
    v1 = &g_5ff418;
    v4 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h434c77470c983206(&v0);
    if (v4)
    {
        do
        {
            v5 = v4->field_0;
            v6 = v4->field_8;
            if (!v6)
            {
                v6 = 0;
            }
            else if (v6 < v9)
            {
                if (*((char *)(v3 + v6)) <= 191)
                    continue;
            }
            else
            {
                if ((v4 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h434c77470c983206(&v0), v4))
                    continue;
            }
            if ((char)::0x51b890::core::slice::ascii::_$LT$impl$u20$$u5b$u8$u5d$$GT$::eq_ignore_ascii_case::he7c08894b5496a04(v8, 0, v5, v6))
            {
                v12 = v4->field_10;
                return v12;
            }
        } while ((v4 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h434c77470c983206(&v0), v4));
    }
    return 0;
}

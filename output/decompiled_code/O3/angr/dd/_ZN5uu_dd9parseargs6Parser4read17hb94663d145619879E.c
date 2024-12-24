long long uu_dd::parseargs::Parser::read::hb94663d145619879(struct_0 *a0, unsigned long long a1, unsigned long a2, unsigned long a3)
{
    unsigned long v0;  // [sp-0x50], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x48]
    char v2;  // [bp-0x40]
    char v3;  // [bp-0x30]
    unsigned long long v5[2];  // rax
    int v6;  // xmm0

    v0 = a2;
    v1 = a3 * 16 + a2;
    v5 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hbfe56e53632ad505(&v0);
    if (v5)
    {
        do
        {
            uu_dd::parseargs::Parser::parse_operand::hd92b6390a38bf471(&v2, a1, v5[0], v5[1]);
            if (*((int *)&v2) != 14)
            {
                v6 = *((int128_t *)&v2);
                *((int128_t *)((char *)&a0->field_8 + 8)) = *((int128_t *)&v3);
                *((void*)&(&a0->field_0)[1]) = v6;
                a0->field_0 = 2;
                return core::ptr::drop_in_place$LT$uu_dd..parseargs..Parser$GT$::h4464d64524f9df25(a1);
            }
        } while ((v5 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hbfe56e53632ad505(&v0), v5));
    }
}

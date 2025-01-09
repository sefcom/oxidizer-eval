long long uu_tail::args::Settings::verify::h67589dab63f9aa61(struct_0 *a0)
{
    unsigned long v0;  // [sp-0x18], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x10]
    unsigned long long v3;  // rax
    char v4;  // cl
    unsigned long long v5;  // rax
    unsigned long long v6;  // rax

    v0 = a0->field_20;
    v1 = a0->field_28 * 48 + v0;
    v3 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::h4b3a6ea672657da1(&v0);
    v4 = a0->field_4c;
    if ((char)v3)
    {
        v5 = v3 & 0xffffffffffffff00 | 1;
        if ((v4 & 1))
            return v5;
    }
    if (v4 != 2)
        return 0;
    v6 = a0->field_0;
    if (v6 == 4)
        v6 = a0->field_8;
    v5 = v6 & 0xffffffffffffff00 | (v6 == 3) * 2;
    return v5;
}

long long uu_join::Input$LT$Sep$GT$::compare::h261f74b1101789a8(char a0, void* a1, unsigned long a2, void* a3, unsigned long a4)
{
    unsigned long v0;  // [sp-0x28], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x20]
    unsigned long v2;  // [sp-0x18], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x10]
    unsigned long long v4;  // [sp-0x8]
    unsigned long v6;  // rbx
    unsigned long long v9;  // rbx
    unsigned long long v10;  // cc_ndep
    unsigned long long v12;  // rax

    if (!(a1 && a3))
        return (!a1 ? -(0 < a3) : 1);
    v4 = v6;
    if (!a0)
    {
        v9 = a4 - a4;
        return ((char)amd64g_calculate_condition(9, 20, v12, 0, v10) ? (-0x100 | v12) & 4294967295 & 4294967295 : 255);
    }
    v0 = a1;
    v1 = a4;
    v2 = a3;
    v3 = a4;
    return _$LT$uu_join..CaseInsensitiveSlice$u20$as$u20$core..cmp..Ord$GT$::cmp::h8ef845627fb620c6(&v0, &v2);
}

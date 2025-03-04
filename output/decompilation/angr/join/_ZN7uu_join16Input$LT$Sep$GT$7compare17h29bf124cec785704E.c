long long uu_join::Input$LT$Sep$GT$::compare::h29bf124cec785704(char a0, void* a1, unsigned long a2, void* a3, unsigned long a4)
{
    unsigned long v0;  // [sp-0x28]
    unsigned long long v1;  // [sp-0x20]
    unsigned long v2;  // [sp-0x18]
    unsigned long long v3;  // [sp-0x10]
    unsigned long long v4;  // [sp-0x8]
    unsigned long v6;  // rbx
    unsigned long v9;  // r8
    unsigned long long v10;  // cc_ndep
    unsigned long long v11;  // rax
    unsigned long long v13;  // rbx
    unsigned long long v14;  // rax

    if (!(a1 && a3))
        return (!a1 ? -(0 < a3) : 1);
    v4 = v6;
    if (a0)
    {
        v0 = a1;
        v1 = a2;
        v2 = a3;
        v3 = a4;
        return _$LT$uu_join..CaseInsensitiveSlice$u20$as$u20$core..cmp..Ord$GT$::cmp::h5b1b26860e9af836(&v0, &v2);
    }
    if (a2 < a4)
        v9 = a2;
    else
        v9 = a4;
    v11 = memcmp(a1, a3, v9);
    if ((unsigned int)v6)
        v13 = v11;
    else
        v13 = a2 - a4;
    v14 = ((char)amd64g_calculate_condition(9, 20, v13, 0, v10) ? v13 : 255);
    return v14;
}

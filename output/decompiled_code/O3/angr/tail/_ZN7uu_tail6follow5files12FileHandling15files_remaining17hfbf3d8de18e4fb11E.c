long long uu_tail::follow::files::FileHandling::files_remaining::hfbf3d8de18e4fb11(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    char v0;  // [bp-0x58]
    unsigned long long v2[3];  // rax
    unsigned long long v3[3];  // r14
    unsigned long long v4;  // r15
    unsigned long long v5;  // r12
    unsigned long long v6;  // rdx
    unsigned long long v7;  // rcx
    unsigned long long v8;  // r8
    unsigned long long v9;  // r9

    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::iter::heca198b816bfa402(&v0, a0 + 24);
    while (true)
    {
        v2 = _$LT$hashbrown..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h36e271b650ac4cc7(&v0);
        v3 = v2;
        if (!v3)
            break;
        v4 = v3[1];
        v5 = v3[2];
        v2 = _$LT$std..path..Path$u20$as$u20$uu_tail..paths..PathExtTail$GT$::is_tailable::ha332c470f36b9fa4(v4, v5);
        if (!(!(char)v2) || !((v2 = _$LT$std..path..Path$u20$as$u20$uu_tail..paths..PathExtTail$GT$::is_stdin::hddaea54ba128b9a2(v4, v5, v6, v7, v8, v9), !(char)v2)))
            break;
    }
    return v2 | -0x100 | v3;
}

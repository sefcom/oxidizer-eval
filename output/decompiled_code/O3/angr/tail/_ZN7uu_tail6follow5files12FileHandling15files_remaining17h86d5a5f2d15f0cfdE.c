long long uu_tail::follow::files::FileHandling::files_remaining::h86d5a5f2d15f0cfd(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5)
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

    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::iter::hd64d950704f7a77f(&v0, a0 + 24);
    while (true)
    {
        v2 = _$LT$hashbrown..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h2eaa0b924946ce33(&v0);
        v3 = v2;
        if (!v3)
            break;
        v4 = v3[1];
        v5 = v3[2];
        v2 = _$LT$std..path..Path$u20$as$u20$uu_tail..paths..PathExtTail$GT$::is_tailable::hfd31d73cfedfa97d(v4, v5);
        if (!(!(char)v2) || !((v2 = _$LT$std..path..Path$u20$as$u20$uu_tail..paths..PathExtTail$GT$::is_stdin::h7b78c224abf6fd98(v4, v5, v6, v7, v8, v9), !(char)v2)))
            break;
    }
    return v2 | -0x100 | v3;
}

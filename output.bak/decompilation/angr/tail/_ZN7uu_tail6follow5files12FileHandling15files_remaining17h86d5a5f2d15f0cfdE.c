char uu_tail::follow::files::FileHandling::files_remaining::h86d5a5f2d15f0cfd(unsigned long a0)
{
    char v0;  // [bp-0x58]
    unsigned long long v2[3];  // r14
    unsigned long long v3;  // r15
    unsigned long long v4;  // r12

    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::iter::hd64d950704f7a77f(&v0, a0 + 24);
    while (true)
    {
        v2 = _$LT$hashbrown..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h2eaa0b924946ce33(&v0);
        if (!v2)
            break;
        v3 = v2[1];
        v4 = v2[2];
        if (!(!(char)_$LT$std..path..Path$u20$as$u20$uu_tail..paths..PathExtTail$GT$::is_tailable::hfd31d73cfedfa97d(v3, v4)) || !(!(char)_$LT$std..path..Path$u20$as$u20$uu_tail..paths..PathExtTail$GT$::is_stdin::h7b78c224abf6fd98(v3, v4)))
            break;
    }
    return v2;
}

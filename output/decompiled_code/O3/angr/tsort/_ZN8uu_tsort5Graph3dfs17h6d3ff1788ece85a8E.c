long long uu_tsort::Graph::dfs::h6d3ff1788ece85a8(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4[3])
{
    char v0;  // [bp-0x48]
    unsigned long v1;  // [sp-0x38], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0x30]
    unsigned int v4;  // ebp
    unsigned long long v5[5];  // rax
    unsigned long long v6[2];  // rax
    unsigned long long v7;  // rax

    v4 = vvar_57{reg 56} | -0x100 | 1;
    if ((char)_$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::h42d257bc62dd9328(&v0, a4[1], a4[2]))
        return v4;
    if (hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h9808ee5d91771ad7(a3, &v0))
        return 0;
    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h2be3e5d0a6b37c2d(a3, a1, a2);
    alloc::vec::Vec$LT$T$C$A$GT$::push::hbbd106ac298c97ce(a4, a1, a2);
    v5 = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::hfa0a63b39f7acc9f(a0, a1, a2);
    if (v5)
    {
        v1 = v5[3];
        v2 = v5[4] * 16 + v1;
        while (true)
        {
            v6 = ::0x4b6010::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0c0c46eaf379cb40(&v1);
            if (!v6)
                break;
            if ((char)uu_tsort::Graph::dfs::h6d3ff1788ece85a8(a0, v6[0], v6[1], a3, a4))
                return v4;
        }
    }
    v7 = a4[2];
    if (v7)
        a4[2] = v7 - 1;
}

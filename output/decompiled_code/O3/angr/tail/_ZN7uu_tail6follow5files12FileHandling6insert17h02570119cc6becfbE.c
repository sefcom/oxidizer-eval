long long uu_tail::follow::files::FileHandling::insert::h02570119cc6becfb(struct_0 *a0, unsigned long long a1, unsigned long long a2, void* a3, unsigned long long a4, unsigned long long a5)
{
    char v0;  // [bp-0x210]
    char v1;  // [bp-0x200]
    int v2;  // [sp-0x1f8]
    unsigned long long v3;  // [sp-0x1e8]
    int v4;  // [sp-0x1d8]
    unsigned long long v5;  // [sp-0x1c8]
    char v6;  // [bp-0xf8]
    char v7;  // [bp-0xe8]
    unsigned long long v9;  // r8
    unsigned long long v10;  // r9

    uu_tail::follow::files::FileHandling::canonicalize_path::h4f4e134723cec356(&v0, a1, a2, a3, a4, a5);
    if ((char)a4)
    {
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h9b6266670bb8bdc5(&v6, &v0);
        v5 = *((long long *)&v7);
        *((int128_t *)&v4) = *((int128_t *)&v6);
        ::0x501740::core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h57bae6fd0323aae7(a0);
        a0->field_10 = v5;
        *((void*)&a0->field_0) = v4;
    }
    v3 = *((long long *)&v1);
    *((int128_t *)&v2) = *((int128_t *)&v0);
    memcpy(&v6, a3, 216);
    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h0080c7a6f6638314(&v4, a0 + 1, &v2, &v6, v9, v10);
    return core::ptr::drop_in_place$LT$core..option..Option$LT$uu_tail..follow..files..PathData$GT$$GT$::hf6d193976020eb04(&v4);
}

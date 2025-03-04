long long uu_tsort::Graph::detect_cycle::h0c5291f558dc399a(struct_0 *a0, struct_1 *a1)
{
    unsigned long v0;  // [sp-0xd0]
    unsigned long long v1;  // [sp-0xc8]
    void* v2;  // [sp-0xc0]
    char v3;  // [bp-0xb0]
    char v4;  // [bp-0xa8]
    char v5;  // [bp-0xa0]
    char v6;  // [bp-0x90]
    int v7;  // [sp-0x88]
    int v8;  // [sp-0x78]
    unsigned long long v9;  // [sp-0x68]
    char v10;  // [bp-0x60]
    unsigned long long v13[2];  // rax
    unsigned long long v14;  // rbp
    unsigned long long v15;  // rbx

    _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..default..Default$GT$::default::h4998c0ffd20ae47a(&v10);
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h22ab93a426132a55(&v3, a1->field_18, 0);
    if (*((long long *)&v3))
        alloc::raw_vec::handle_error::h2372476369f9b8ac(v0, *((long long *)&v5)); /* do not return */
    v0 = *((long long *)&v4);
    v1 = *((long long *)&v5);
    v2 = 0;
    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::iter::hc8089db10f6b491b(&v3, a1);
    v9 = *((long long *)&v6);
    *((int128_t *)&v8) = *((int128_t *)&v5);
    *((int128_t *)&v7) = *((int128_t *)&v3);
    do
    {
        do
        {
            v13 = _$LT$hashbrown..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hc5c7a3920db9fcf3(&v7);
            if (!v13)
                core::panicking::panic::h8c3a660c3523e4a4("internal error: entered unreachable code/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/collections/vec_deque/mod.rs", 40, &g_521530); /* do not return */
        } while ((v14 = v13[0], v15 = v13[1], hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::hc8a189156979c911(&v10, v14, v15)));
    } while (!(char)uu_tsort::Graph::dfs::h6d3ff1788ece85a8(a1, v14, v15, &v10, &v0));
    a0->field_10 = v2;
    a0->field_0 = *((int128_t *)&v0);
    return core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$$RF$str$GT$$GT$::h784233dee5191ff5(&v10);
}

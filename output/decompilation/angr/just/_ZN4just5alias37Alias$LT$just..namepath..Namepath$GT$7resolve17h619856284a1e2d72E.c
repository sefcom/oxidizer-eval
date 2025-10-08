char just::alias::Alias<just::namepath::Namepath>::resolve(struct_1 *a0, struct_0 *a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x30]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rdx
    int v4;  // xmm1
    int v5;  // xmm2
    int v6;  // xmm3

    v0 = a2;
    v2 = a1->field_8.last(a1->field_10).lexeme();
    if (!(char)v2.equal(v3, a2 + 160.lexeme(), v3))
        core::panicking::panic("assertion failed: self.target.last().lexeme() == target.name()src/alias.rsalias src/analyzer.rs", 62, &g_82d9a8); /* do not return */
    a0->field_10 = a1->field_60;
    a0->field_0 = *((int128_t *)&a1->field_58);
    v4 = *((int128_t *)((char *)&a1->field_18 + 8));
    v5 = *((int128_t *)((char *)&a1->field_28 + 8));
    v6 = *((int128_t *)((char *)&a1->field_38 + 8));
    a0->field_20 = *((int128_t *)&(&a1->field_10)[1]);
    *((void*)&a0->field_30) = v4;
    *((void*)&a0->field_40) = v5;
    *((void*)&a0->field_50) = v6;
    a0->field_60 = *((long long *)((char *)&a1->field_48 + 8));
    a0->field_18 = a2;
    return core::ptr::drop_in_place<just::namepath::Namepath>(a1);
}

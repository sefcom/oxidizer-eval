long long uu_expr::syntax_tree::Parser::next::he96b47f70d6fcb97(struct_2 *a0, struct_0 *a1)
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rdi
    unsigned long long *v3;  // rax
    unsigned long long v4;  // rax
    unsigned long long v5;  // rdi
    unsigned long long *v6;  // rax

    v1 = a1->field_8;
    v2 = a1->field_10;
    if (v2 < v1)
    {
        v3 = a1->field_0;
        a1->field_10 = v2 + 1;
        *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&v3[2 * v2]);
        v4 = 7;
    }
    else
    {
        v5 = v2 - 1;
        if (v5 >= v1)
            core::panicking::panic_bounds_check::h25a5330941572dd1(v5, v1, &g_5a30d0); /* do not return */
        v6 = a1->field_0;
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hd7cff6a23e23a786(&(&a0->field_0)[1], v6[2 * v5], v6[1 + 2 * v5]);
        v4 = 1;
    }
    a0->field_0 = v4;
    return v4;
}

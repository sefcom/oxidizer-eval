long long uu_expr::syntax_tree::Parser::next::he8924565b55ea562(struct_2 *a0, struct_0 *a1)
{
    unsigned long long v1;  // rax
    unsigned long long *v2;  // rdi
    unsigned long long *v3;  // rax
    unsigned long long v4;  // rax
    unsigned long long *v5;  // rdi
    unsigned long long *v6;  // rax

    v1 = a1->field_8;
    v2 = a1->field_10;
    if (v2 < v1)
    {
        v3 = a1->field_0;
        a1->field_10 = (char *)v2 + 1;
        *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)((char *)v3 + 0x10 * v2));
        v4 = 7;
    }
    else
    {
        v5 = (char *)v2 + 1;
        if (v5 >= v1)
            core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
        v6 = a1->field_0;
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h45458f0c81c4a31c(&(&a0->field_0)[1], *((long long *)((char *)v6 + 0x10 * v5)), *((long long *)(8 + (char *)v6 + 0x10 * v5)));
        v4 = 1;
    }
    a0->field_0 = v4;
    return v4;
}

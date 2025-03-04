long long uu_expr::syntax_tree::NumOrStr::eval_as_bigint::hba12e6d71c8187fc(struct_1 *a0, struct_0 *a1)
{
    int v0;  // [sp-0x48]
    unsigned long long v1;  // [sp-0x38]
    char v2;  // [bp-0x30]
    char v3;  // [bp-0x20]
    int v5;  // xmm0
    struct_2 *v6;  // rax
    unsigned long long v7;  // rax
    int v8;  // xmm0
    unsigned long long v9;  // rax

    if (a1->field_0 != 0x8000000000000000)
    {
        v5 = *((int128_t *)&a1->field_0);
        *((uint128_t *)((char *)&a0->field_8 + 8)) = a1->field_8;
        *((void*)&(&a0->field_0)[1]) = v5;
        a0->field_0 = 0;
        return v9;
    }
    v1 = *((long long *)((char *)&a1->field_8 + 8));
    *((int128_t *)&v0) = *((int128_t *)&(&a1->field_0)[1]);
    num_bigint::bigint::convert::_$LT$impl$u20$num_traits..Num$u20$for$u20$num_bigint..bigint..BigInt$GT$::from_str_radix::hb9365f03b0604201(&v2, (long long)(&v0)[8], *((long long *)((char *)&a1->field_8 + 8)));
    v6 = &(&a0->field_0)[1];
    if (*((long long *)&v2) == 0x8000000000000000)
    {
        v6->field_0 = 2;
        v7 = 1;
    }
    else
    {
        v8 = *((int128_t *)&v2);
        v6->field_10 = *((int128_t *)&v3);
        *((void*)&v6->field_0) = v8;
        v7 = 0;
    }
    a0->field_0 = v7;
    v9 = ::0x52dc20::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2134d78e0f3082f1(&v0);
    return v9;
}

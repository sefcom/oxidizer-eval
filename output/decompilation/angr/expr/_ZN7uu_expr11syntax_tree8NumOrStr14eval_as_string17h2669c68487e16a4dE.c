long long uu_expr::syntax_tree::NumOrStr::eval_as_string::h2669c68487e16a4d(struct_1 *a0, struct_0 *a1)
{
    int v0;  // [sp-0x28]
    int v1;  // [sp-0x18]

    if (a1->field_0 == 0x8000000000000000)
    {
        a0->field_10 = *((long long *)((char *)&a1->field_8 + 8));
        a0->field_0 = *((int128_t *)&(&a1->field_0)[1]);
        return a0;
    }
    *((uint128_t *)&v1) = a1->field_8;
    *((int128_t *)&v0) = *((int128_t *)&a1->field_0);
    _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h4c9da07ea4794d0b(a0, &v0);
    core::ptr::drop_in_place$LT$num_bigint..bigint..BigInt$GT$::h4ffd1c0c3ebf756b();
    return a0;
}

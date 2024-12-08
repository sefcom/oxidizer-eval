long long uu_expr::syntax_tree::NumOrStr::to_bigint::hae27e85fb0f1bb46(struct_0 *a0, unsigned long long a1[4])
{
    unsigned long long v0;  // [sp-0x18]
    unsigned long long v1;  // [sp-0x10]
    unsigned long v2;  // [sp-0x8]
    unsigned long v5;  // rbx

    if (a1[0] == 0x8000000000000000)
        return num_bigint::bigint::convert::_$LT$impl$u20$num_traits..Num$u20$for$u20$num_bigint..bigint..BigInt$GT$::from_str_radix::h5200ae01d7570e1d(a0, a1[2], a1[3]);
    *((int *)&v2) = vvar_13{reg 56};
    v1 = v5;
    v0 = 0x8000000000000000;
    a0->field_18 = a1[3];
    return _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha618ce19124f14e9(a0, a1);
}

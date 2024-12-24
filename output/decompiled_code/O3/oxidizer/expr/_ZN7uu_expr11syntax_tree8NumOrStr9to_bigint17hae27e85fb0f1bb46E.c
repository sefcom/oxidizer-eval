fn uu_expr::syntax_tree::NumOrStr::to_bigint(a0: void*, a1: void*) -> u64 {
    let v0: u64;  // [sp-0x18]
    let v1: u64;  // [sp-0x10]
    let v2: i64;  // [sp-0x8]
    let v5: u64;  // rbx

    if a1->field_0 == 0x8000000000000000 {
        return num_bigint::bigint::convert::<impl num_traits::Num for num_bigint::bigint::BigInt>::from_str_radix(a0, a1->field_10, a1->field_18);
    }
    v2 = vvar_13{reg 56};
    v1 = v5;
    v0 = 0x8000000000000000;
    *(&a0->field_18 as &i64) = a1->field_18;
    return <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(a0, a1);
}

fn uu_expr::syntax_tree::NumOrStr::to_bigint(a1: i64) -> : struct25 {
    let a0: i64;  // rdi
    let v0: void*;  // [bp-0x18]
    let v1: u64;  // [bp-0x10]
    let v3: u64;  // rbx

    if !((((0 ^ *(a1 as &i64)) & (0 ^ -(*(a1 as &i64)))) >> 63) as char) {
        v1 = v3;
        v0 = 0;
        <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(a0, a1[8] as i64, a1[16] as i64);
        *((a0 + 24) as &i8) = a1[24] as i8;
        return;
    }
    num_bigint::bigint::convert::<impl num_traits::Num for num_bigint::bigint::BigInt>::from_str_radix(a0, a1[16] as i64, a1[24] as i64);
    return;
}

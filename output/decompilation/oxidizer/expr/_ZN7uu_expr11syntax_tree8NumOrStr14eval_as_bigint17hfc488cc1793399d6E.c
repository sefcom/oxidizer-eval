fn uu_expr::syntax_tree::NumOrStr::eval_as_bigint(a0: void*, a1: void*) -> int {
    let v0: Result<struct25, struct9>;  // [bp-0x30]
    let v2: u64;  // rax
    let v3: u64;  // rax
    let v4: u128;  // xmm0

    if !((((0 ^ *(a1 as &i64)) & (0 ^ -(*(a1 as &i64)))) >> 63) as char) {
        v4 = *(a1 as &i128);
        return Some(struct40 {
            field_0: 0
            field_8: v4
            field_24: a1[16] as i128
        });
    }
    v0 = num_bigint::bigint::convert::<impl num_traits::Num for num_bigint::bigint::BigInt>::from_str_radix(a1[16] as i64, a1[24] as i64);
    v2 = a0 + 8;
    match v0 {
        Err(_) => {
            *(v2 as &i64) = 2;
            v3 = 1;
        },
        Ok(_) => {
            *((v2 + 16) as &i128) = *((&v0 as &char + 16) as &i128);
            *(v2 as &i128) = v0 as i128;
            v3 = 0;
        },
    }
    return struct8 {
        field_0: v3
    };
}

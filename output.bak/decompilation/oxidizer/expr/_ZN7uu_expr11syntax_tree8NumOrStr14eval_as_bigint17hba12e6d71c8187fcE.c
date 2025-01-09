fn uu_expr::syntax_tree::NumOrStr::eval_as_bigint(a0: &Option<struct32>, a1: void*) -> u64 {
    let v0: i128;  // [sp-0x48]
    let v1: i64;  // [sp-0x38]
    let v2: Result<struct25, struct1>;  // [sp-0x30], Other Possible Types: i208
    let v5: i64;  // rax
    let v7: i128;  // xmm0

    return struct40 {
        field_0: 0
        field_8: v4
        field_24: *((a1 + 16) as &i128)
    };
    v1 = *((a1 + 24) as &i64);
    v0 = *((a1 + 8) as &i128);
    v2 = num_bigint::bigint::convert::<impl num_traits::Num for num_bigint::bigint::BigInt>::from_str_radix(*((&v0 as &char + 8) as &i64), *((a1 + 24) as &i64));
    v5 = a0 + 8;
    match v2 {
        Err(_) => {
            *(v5 as &i64) = 2;
        },
        Ok(_) => {
            v7 = v2;
            *((v5 + 16) as &i208) = v2;
            *(v5 as &i128) = v7;
        },
    }
    return struct8 {
        field_0: v6
    };
}

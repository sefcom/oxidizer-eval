fn uu_expr::syntax_tree::NumOrStr::eval_as_bigint(a0: &struct40, a1: void*) -> u64 {
    let v0: iNone;  // [sp-0x48]
    let v1: i64;  // [sp-0x38]
    let v2: Result<struct25, struct1>;  // [sp-0x30]
    let v4: iNone;  // xmm0
    let v5: i64;  // rax
    let v6: iNone;  // xmm0

    if *(a1 as &i64) != 0x8000000000000000 {
        v4 = *(a1 as &i128);
        return struct40 {
            field_0: 0
            field_8: v4
            field_24: *((a1 + 16) as &i128)
        };
    }
    v1 = *((a1 + 24) as &i64);
    v0 = *((a1 + 8) as &i128);
    v2 = num_bigint::bigint::convert::<impl num_traits::Num for num_bigint::bigint::BigInt>::from_str_radix((&v0)[8] as i64, *((a1 + 24) as &i64));
    v5 = a0 + 8;
    match v2 {
        Ok(_) => {
            v6 = v2 as i128;
            *((v5 + 16) as &i128) = v2 as i128;
            *(v5 as void*) = v6;
        },
        Err(_) => {
            *(v5 as &i64) = 2;
        },
    }
}

fn uu_expr::syntax_tree::NumOrStr::eval_as_string(a0: &struct_1, a1: &struct_0, a2: i64, a3: i64, a4: i64, a5: i64) -> u64 {
    let v0: void*;  // [sp-0x80]
    let v1: u64;  // [sp-0x78]
    let v2: void*;  // [sp-0x70]
    let v3: u128;  // [sp-0x68]
    let v4: u128;  // [sp-0x58]
    let v5: void*;  // [sp-0x48]
    let v6: void*;  // [sp-0x38]
    let v7: u64;  // [sp-0x28]
    let v8: u64;  // [sp-0x20]
    let v9: u64;  // [sp-0x18]
    let v10: u8;  // [sp-0x10]

    if a1->field_0 == 0x8000000000000000 {
        a0->field_10 = *((&a1->field_8 as &char + 8) as &i64);
        a0->field_0 = *(&(&a1->field_0)[1] as &i128);
        return a0;
    }
    v4 = a1->field_8;
    v3 = *(&a1->field_0 as &i128);
    v0 = 0;
    v1 = 1;
    v2 = 0;
    v9 = 32;
    v10 = 3;
    v5 = 0;
    v6 = 0;
    v7 = &v0;
    v8 = &g_56a8b8;
    if !<num_bigint::bigint::BigInt as core::fmt::Display>::fmt(&v3, &v5) as i8 {
        a0->field_10 = v2;
        a0->field_0 = *(&v0 as &i128);
        return a0;
    }
    core::result::unwrap_failed(); /* do not return */
}

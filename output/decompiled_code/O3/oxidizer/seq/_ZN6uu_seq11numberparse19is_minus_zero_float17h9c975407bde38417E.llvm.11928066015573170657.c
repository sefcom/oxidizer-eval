fn uu_seq::numberparse::is_minus_zero_float(a0: &u8, a1: u64, a2: &struct_0) -> u64 {
    let v0: u128;  // [sp-0x68]
    let v1: u128;  // [sp-0x58]
    let v2: void*;  // [sp-0x48]
    let v3: struct17;  // [bp-0x38]
    let v4: struct17;  // [bp-0x20]
    let v6: u32;  // eax

    if !(a1 && *(a0) == 45) {
        return 0;
    }
    v1 = 0x10000000000000000;
    v0 = 0x80000000000000000;
    v2 = 0;
    *(&v3.field_0 as &struct17) = struct17 {
        field_0: a2
        field_8: a2->field_20
        field_16: a2->field_18
    };
    *(&v4.field_0 as &struct17) = struct17 {
        field_0: &v0
        field_8: 0
        field_16: 1
    };
    v6 = bigdecimal::impl_cmp::check_equality_bigdecimal_ref(&v3, &v4) as i32;
    if v0 as i64 {
        return v6;
    }
    return v6;
}

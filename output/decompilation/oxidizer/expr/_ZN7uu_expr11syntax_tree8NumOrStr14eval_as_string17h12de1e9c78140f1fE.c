fn uu_expr::syntax_tree::NumOrStr::eval_as_string(a1: &struct32) -> : struct24 {
    let a0: u64;  // rdi
    let v0: struct32;  // [bp-0x28]

    if !((((0 ^ *(a1 as &i64)) & (0 ^ -(*(a1 as &i64)))) >> 63) as char) {
        v0 = struct32 {
            field_0: *(a1 as &i128)
            field_16: a1[16] as i128
        };
        <T as alloc::string::SpecToString>::spec_to_string(a0, &v0);
        return;
    }
    return struct24 {
        field_0: a1[8] as i128
        field_16: a1[24] as i64
    };
}

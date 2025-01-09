fn uu_expr::syntax_tree::NumOrStr::eval_as_string(a0: &struct24, a1: void*) -> u64 {
    let v0: struct32;  // [bp-0x28]

    if *(a1 as &i64) == 0x8000000000000000 {
        return struct24 {
            field_0: *((a1 + 8) as &i128)
            field_16: *((a1 + 24) as &i64)
        };
    }
    v0 = struct32 {
        field_0: *(a1 as &i128)
        field_16: *((a1 + 16) as &i128)
    };
    <T as alloc::string::ToString>::to_string(a0, &v0);
}

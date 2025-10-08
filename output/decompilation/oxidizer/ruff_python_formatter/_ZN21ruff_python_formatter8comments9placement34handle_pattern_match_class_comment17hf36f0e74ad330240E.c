fn ruff_python_formatter::comments::placement::handle_pattern_match_class_comment(a0: i64, a1: i64, a2: i64) -> double {
    let v1: u32;  // eax
    let v2: u32;  // edx
    let v3: u32;  // ecx
    let v4: u128;  // xmm0
    let v6: u128;  // xmm0
    let v7: iNone;  // xmm1
    let v8: iNone;  // xmm2

    <ruff_python_ast::generated::Expr as ruff_text_size::traits::Ranged>::range(*((a2 + 64) as &i64));
    v1 = a1[64] as i32;
    if v2 < v1 {
        v3 = a1[68] as i32;
        if v3 < *((a2 + 48) as &i32) {
            v4 = *(a1 as &i128);
            return struct40 {
                field_0: 96
                field_8: v4
                field_24: v1
                field_28: v3
                field_32: 0
                field_33: a1[72] as i8
            };
        }
    }
    v6 = *(a1 as &i128);
    v7 = a1[16] as i128;
    v8 = a1[32] as i128;
    return struct80 {
        field_0: v6
        field_16: v7
        field_32: v8
        field_48: a1[48] as i128
        field_64: a1[64] as i128
    };
}

fn ruff_python_formatter::comments::visitor::CommentPlacement::or_else(a0: u64, a1: void*, a2: u64, a3: u64) -> int {
    let v1: u128;  // xmm0
    let v2: iNone;  // xmm1
    let v3: iNone;  // xmm2

    if *(a1 as &i32) > 93 {
        v1 = *(a1 as &i128);
        v2 = a1[16] as i128;
        v3 = a1[32] as i128;
        return struct80 {
            field_0: v1
            field_16: v2
            field_32: v3
            field_48: a1[48] as i128
            field_64: a1[64] as i128
        };
    }
    ruff_python_formatter::comments::placement::handle_own_line_comment_around_body::{{closure}}(a0, a2, a3, a1);
    return;
}

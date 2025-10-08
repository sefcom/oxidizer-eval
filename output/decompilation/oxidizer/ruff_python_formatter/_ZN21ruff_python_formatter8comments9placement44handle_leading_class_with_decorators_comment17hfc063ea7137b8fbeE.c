fn ruff_python_formatter::comments::placement::handle_leading_class_with_decorators_comment(a0: i64, a1: i64, a2: i64) -> double {
    let v1: u32;  // eax
    let v3: u128;  // xmm0
    let v4: iNone;  // xmm1
    let v5: iNone;  // xmm2

    if a1[72] as i8 == 1 {
        v1 = a1[64] as i32;
        if v1 < *((a2 + 48) as &i32) && *((a2 + 16) as &i64) && *((*((a2 + 8) as &i64) + *((a2 + 16) as &i64) * 96 - 12) as &i32) < v1 {
            return struct40 {
                field_0: 96
                field_8: 3
                field_16: a2
                field_24: v1
                field_28: a1[68] as i32
                field_32: 0x100
            };
        }
    }
    v3 = *(a1 as &i128);
    v4 = a1[16] as i128;
    v5 = a1[32] as i128;
    return struct80 {
        field_0: v3
        field_16: v4
        field_32: v5
        field_48: a1[48] as i128
        field_64: a1[64] as i128
    };
}

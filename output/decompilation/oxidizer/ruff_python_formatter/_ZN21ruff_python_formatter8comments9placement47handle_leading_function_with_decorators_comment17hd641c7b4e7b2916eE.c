fn ruff_python_formatter::comments::placement::handle_leading_function_with_decorators_comment(a0: i64, a1: i64) -> double {
    let v1: core::fmt::Arguments;  // ecx
    let v2: u8;  // al
    let v3: u8;  // cl

    if a1[16] as i64 == 94 {
        if a1[32] as i64 != 94 {
            goto LABEL_702e58;
        }
    } else {
        if a1[32] as i64 != 94 {
LABEL_702e58:
            if v1 == 79 {
                if (a1[72] as i8 & v2) {
                    return struct40 {
                        field_0: 96
                        field_8: *(a1 as &i128)
                        field_24: a1[64] as i64
                        field_32: 0
                        field_33: v3
                    };
                }
            } else {
                if (v2 & v1 == 88 & a1[72] as i8) == 1 {
                    return struct40 {
                        field_0: 96
                        field_8: *(a1 as &i128)
                        field_24: a1[64] as i64
                        field_32: 0
                        field_33: v3
                    };
                }
            }
        }
    }
    return struct80 {
        field_0: *(a1 as &i128)
        field_16: a1[16] as i128
        field_32: a1[32] as i128
        field_48: a1[48] as i128
        field_64: a1[64] as i128
    };
}

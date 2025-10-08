fn ruff_python_formatter::comments::placement::handle_own_line_comment_between_branches(a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> : struct80 {
    let a0: i64;  // rdi
    let v0: u32;  // [bp-0x64]
    let v1: u64;  // [bp-0x60]
    let v2: u64;  // [bp-0x58]
    let v3: u64;  // [bp-0x50]
    let v4: struct16;  // [bp-0x40]
    let v5: u64;  // [bp-0x38]
    let v7: u32;  // r13d
    let v8: u32;  // r15d
    let v9: void*;  // r12

    v3 = a2;
    if a1[32] as i64 == 94 {
        return struct80 {
            field_0: *(a1 as &i128)
            field_16: a1[16] as i128
            field_32: a1[32] as i128
            field_48: a1[48] as i128
            field_64: a1[64] as i128
        };
    }
    v4 = struct16 {
        field_0: a1[32] as i64
        field_8: a1[40] as i64
    };
    v1 = *(a1 as &i64);
    v2 = a1[8] as i64;
    if ruff_python_ast::node::<impl ruff_python_ast::generated::AnyNodeRef>::is_first_statement_in_alternate_body(&v4, *(a1 as &i64), a1[8] as i64) {
        v7 = a1[68] as i32;
        v0 = a1[64] as i32;
        v8 = ruff_python_ast::helpers::comment_indentation_after(a2, a3, a1[64] as i32, a1[68] as i32, a4, a5);
        core::result::Result<T,E>::unwrap(v9 >> 32, "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/ruff/crates/ruff_text_size/src/traits.rs");
        if !(_ccall(4, 13, (v9 as u32 < v8) as u8 as u64, (v8 < v9 as u32) as u8 as u64, (v8 < v9 as u32) as u8 as u64) as char) {
            if (v9 as u32 < v8) - 0 - (v8 < v9 as u32) != 1 {
                if v4.field_0 == 60 || v4.field_0 == 87 {
                    return struct40 {
                        field_0: 94
                        field_8: v4.field_0
                        field_16: v5
                        field_24: v0
                        field_28: v7
                        field_32: 0
                        field_33: a1[72] as i8
                    };
                }
                return struct40 {
                    field_0: 96
                    field_8: v1
                    field_16: v2
                    field_24: v0
                    field_28: v7
                    field_32: 0
                    field_33: a1[72] as i8
                };
                return struct40 {
                    field_0: 94
                    field_8: v4.field_0
                    field_16: v5
                    field_24: v0
                    field_28: v7
                    field_32: 0
                    field_33: a1[72] as i8
                };
            }
        } else {
            if v3 == 60 {
                return struct40 {
                    field_0: 96
                    field_8: v1
                    field_16: v2
                    field_24: v0
                    field_28: v7
                    field_32: 0
                    field_33: a1[72] as i8
                };
            } else if v3 != 87 {
                return struct40 {
                    field_0: 95
                    field_8: v3
                    field_16: a3
                    field_24: v0
                    field_28: v7
                    field_32: 0
                    field_33: a1[72] as i8
                };
            } else {
                return struct40 {
                    field_0: 96
                    field_8: v1
                    field_16: v2
                    field_24: v0
                    field_28: v7
                    field_32: 0
                    field_33: a1[72] as i8
                };
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

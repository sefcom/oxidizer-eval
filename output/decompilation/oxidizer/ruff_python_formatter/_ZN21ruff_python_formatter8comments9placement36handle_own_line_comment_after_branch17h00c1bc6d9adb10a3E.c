fn ruff_python_formatter::comments::placement::handle_own_line_comment_after_branch(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> long long {
    let v0: u32;  // [bp-0x78]
    let v1: u32;  // [bp-0x74]
    let v2: u64;  // [bp-0x60]
    let v3: struct16;  // [bp-0x58]
    let v4: void*;  // [bp-0x50]
    let v5: struct16;  // [bp-0x40]
    let v7: u64;  // rax
    let v8: iNone;  // xmm0
    let v9: iNone;  // xmm1
    let v10: iNone;  // xmm2
    let v11: struct16;  // r13
    let v12: void*;  // r12
    let v13: void*;  // rcx
    let v14: u128;  // xmm0
    let v15: u128;  // xmm1
    let v16: u128;  // xmm2
    let v17: struct16;  // r12
    let v18: i64;  // r14
    let v19: u32;  // ebp
    let v20: void*;  // rdx
    let v23: void*;  // r15
    let v24: void*;  // r15
    let v25: struct21;  // rax
    let v26: i64;  // rax
    let v27: void*;  // rax
    let v28: iNone;  // xmm0
    let v29: iNone;  // xmm1
    let v30: iNone;  // xmm2

    v5 = struct16 {
        field_0: a2
        field_8: a3
    };
    v7 = ruff_python_ast::node::<impl ruff_python_ast::generated::AnyNodeRef>::last_child_in_body(&v5);
    if v7 == 94 {
        v8 = *(a1 as &i128);
        v9 = a1[16] as i128;
        v10 = a1[32] as i128;
        return struct80 {
            field_0: v8
            field_16: v9
            field_32: v10
            field_48: a1[48] as i128
            field_64: a1[64] as i128
        };
    }
    v2 = v7;
    v0 = a1[64] as i32;
    v1 = a1[68] as i32;
    v11 = ruff_python_ast::helpers::comment_indentation_after(a2, a3, a1[64] as i32, a1[68] as i32, a4, a5);
    if v12 >> 32 {
        core::result::Result<T,E>::unwrap(1, "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/ruff/crates/ruff_text_size/src/traits.rs");
    } else {
        core::result::Result<T,E>::unwrap(0, "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/ruff/crates/ruff_text_size/src/traits.rs");
        if v11 as u32 != v12 as u32 {
            v3 = v2;
            v17 = 94;
            v18 = &v3;
            v2 = a4;
            v19 = v11 as u32;
            loop {
                v4 = v20;
                if !ruff_python_trivia::whitespace::indentation_at_offset(<ruff_python_ast::generated::AnyNodeRef as ruff_text_size::traits::Ranged>::range(v18) as u32, v2, a5) {
                    v23 = 0;
                } else {
                    v23 = v20;
                }
                v24 = v23;
                core::result::Result<T,E>::unwrap(v24 >> 32, "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/ruff/crates/ruff_text_size/src/traits.rs");
                if (v24 as u32 < v19) - 0 - (v19 < v24 as u32) == 1 {
                    v25 = ruff_python_ast::node::<impl ruff_python_ast::generated::AnyNodeRef>::last_child_in_body(v18);
                    v17 = v3;
                    v11 = v4;
                    if v25 == 94 {
                        goto LABEL_702574;
                    }
                    v3 = v25;
                } else {
                    if !(v24 as u32 < v19) - 0 - (v19 < v24 as u32) {
                        v26 = a1[72] as i8;
                        *(&a0[8] as &i128) = *(&v3.field_0 as &i128);
                        break;
                    } else {
                        v27 = a1;
                        if v17 == 94 {
                            v28 = *(v27 as &i128);
                            v29 = v27[16] as i128;
                            v30 = v27[32] as i128;
                            return struct80 {
                                field_0: v28
                                field_16: v29
                                field_32: v30
                                field_48: v27[48] as i128
                                field_64: v27[64] as i128
                            };
                        }
                    }
LABEL_702574:
                    *(&a0[8] as &struct16) = v17;
                    *(&a0[16] as &struct16) = v11;
                    break;
                }
            }
            *(&a0[24] as &u32) = v0;
            *(&a0[28] as &u32) = v1;
            *(&a0[32] as &i8) = 0;
            *(&a0[33] as &u8) = v26 as u8;
            *(a0 as &i64) = 95;
            return v26;
        }
    }
    v13 = a1;
    v14 = *(v13 as &i128);
    v15 = v13[16] as i128;
    v16 = v13[32] as i128;
    return struct80 {
        field_0: v14
        field_16: v15
        field_32: v16
        field_48: v13[48] as i128
        field_64: v13[64] as i128
    };
}

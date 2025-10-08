fn ruff_python_formatter::comments::placement::handle_module_level_own_line_comment_before_class_or_function_comment(a0: u64, a1: void*, a2: u64, a3: u64) -> long long {
    let v0: void*;  // [bp-0x60]
    let v1: u64;  // [bp-0x50]
    let v2: struct16;  // [bp-0x40]
    let v4: u8;  // bpl
    let v5: i64;  // rax
    let v6: u32;  // ebx
    let v7: struct12;  // eax
    let v9: u64;  // rdx
    let v10: core::option::Option<&str>;  // rax
    let v11: u32;  // eax
    let v12: u32;  // ecx
    let v13: u128;  // xmm0
    let v14: iNone;  // xmm1
    let v15: iNone;  // xmm2

    v4 = a1[72] as i8;
    if v4 {
        v5 = a1[32] as i64;
        if !v5 == 94 && !a1[16] as i64 == 94 {
            v2 = struct16 {
                field_0: v5
                field_8: a1[40] as i64
            };
            v5 = v5 as u32 & -2;
            if v5 as u32 == 2 {
                v1 = a1[24] as i64;
                v6 = a1[68] as i32;
                v7 = <ruff_python_ast::generated::AnyNodeRef as ruff_text_size::traits::Ranged>::range(&v2) as u32;
                if v6 > v7 {
                    core::panicking::panic("assertion failed: start.raw <= end.raw"); /* do not return */
                }
                v10 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(ruff_text_size::range::<impl core::convert::From<ruff_text_size::range::TextRange> for core::ops::range::Range<T>>::from(v6, v7), v9, a2, a3) as u64;
                v11 = ruff_python_formatter::comments::placement::max_empty_lines(v10, v9);
                v12 = a1[64] as i32;
                if !v11 {
                    *(&v0[8] as &i128) = *(&v2.field_0 as &i128);
                    *(&v0[24] as &u32) = v12;
                    *(&v0[28] as &u32) = v6;
                    *(&v0[32] as &i8) = 0;
                    *(&v0[33] as &u8) = v4;
                    *(v0 as &i64) = 94;
                    return a0;
                }
                *(&v0[8] as &i64) = a1[16] as i64;
                *(&v0[16] as &u64) = v1;
                *(&v0[24] as &u32) = v12;
                *(&v0[28] as &u32) = v6;
                *(&v0[32] as &i8) = 0;
                *(&v0[33] as &u8) = v4;
                *(v0 as &i64) = 95;
                return a0;
            }
        }
    }
    v13 = *(a1 as &i128);
    v14 = a1[16] as i128;
    v15 = a1[32] as i128;
    return struct80 {
        field_0: v13
        field_16: v14
        field_32: v15
        field_48: a1[48] as i128
        field_64: a1[64] as i128
    };
}

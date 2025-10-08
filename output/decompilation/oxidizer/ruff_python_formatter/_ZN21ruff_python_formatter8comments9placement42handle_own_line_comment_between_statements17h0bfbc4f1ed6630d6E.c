fn ruff_python_formatter::comments::placement::handle_own_line_comment_between_statements(a0: i64, a1: i64, a2: i64, a3: i64) -> long long {
    let v0: void*;  // [bp-0x60]
    let v1: struct16;  // [bp-0x40]
    let v3: u64;  // rbp
    let v4: u64;  // rax
    let v5: u64;  // r14
    let v6: struct24;  // rax
    let v7: u8;  // r15b
    let v8: u32;  // ebx
    let v9: struct12;  // eax
    let v11: u64;  // rdx
    let v12: core::option::Option<&str>;  // rax
    let v13: u32;  // eax
    let v14: u32;  // ecx
    let v15: u128;  // xmm0
    let v16: iNone;  // xmm1
    let v17: iNone;  // xmm2

    v3 = a1[16] as i64;
    if v3 != 94 {
        v4 = a1[32] as i64;
        if v4 != 94 {
            v5 = a1[24] as i64;
            v1 = struct16 {
                field_0: v4
                field_8: a1[40] as i64
            };
            v6 = v4 - 2;
            v4 = v6 & -0x100 | v6 < 25;
            if (v6 < 25 & v3 - 2 < 25) {
                v7 = a1[72] as i8;
                if v7 {
                    v8 = a1[68] as i32;
                    v9 = <ruff_python_ast::generated::AnyNodeRef as ruff_text_size::traits::Ranged>::range(&v1) as u32;
                    if v8 > v9 {
                        core::panicking::panic("assertion failed: start.raw <= end.raw"); /* do not return */
                    }
                    v12 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(ruff_text_size::range::<impl core::convert::From<ruff_text_size::range::TextRange> for core::ops::range::Range<T>>::from(v8, v9 as u64), v11, a2, a3) as u64;
                    v13 = ruff_python_formatter::comments::placement::max_empty_lines(v12, v11);
                    v14 = a1[64] as i32;
                    if !v13 {
                        *(&v0[8] as &i128) = *(&v1.field_0 as &i128);
                        *(&v0[24] as &u32) = v14;
                        *(&v0[28] as &u32) = v8;
                        *(&v0[32] as &i8) = 0;
                        *(&v0[33] as &u8) = v7;
                        *(v0 as &i64) = 94;
                        return a0;
                    }
                    *(&v0[8] as &u64) = v3;
                    *(&v0[16] as &u64) = v5;
                    *(&v0[24] as &u32) = v14;
                    *(&v0[28] as &u32) = v8;
                    *(&v0[32] as &i8) = 0;
                    *(&v0[33] as &u8) = v7;
                    *(v0 as &i64) = 95;
                    return a0;
                }
            }
        }
    }
    v15 = *(a1 as &i128);
    v16 = a1[16] as i128;
    v17 = a1[32] as i128;
    return struct80 {
        field_0: v15
        field_16: v16
        field_32: v17
        field_48: a1[48] as i128
        field_64: a1[64] as i128
    };
}

fn uu_od::parse_inputs::parse_offset_operand(a0: &struct16, a1: u32, a2: u32) -> u64 {
    let v0: i32;  // [sp-0x50], Other Possible Types: Result<struct2, struct9>, struct1
    let v1: i64;  // [bp-0x48]
    let v2: i64;  // [sp-0x30]
    let v3: i64;  // [sp-0x28]
    let v4: i64;  // [sp-0x20]
    let v5: i64;  // [sp-0x18]
    let v6: i64;  // [sp-0x10]
    let v8: i64;  // r15
    let v9: i64;  // r14
    let v10: i64;  // r13
    let v11: i64;  // r12
    let v12: i64;  // rbx
    let v13: i64;  // r12
    let v14: i64;  // rax
    let v15: i64;  // rbp
    let v16: i64;  // rdx
    let v17: i64;  // rbx
    let v18: i32;  // ebp
    let v19: i64;  // 4096
    let v20: i32;  // eax
    let v21: i64;  // r13
    let v22: i64;  // rax
    let v23: i64;  // rax
    let v25: i64;  // rax
    let v26: i64;  // rbx
    let v28: i64;  // rax

    v6 = v8;
    v5 = v9;
    v4 = v10;
    v3 = v11;
    v2 = v12;
    v0 = 0;
    v13 = core::slice::<impl [T]>::starts_with(a1, a2, core::char::methods::encode_utf8_raw(43, &v0), 1) as i32;
    v14 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v13, a2, a1, a2);
    if !v14 {
        core::str::slice_error_fail(); /* do not return */
    }
    v15 = v14;
    if core::slice::<impl [T]>::starts_with(v14, v16, "0x") as i8 || core::slice::<impl [T]>::starts_with(v15, v16, "0X") as i8 {
        v13 |= 2;
        v17 = 1;
        v18 = 16;
        goto LABEL_4d3226;
    } else {
        v0 = struct1 {
            field_0: 0
        };
        v20 = core::slice::<impl [T]>::ends_with(v15, v16, core::char::methods::encode_utf8_raw(98, &v0), 1) as i32;
        v21 = a2 - v20;
        v22 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v13, v21, a1, a2);
        if !v22 {
            core::str::slice_error_fail(); /* do not return */
        }
        v17 = (!(v20 & 255 & 255) ? 1 : 0x200);
        v0 = 0;
        v23 = core::slice::<impl [T]>::ends_with(v22, v16, core::char::methods::encode_utf8_raw(46, &v0), 1) as i32;
        v18 = v23 * 2 + 8;
        v19 = v21 - v23;
LABEL_4d3226:
        v25 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v13, v19, a1, a2);
        if v25 {
            v0 = core::num::<impl u64>::from_str_radix(v25, v16, v18);
            v26 = v1 * v17;
            if v0 {
                v26 = 12;
            }
            v28 = (v0 ? &g_41888e : 0);
            return struct16 {
                field_0: v28
                field_8: v26
            };
        }
    }
}

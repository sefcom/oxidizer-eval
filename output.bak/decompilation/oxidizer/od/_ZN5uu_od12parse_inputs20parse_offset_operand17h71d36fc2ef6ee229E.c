fn uu_od::parse_inputs::parse_offset_operand(a0: &struct16, a1: u32, a2: u32) -> u64 {
    let v0: u32;  // [sp-0x50], Other Possible Types: struct1, Result<struct2, struct8>
    let v2: u64;  // [sp-0x30]
    let v3: u64;  // [sp-0x28]
    let v4: u64;  // [sp-0x20]
    let v5: u64;  // [sp-0x18]
    let v6: u64;  // [sp-0x10]
    let v8: u64;  // r15
    let v9: u64;  // r14
    let v10: u64;  // r13
    let v11: u64;  // r12
    let v12: u64;  // rbx
    let v13: u64;  // r12
    let v14: u64;  // rax
    let v15: u64;  // rbp
    let v16: u64;  // rdx
    let v18: u32;  // ebp
    let v19: u64;  // 4096
    let v21: u64;  // r13
    let v22: u64;  // rax
    let v23: u64;  // r8
    let v24: u64;  // rax
    let v26: &u8;  // rax

    v6 = v8;
    v5 = v9;
    v4 = v10;
    v3 = v11;
    v2 = v12;
    v0 = 0;
    v13 = core::slice::<impl [T]>::starts_with(a1, a2, core::char::methods::encode_utf8_raw(43, &v0), 1) as i32;
    v14 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v13, a2, a1, a2);
    if !v14 {
        core::str::slice_error_fail(a1, a2, v13, a2, "src/uu/od/src/parse_inputs.rs"); /* do not return */
    }
    v15 = v14;
    if core::slice::<impl [T]>::starts_with(v14, v16, "0x") as i8 || core::slice::<impl [T]>::starts_with(v15, v16, "0X") as i8 {
        v13 |= 2;
        v18 = 16;
        goto LABEL_4d3226;
    } else {
        v0 = struct1 {
            field_0: 0
        };
        v21 = a2 - core::slice::<impl [T]>::ends_with(v15, v16, core::char::methods::encode_utf8_raw(98, &v0), 1) as i32;
        v22 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v13, v21, a1, a2);
        if !v22 {
            v23 = "src/uu/od/src/parse_inputs.rs";
        } else {
            v0 = 0;
            v24 = core::slice::<impl [T]>::ends_with(v22, v16, core::char::methods::encode_utf8_raw(46, &v0), 1) as i32;
            v18 = v24 * 2 + 8;
            v19 = v21 - v24;
LABEL_4d3226:
            v21 = v19;
            v26 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v13, v21, a1, a2);
            if v26 {
                v0 = core::num::<impl u64>::from_str_radix(v26, v16, v18) as u64;
                return struct16 {
                    field_0: v29
                    field_8: v27
                };
            }
            v23 = "src/uu/od/src/parse_inputs.rs";
        }
        core::str::slice_error_fail(a1, a2, v13, v21, v23); /* do not return */
    }
}

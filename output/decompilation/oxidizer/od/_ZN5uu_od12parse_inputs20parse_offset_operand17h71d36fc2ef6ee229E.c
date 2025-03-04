fn uu_od::parse_inputs::parse_offset_operand(a0: &struct16, a1: u32, a2: u32) -> u64 {
    let v0: i32;  // [sp-0x50], Other Possible Types: struct1, Result<struct2, struct8>
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
    let v18: i32;  // ebp
    let v19: i64;  // r13
    let v21: i64;  // r13
    let v22: i64;  // rax
    let v23: i64;  // rax
    let v24: i64;  // rax

    v6 = v8;
    v5 = v9;
    v4 = v10;
    v3 = v11;
    v2 = v12;
    v0 = 0;
    v13 = core::slice::<impl [T]>::starts_with(a1, a2, core::char::methods::encode_utf8_raw(43, &v0), 1) as i32;
    v14 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v13, a2, a1, a2);
    v15 = v14;
    if core::slice::<impl [T]>::starts_with(v14, v16, "0x") as i8 || core::slice::<impl [T]>::starts_with(v15, v16, "0X") as i8 {
        v13 |= 2;
        v18 = 16;
        v19 = a2;
    } else {
        v0 = struct1 {
            field_0: 0
        };
        v21 = a2 - core::slice::<impl [T]>::ends_with(v15, v16, core::char::methods::encode_utf8_raw(98, &v0), 1) as i32;
        v22 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v13, v21, a1, a2);
        if v22 {
            v0 = 0;
            v23 = core::slice::<impl [T]>::ends_with(v22, v16, core::char::methods::encode_utf8_raw(46, &v0), 1) as i32;
            v19 = v21 - v23;
            v18 = (v23 * 2 + 8) as u32;
        }
    }
    v24 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v13, v19, a1, a2);
    if v24 {
        v0 = core::num::<impl u64>::from_str_radix(v24, a2, v18 as u64);
        return struct16 {
            field_0: v28
            field_8: v27
        };
    }
}

fn uu_od::parse_inputs::parse_offset_operand(a0: i64, a1: i64, a2: i64) -> long long {
    let v0: u32;  // [bp-0x50], Other Possible Types: core::result::Result<u64, core::num::error::ParseIntError>
    let v1: u64;  // [bp-0x48]
    let v2: i64;  // [bp-0x38]
    let v3: u64;  // [bp-0x30]
    let v4: u64;  // [bp-0x28]
    let v5: Result<struct99, struct24>;  // [bp-0x20]
    let v6: struct48;  // [bp-0x18]
    let v7: alloc::vec::Vec<u8, alloc::alloc::Global>;  // [bp-0x10]
    let v9: alloc::vec::Vec<u8, alloc::alloc::Global>;  // r15
    let v10: struct48;  // r14
    let v11: u64;  // r13
    let v12: u64;  // r12
    let v13: u64;  // rbx
    let v15: u64;  // r12
    let v16: core::option::Option<&str>;  // rax
    let v17: u64;  // rbp
    let v18: u64;  // rdx
    let v19: u64;  // rbx
    let v20: u32;  // ebp
    let v21: u64;  // 4096
    let v23: u64;  // r13
    let v24: core::option::Option<&str>;  // rax
    let v25: u64;  // rax
    let v27: core::option::Option<&str>;  // rax
    let v28: u64;  // rax
    let v29: &mut [u8];  // rax:rdx
    let v30: &mut [u8];  // rax:rdx
    let v31: &mut [u8];  // rax:rdx

    v7 = v9;
    v6 = v10;
    v5 = v11;
    v4 = v12;
    v3 = v13;
    v0 = 0;
    v30 = core::char::methods::encode_utf8_raw(43, &v0, a2);
    v15 = core::slice::<impl [T]>::starts_with(a1, a2, v30.data_ptr, 1);
    v16 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v15, a2, a1, a2) as u64;
    v17 = v16;
    if core::slice::<impl [T]>::starts_with(v16, v18, "0x") || core::slice::<impl [T]>::starts_with(v17, v18, "0X") {
        v15 |= 2;
        v19 = 1;
        v20 = 16;
        v21 = a2;
    } else {
        v0 = 0;
        v31 = core::char::methods::encode_utf8_raw(98, &v0, a2);
        v23 = a2 - core::slice::<impl [T]>::ends_with(v17, v18, v31.data_ptr, 1);
        v24 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v15, v23, a1, a2) as u64;
        v0 = 0;
        v29 = core::char::methods::encode_utf8_raw(46, &v0, a2);
        v25 = core::slice::<impl [T]>::ends_with(v24, v18, v29.data_ptr, 1);
        v20 = v25 * 2 + 8;
        v21 = v23 - v25;
    }
    v27 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v15, v21, a1, a2) as u64;
    v0 = core::num::<impl u64>::from_str_radix(v27, a2, v20);
    v28 = (v0 as i8 ? &g_41888e : 0);
    *((v2 + 8) as &i32) = (!v0 as i8 ? v1 * v19 : 12);
    *(v2 as &u64) = v28;
    return v28;
}

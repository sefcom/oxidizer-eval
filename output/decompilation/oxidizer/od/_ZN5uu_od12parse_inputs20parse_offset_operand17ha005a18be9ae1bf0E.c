fn uu_od::parse_inputs::parse_offset_operand(a0: i64, a1: &str) -> u64 {
    let v0: u32;  // [bp-0x50]
    let v1: u64;  // [bp-0x48]
    let v2: u64;  // [bp-0x40]
    let v3: i64;  // [bp-0x38]
    let v4: u64;  // [bp-0x30]
    let v5: u64;  // [bp-0x28]
    let v6: u64;  // [bp-0x20]
    let v7: u64;  // [bp-0x18]
    let v8: u64;  // [bp-0x10]
    let v10: u64;  // r15
    let v11: u64;  // r14
    let v12: u64;  // r13
    let v13: u64;  // r12
    let v14: u64;  // rbx
    let v15: u64;  // rdx
    let v17: u64;  // r12
    let v18: core::option::Option<&str>;  // rax
    let v19: core::option::Option<&str>;  // rax
    let v20: u64;  // rcx
    let v21: u32;  // eax
    let v22: u64;  // r13
    let v24: u64;  // rbx
    let v25: u64;  // r13
    let v27: u64;  // rax
    let v28: u64;  // rcx
    let v29: &mut [u8];  // rax:rdx
    let v30: &mut [u8];  // rax:rdx
    let v31: core::result::Result<u64, core::num::error::ParseIntError>;  // rax:rdx
    let v32: &mut [u8];  // rax:rdx

    v8 = v10;
    v7 = v11;
    v6 = v12;
    v5 = v13;
    v4 = v14;
    v0 = 0;
    v30 = core::char::methods::encode_utf8_raw(43, &v0, v15);
    v17 = core::slice::<impl [T]>::starts_with(a1, v15, v30.data_ptr);
    v18 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v17, v15, a1) as u64;
    if !core::slice::<impl [T]>::starts_with(v18, v15, "0x") {
        v19 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v17, v15, a1) as u64;
        if !core::slice::<impl [T]>::starts_with(v19, v15, "0X") {
            v0 = 0;
            v32 = core::char::methods::encode_utf8_raw(98, &v0, v15);
            v21 = core::slice::<impl [T]>::ends_with(v19, v15, v32.data_ptr, v20);
            v22 = v15 - v21;
            v2 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v17, v22, a1) as u64;
            v24 = ((v21 & 255) ? 0x200 : 1);
            v0 = 0;
            v29 = core::char::methods::encode_utf8_raw(46, &v0, v15);
            v25 = v22 - core::slice::<impl [T]>::ends_with(v2, v15, v29.data_ptr, v20);
        }
    }
    v31 = core::num::<impl u64>::from_ascii_radix(&v0, core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v17, v25, a1) as u64, v15);
    v27 = (v0 as i8 ? &g_41d08c : 0);
    v28 = (!v0 as i8 ? v1 * v24 : 12);
    *(v3 as &u64) = v27;
    *((v3 + 8) as &u64) = v28;
    return v27;
}

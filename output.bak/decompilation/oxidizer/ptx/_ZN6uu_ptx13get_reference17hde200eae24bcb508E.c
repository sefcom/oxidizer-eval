fn uu_ptx::get_reference(a0: &struct24, a1: u8, a2: u8, a3: void*, a4: u32, a5: u32) -> u64 {
    let v0: struct24;  // [sp-0xa0], Other Possible Types: Option<struct32>, i64
    let v2: i64;  // [sp-0x90]
    let v3: i64;  // [sp-0x88]
    let v13: i64;  // [bp+0x8]
    let v14: i8;  // [bp+0x10]
    let v15: i64;  // rax
    let v16: i64;  // r15
    let v17: i64;  // r15
    let v18: i64;  // r15
    let v19: i64;  // rax
    let v20: i64;  // rdx

    v0 = regex::regex::string::Regex::find_at(v13, v14, a4, a5);
    v16 = v0;
    v17 = v16;
    if v16 {
        v17 = v2;
        v16 = v3;
    }
    v18 = v17;
    v19 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v18, v16, a4, a5);
    if v19 {
        v0 = <T as alloc::slice::hack::ConvertVec>::to_vec(v19, v20);
        v15 = v2;
        return struct24 {
            field_0: v0
            field_16: v15
        };
    }
    core::str::slice_error_fail(a4, a5, v18, v16, "src/uu/ptx/src/ptx.rs"); /* do not return */
}

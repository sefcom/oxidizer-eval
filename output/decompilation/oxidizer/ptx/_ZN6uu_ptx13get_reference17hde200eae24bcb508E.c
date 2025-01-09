fn uu_ptx::get_reference(a0: &struct24, a1: u8, a2: u8, a3: void*, a4: u32, a5: u32) -> u64 {
    let v0: i64;  // [sp-0xa0], Other Possible Types: Option<struct32>, struct24
    let v1: i64;  // [sp-0x98]
    let v2: i64;  // [sp-0x90]
    let v3: i64;  // [sp-0x88]
    let v4: i64;  // [sp-0x80]
    let v5: i64;  // [sp-0x70]
    let v6: i64;  // [sp-0x68]
    let v7: i64;  // [sp-0x60]
    let v8: i64;  // [sp-0x58]
    let v9: i64;  // [sp-0x50]
    let v10: i64;  // [sp-0x48]
    let v11: i128;  // [sp-0x40]
    let v12: i8;  // [sp-0x30]
    let v13: i64;  // [bp+0x8]
    let v14: i8;  // [bp+0x10]
    let v16: i64;  // r15
    let v17: i64;  // r15
    let v19: i64;  // rdx

    if a1 {
        v10 = 0;
        v11 = *((a3 + 32) as &i128);
        v12 = 0;
        v5 = *((a3 + 56) as &i64) + 1;
        v6 = &v10;
        v7 = <os_display::Quoted as core::fmt::Display>::fmt;
        v8 = &v5;
        v9 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
        v0 = &g_6eddd0;
        v1 = 2;
        v4 = 0;
        v2 = &v6;
        v3 = 2;
        core::option::Option<T>::map_or_else();
    } else if !a2 {
        return struct24 {
            field_0: 0
            field_8: 1
            field_16: 0
        };
    } else {
        v0 = regex::regex::string::Regex::find_at(v13, v14, a4, a5);
        v16 = v0;
        v17 = v16;
        if v16 {
            v17 = v2;
            v16 = v3;
        }
        v0 = <T as alloc::slice::hack::ConvertVec>::to_vec(core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v17, v16, a4, a5), v19);
        return struct24 {
            field_0: v0
            field_16: v15
        };
    }
}

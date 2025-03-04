fn uu_ptx::get_reference(a0: &struct24, a1: u8, a2: u8, a3: void*, a4: u32, a5: u32, a6: u32, a7: u32) -> u64 {
    let v0: struct24;  // [sp-0xa0], Other Possible Types: Option<struct32>, unsigned long
    let v1: i64;  // [sp-0x90]
    let v2: i64;  // [sp-0x88]
    let v3: i64;  // [sp-0x70]
    let v4: i64;  // [sp-0x48]
    let v5: iNone;  // [sp-0x40]
    let v6: i8;  // [sp-0x30]
    let v8: i64;  // r15
    let v9: i64;  // r12

    if a1 {
        v4 = 0;
        v5 = *((a3 + 32) as &i128);
        v6 = 0;
        v3 = *((a3 + 56) as &i64) + 1;
    } else if !a2 {
        return struct24 {
            field_0: 0
            field_8: 1
            field_16: 0
        };
    } else {
        v0 = regex::regex::string::Regex::find_at(a6, a7, a4, a5);
        v8 = v0;
        v9 = v8;
        if v9 {
            v8 = v1;
            v9 = v2;
        }
        v0 = <T as alloc::slice::hack::ConvertVec>::to_vec(core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v8, v9, a4, a5), a2);
        return struct24 {
            field_0: *(&v0.field_0 as &i128)
            field_16: v7
        };
    }
}

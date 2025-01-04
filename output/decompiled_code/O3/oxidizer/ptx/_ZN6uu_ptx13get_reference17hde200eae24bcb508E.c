fn uu_ptx::get_reference(a0: i64, a1: i8, a2: i8, a3: i64, a4: i64, a5: i64) -> u64 {
    let v0: i192;  // [sp-0xa0], Other Possible Types: struct24, Option<struct32>
    let v1: i64;  // [sp-0x90]
    let v2: i64;  // [sp-0x88]
    let v3: i64;  // [sp-0x70]
    let v4: i64;  // [sp-0x48]
    let v5: i128;  // [sp-0x40]
    let v6: i8;  // [sp-0x30]
    let v7: i64;  // [bp+0x8]
    let v8: i8;  // [bp+0x10]
    let v9: i64;  // rax
    let v10: i64;  // r15
    let v11: i64;  // r15
    let v12: i64;  // rax
    let v13: i64;  // rdx

    if a1 {
        v4 = 0;
        v5 = *((a3 + 32) as &i128);
        v6 = 0;
        v3 = *((a3 + 56) as &i64) + 1;
        v9 = format!("{:?}:{:?}", &v4, &v3);
        return v9;
    } else if a2 {
        v0 = regex::regex::string::Regex::find_at(v7, v8, a4, a5);
        v10 = v0;
        v11 = v10;
        if v10 {
            v11 = v1;
            v10 = v2;
        }
        v12 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v11, v10, a4, a5);
        if v12 {
            v0 = <T as alloc::slice::hack::ConvertVec>::to_vec(v12, v13);
            v9 = v1;
            *((a0 + 16) as &i64) = v9;
            *(a0 as &i192) = v0;
            return v9;
        }
        core::str::slice_error_fail(); /* do not return */
    } else {
        return struct24 {
            field_0: 0
            field_8: 1
            field_16: 0
        };
    }
}

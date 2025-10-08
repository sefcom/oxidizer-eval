fn uu_ptx::get_reference(a0: i64, a1: u8, a2: u32, a3: i64, a4: void*, a5: u64, a6: u64, a7: u64) -> long long {
    let v0: struct24;  // [bp-0xa0], Other Possible Types: struct32
    let v1: u64;  // [bp-0x90]
    let v2: u64;  // [bp-0x90]
    let v3: u64;  // [bp-0x88]
    let v4: u64;  // [bp-0x70]
    let v5: void*;  // [bp-0x48]
    let v6: u128;  // [bp-0x40]
    let v7: u8;  // [bp-0x30]
    let v8: u64;  // r15
    let v9: u64;  // r15
    let v10: u64;  // r15
    let v11: core::option::Option<&str>;  // rax

    if (a1 & 1) {
        v5 = 0;
        v6 = *((a3 + 32) as &i128);
        v7 = 0;
        v4 = *((a3 + 56) as &i64) + 1;
        return format!("{}:{}", &v5, &v4);
    } else if (a2 & 1) {
        v0 = regex::regex::string::Regex::find_at(a6, a7, a4, a5);
        v8 = v0.field_0;
        v9 = v8;
        v10 = v8;
        if v9 {
            v2 = v1;
            v9 = v1;
            v10 = v3;
        }
        v1 = v2;
        v11 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v9, v10, a4, a5) as u64;
        v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v11, a2);
        return struct24 {
            field_0: *(&v0.field_0 as &i128)
            field_16: v1
        };
    } else {
        return struct24 {
            field_0: 0
            field_8: 1
            field_16: 0
        };
    }
}

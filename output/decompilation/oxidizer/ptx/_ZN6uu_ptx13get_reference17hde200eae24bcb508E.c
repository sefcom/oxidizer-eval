fn uu_ptx::get_reference(a1: i8, a2: i8, a3: i64, a4: i64, a5: i64, a6: i64, a7: i64) -> Result<struct24, struct24> {
    let a0: i64;  // rdi
    let v0: u64;  // [bp-0xa0]
    let v2: struct48;  // [bp-0x90], Other Possible Types: u64
    let v3: u64;  // [bp-0x90]
    let v4: std::fs::File;  // [bp-0x88]
    let v14: u64;  // r15
    let v15: u64;  // r15
    let v16: u64;  // r15
    let v17: core::option::Option<&str>;  // rax

    if a1 {
        return core::option::Option<T>::map_or_else(a2);
    } else if a2 {
        regex::regex::string::Regex::find_at(a6, a7, a4, a5, a5);
        v14 = v0;
        v15 = v14;
        v16 = v14;
        if v15 {
            v3 = v2;
            v15 = v2;
            v16 = v4;
        }
        v2 = v3;
        v17 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v15, v16, a4, a5) as u64;
        <T as alloc::slice::hack::ConvertVec>::to_vec(v17, a2, a3);
        return Ok(struct24 {
            field_0: *(&v0 as &i128)
            field_16: v2
        });
    } else {
        return struct24 {
            field_0: 0
            field_8: 1
            field_16: 0
        };
    }
}

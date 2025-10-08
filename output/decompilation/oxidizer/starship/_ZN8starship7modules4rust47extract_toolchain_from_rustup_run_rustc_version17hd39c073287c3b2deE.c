fn starship::modules::rust::extract_toolchain_from_rustup_run_rustc_version(a0: i64, a1: i64) -> void {
    let v0: Result<struct40, struct32>;  // [bp-0x70]
    let v1: u64;  // [bp-0x70]
    let v2: struct20;  // [bp-0x60]
    let v3: struct24;  // [bp-0x48]
    let v5: struct92;  // r12
    let v7: u32;  // rdx

    if *((a1 + 48) as &i32) {
        v0 = alloc::string::String::from_utf8(a1 + 24);
        if !((((0 ^ v0 as i64) & (0 ^ -(v1))) >> 63) as char) {
            return struct8 {
                field_0: 4
            };
        }
        v5 = *((&v0 as &char + 24) as &i64);
        if !core::slice::<impl [T]>::starts_with(v2 as u32, v5 as u32) || !core::slice::<impl [T]>::ends_with(v2 as u32, v5 as u32) {
            return struct8 {
                field_0: 4
            };
        }
        v3 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(18, v5 - 19, v2, v5) as u64, v7);
        return struct32 {
            field_0: 1
            field_8: *(&v3.field_0 as &i128)
            field_24: v3.field_16
        };
        return struct8 {
            field_0: 4
        };
    } else {
        v0 = alloc::string::String::from_utf8(a1);
        if !((((0 ^ v0 as i64) & (0 ^ -(v1))) >> 63) as char) {
            return struct8 {
                field_0: 4
            };
        }
        return struct32 {
            field_0: 0
            field_8: *((&v0 as &char + 8) as &i128)
            field_24: *((&v0 as &char + 24) as &i64)
        };
    }
}

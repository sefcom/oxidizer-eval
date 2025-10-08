fn uu_dd::parseargs::parse_bytes_only(a0: u64, a1: u64, a2: u32, a3: u64) -> long long {
    let v0: u8;  // [bp-0x30]
    let v1: i8;  // [bp-0x28]
    let v5: u64;  // rax
    let v6: u64;  // rax
    let v7: core::result::Result<u64, core::num::error::ParseIntError>;  // rax:rdx

    v7 = core::num::<impl u64>::from_ascii_radix(&v0, core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(a3, a1, a2) as u64, a2);
    if !v0 {
        v5 = 14;
        return struct16 {
            field_0: v6
            field_8: *(&v1 as &i64)
        };
    }
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a0 + 8, a1, a2);
}

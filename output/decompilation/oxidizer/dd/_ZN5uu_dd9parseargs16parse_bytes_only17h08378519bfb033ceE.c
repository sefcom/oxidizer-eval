fn uu_dd::parseargs::parse_bytes_only(a1: i64, a2: i64, a3: i64) -> : struct16 {
    let a0: i64;  // rdi
    let v0: u8;  // [bp-0x28]
    let v1: i8;  // [bp-0x20]
    let v3: u64;  // rax
    let v4: u64;  // rax
    let v6: core::result::Result<u64, core::num::error::ParseIntError>;  // rax:rdx

    v6 = core::num::<impl core::str::traits::FromStr for u64>::from_str(&v0, a1);
    if !v0 {
        v3 = 14;
        return struct16 {
            field_0: v4
            field_8: *(&v1 as &i64)
        };
    }
    <T as alloc::slice::hack::ConvertVec>::to_vec(a1, a2, a3);
}

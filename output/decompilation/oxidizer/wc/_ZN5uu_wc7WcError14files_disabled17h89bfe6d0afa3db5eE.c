fn uu_wc::WcError::files_disabled(a1: i64, a2: i64) -> : struct32 {
    let a0: i64;  // rdi
    let v0: Result<struct24, struct24>;  // [bp-0x40]
    let v1: u64;  // [bp-0x40]
    let v2: void*;  // [bp-0x38]
    let v3: u32;  // [bp-0x30], Other Possible Types: unsigned long
    let v4: u128;  // [bp-0x28]
    let v5: core::result::Result<usize, std::io::error::Error>;  // [bp-0x18]

    v0 = alloc::string::String::from_utf8_lossy(a1, a2);
    if (((0 ^ v0 as i64) & (0 ^ -(v1))) >> 63) as char {
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v0 as u8, v2, v3);
    } else {
        v5 = v3;
        v4 = v0 as i128;
    }
    return struct32 {
        field_0: 9223372036854775809
        field_8: v4
        field_24: v5
    };
}

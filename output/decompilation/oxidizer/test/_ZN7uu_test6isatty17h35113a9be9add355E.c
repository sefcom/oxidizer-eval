fn uu_test::isatty(a0: &Result<struct24, struct1>, a1: u32, a2: u32) -> u64 {
    let v0: i64;  // [sp-0x50], Other Possible Types: struct25, Result<struct16, struct10>
    let v1: i64;  // [sp-0x48]
    let v2: i64;  // [sp-0x40]
    let v3: struct24;  // [sp-0x30]
    let v5: i64;  // rax

    v0 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(a1, a2);
    if !v0 {
        v5 = core::num::<impl core::str::traits::FromStr for i32>::from_str(v1, v2);
        if !(v5 as u8 & 1) {
            isatty(v5 >> 32 & 4294967295 & 4294967295);
            return Err(struct1 {
                field_0: (v6 as u32 == 1) as u8 as u8
            });
        }
    }
    v0 = struct25 {
        field_0: 1
        field_8: a1
        field_16: a2
        field_24: 1
    };
    v3 = <T as alloc::string::ToString>::to_string(&v0);
    return Ok(struct4 {
        field_12: <UNKNOWN>
    });
}

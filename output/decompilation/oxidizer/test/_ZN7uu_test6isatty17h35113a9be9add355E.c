fn uu_test::isatty(a0: &Result<struct24, struct1>, a1: u32, a2: u32) -> u64 {
    let v0: struct25;  // [sp-0x50], Other Possible Types: Result<struct16, struct10>, i64
    let v1: struct24;  // [sp-0x30]
    let v3: i64;  // rax

    v0 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(a1, a2);
    if !v0 {
        v3 = core::num::<impl core::str::traits::FromStr for i32>::from_str();
        if !(v3 & 1) {
            isatty(v3 >> 32 & 4294967295 & 4294967295);
            return Err(struct1 {
                field_0: (v4 as i32 == 1) as u8 as u8
            });
        }
    }
    v0 = struct25 {
        field_0: 1
        field_8: a1
        field_24: 1
    };
    v1 = <T as alloc::string::ToString>::to_string(&v0);
    return Ok(struct24 {
        field_0: v4 as i32
        field_4: *((&v1 as &char + 4) as &i128)
        field_20: *((&v1 as &char + 20) as &i32)
    });
}

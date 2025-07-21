fn uu_test::isatty(a1: i64, a2: i64) -> Result<struct24, struct1> {
    let a0: u64;  // rsi
    let v0: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0x50], Other Possible Types: struct24, u64
    let v1: u64;  // [bp-0x48]
    let v2: u64;  // [bp-0x40]
    let v3: u8;  // [bp-0x38]
    let v4: u32;  // [bp-0x30]
    let v5: u128;  // [bp-0x2c]
    let v6: i8;  // [bp-0x1c]
    let v9: i64;  // rdi
    let v10: i64;  // rdi
    let v11: core::result::Result<i32, core::num::error::ParseIntError>;  // rax:rax

    v0 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(a0, a1);
    if let Ok(_) = v0 {
        v11 = core::num::<impl core::str::traits::FromStr for i32>::from_str(v1, v2) as u128;
        if !(v11 as u8 & 1) {
            *((v9 + 8) as &u8) = (isatty((v11 >> 32) as u32) == 1) as u8 as u8;
            *(v9 as &i64) = 7;
            return;
        }
    }
    v0 = 1;
    v1 = a0;
    v2 = a1;
    v3 = 1;
    v0 = <T as alloc::string::ToString>::to_string(a1);
    *((v10 + 28) as &i32) = *(&v6 as &i32);
    *((v10 + 12) as &u128) = v5;
    *(v10 as &i64) = 5;
    *((v10 + 8) as &u32) = v4;
    return;
}

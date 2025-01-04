fn uu_test::isatty(a0: &Result<struct24, struct1>, a1: u32, a2: u32) -> u64 {
    let v0: i64;  // [sp-0x50], Other Possible Types: Result<struct16, struct10>, struct25
    let v1: i64;  // [sp-0x48]
    let v2: i64;  // [sp-0x40]
    let v3: i192;  // [sp-0x30], Other Possible Types: struct24
    let v5: i64;  // rax
    let v6: i64;  // rax

    v0 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(a1, a2);
    if !v0 {
        v5 = core::num::<impl core::str::traits::FromStr for i32>::from_str(v1, v2);
        if !(v5 & 1) {
            v6 = isatty(v5 >> 32 & 4294967295 & 4294967295);
            *((a0 + 8) as &u8) = v6 == 1;
            *(a0 as &i64) = 7;
            return v6;
        }
    }
    v0 = struct25 {
        field_0: 1
        field_8: a1
        field_24: 1
    };
    v3 = <T as alloc::string::ToString>::to_string(&v0);
    v6 = v3;
    *((a0 + 28) as &i32) = *((&v3 as &char + 20) as &i32);
    *((a0 + 12) as &i128) = *((&v3 as &char + 4) as &i128);
    *(a0 as &i64) = 5;
    *((a0 + 8) as &i32) = v6;
    return v6;
}

fn uu_test::isatty(a0: void*, a1: u32, a2: u32) -> u64 {
    let v0: Result<struct16, struct10>;  // [sp-0x50], Other Possible Types: u64, struct25
    let v1: u64;  // [sp-0x48]
    let v2: u64;  // [sp-0x40]
    let v3: u8;  // [bp-0x30]
    let v4: i8;  // [bp-0x2c]
    let v5: i8;  // [bp-0x1c]
    let v7: u64;  // rax
    let v8: u64;  // rax

    v0 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(a1, a2);
    if !v0 {
        v7 = core::num::<impl core::str::traits::FromStr for i32>::from_str(v1, v2);
        if !(v7 & 1) {
            v8 = isatty(v7 >> 32 & 4294967295 & 4294967295) as i64;
            a0->field_8 = v8 == 1;
            a0->field_0 = 7;
            return v8;
        }
    }
    *(&v0 as &struct25) = struct25 {
        field_0: 1
        field_8: a1
        field_24: 1
    };
    <T as alloc::string::ToString>::to_string(&v3, &v0);
    v8 = *(&v3 as &i32);
    *((&a0->field_c as &char + 12) as &i8) = v5;
    (&a0->padding_9)[1] = v4;
    a0->field_0 = 5;
    a0->field_8 = v8;
    return v8;
}

fn uu_test::isatty(a0: void*, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: void*;  // [sp-0x88]
    let v1: u64;  // [sp-0x80]
    let v2: void*;  // [sp-0x78]
    let v3: u128;  // [sp-0x70], Other Possible Types: Enum
    let v4: u8;  // [bp-0x60]
    let v5: u64;  // [sp-0x58], Other Possible Types: void*, Enum
    let v6: void*;  // [sp-0x48], Other Possible Types: u64
    let v7: u64;  // [sp-0x38]
    let v8: u64;  // [sp-0x30]
    let v9: u64;  // [sp-0x28]
    let v10: u8;  // [sp-0x20]
    let v12: u64;  // rax
    let v13: u64;  // rax

    v5 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(a1, a2);
    if !v5 {
        v12 = core::num::<impl core::str::traits::FromStr for i32>::from_str(*((&v5 as &char + 8) as &i64), v6);
        if !(v12 & 1) {
            v13 = isatty(v12 >> 32 & 4294967295 & 4294967295) as i64;
            a0->field_8 = v13 == 1;
            a0->field_0 = 7;
            return v13;
        }
    }
    v0 = 0;
    v1 = 1;
    v2 = 0;
    v9 = 32;
    v10 = 3;
    v5 = 0;
    v6 = 0;
    v7 = &v0;
    v8 = &g_4e1cb0;
    v3 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(a1, a2);
    if !(!v3 as i64 ? os_display::unix::write(&v5, *((&v3 as &char + 8) as &i64), *(&v4 as &i64), 1) as i8 : os_display::unix::write_escaped(&v5, a1, a2) as i8) {
        v13 = v0 as i32;
        *((&a0->field_c as &char + 12) as &i32) = *((&v2 as &char + 4) as &i32);
        *(&(&a0->padding_9)[1] as &i128) = *((&v0 as &char + 4) as &i128);
        a0->field_0 = 5;
        a0->field_8 = v13;
        return v13;
    }
    core::result::unwrap_failed(); /* do not return */
}

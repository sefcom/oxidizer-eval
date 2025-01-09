fn uu_join::parse_separator(a0: &Option<Result<struct1, struct16>>, a1: &u8, a2: u32) -> u64 {
    let v0: i64;  // [sp-0xa0]
    let v1: i64;  // [sp-0x98]
    let v2: i192;  // [sp-0x90], Other Possible Types: Result<struct16, struct10>, struct24
    let v3: i64;  // [sp-0x88]
    let v4: i64;  // [sp-0x80]
    let v5: i32;  // [bp-0x78]
    let v7: i64;  // [bp-0x60]
    let v8: i64;  // [sp-0x58]
    let v15: i64;  // r14
    let v16: i64;  // r15
    let v18: i32;  // edx

    v2 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(a1, a2);
    if v2 {
        v2 = <T as alloc::slice::hack::ConvertVec>::to_vec("non-UTF-8 multi-byte tab");
        v5 = 1;
        *((a0 + 8) as &double) = alloc::boxed::Box<T>::new(&v2);
        *((a0 + 16) as &&i64) = &g_5352b8;
        *(a0 as &i64) = 9223372036854775812;
    }
    v15 = v3;
    v16 = v4;
    v7 = v15;
    v8 = v16;
    v0 = v15;
    v1 = v15 + v16;
    if !(core::str::validations::next_code_point(&v0) as i32 && v18 != 0x110000) {
        core::option::expect_failed("valid string with at least one byte", "src/uu/join/src/join.rs"); /* do not return */
    }
    core::str::validations::next_code_point(&v0);
    return struct9 {
        field_0: 0x8000000000000000
        field_8: 0
    };
    <alloc::vec::Vec<u8> as core::convert::From<&str>>::from(a0, v15, v16);
}

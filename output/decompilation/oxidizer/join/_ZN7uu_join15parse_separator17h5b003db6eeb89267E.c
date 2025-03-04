fn uu_join::parse_separator(a0: &Option<Result<struct1, struct16>>, a1: &u8, a2: u32) -> u64 {
    let v0: i64;  // [sp-0xa0]
    let v1: i64;  // [sp-0x98]
    let v2: struct24;  // [sp-0x90], Other Possible Types: Result<struct16, struct10>, unsigned long
    let v3: i64;  // [sp-0x88]
    let v4: i64;  // [sp-0x80]
    let v5: i32;  // [bp-0x78]
    let v6: i64;  // [sp-0x60]
    let v7: i64;  // [sp-0x58]
    let v8: String;  // [sp-0x40]
    let v9: i32;  // [sp-0x28]
    let v12: i64;  // r14
    let v13: i64;  // r15
    let v14: i32;  // edx

    if a2 == 1 {
        return struct9 {
            field_0: 0x8000000000000000
            field_8: v11 as u8
        };
    }
    if !a2 {
        return struct8 {
            field_0: 9223372036854775810
        };
    }
    v2 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(a1, a2);
    if v2 {
        v2 = <T as alloc::slice::hack::ConvertVec>::to_vec("non-UTF-8 multi-byte tab");
        *(&v5 as &i32) = 1;
        *((a0 + 8) as &double) = alloc::boxed::Box<T>::new(&v2);
        *((a0 + 16) as &&i64) = &g_5352b8;
        *(a0 as &i64) = 9223372036854775812;
    }
    v12 = v3;
    v13 = v4;
    v6 = v12;
    v7 = v13;
    v0 = v12;
    v1 = v12 + v13;
    if !(core::str::validations::next_code_point(&v0) as i32 && v14 != 0x110000) {
        core::option::expect_failed("valid string with at least one byte", "src/uu/join/src/join.rs"); /* do not return */
    }
    if !core::str::validations::next_code_point(&v0) as i32 {
        <alloc::vec::Vec<u8> as core::convert::From<&str>>::from(a0, v12, v13);
    } else {
        if !(v14 == 92 && v14 == 48) {
            v8 = format!("multi-character tab {}", &v6);
            v9 = 1;
            *((a0 + 8) as &double) = alloc::boxed::Box<T>::new(&v8);
            *((a0 + 16) as &&i64) = &g_5352b8;
            *(a0 as &i64) = 9223372036854775812;
        }
        return struct9 {
            field_0: 0x8000000000000000
            field_8: 0
        };
    }
}
